using UnityEngine;
using System.Collections;
using Saitama.Extensions;
using Saitama.Ships;

namespace Saitama.Weapons.AirToAirMissle
{
	public class AirToAirMissle : Missle
	{
        public static string Prefab = "Prefabs/Missle";

        Rigidbody _rigidbody;
		float _speedUpTime = .5f;
		float _missleSpeedOnExecute = 2000f;
        float _timeSpeedUp;
		CollisionChecker _collisionChecker;

        void Begin()
        {
            _rigidbody = GetComponent<Rigidbody>();
            _timeSpeedUp = Time.time + _speedUpTime;
            _isExecuted = true;

            _collisionChecker = new CollisionChecker (_targets);
            _collisionChecker.OnHit += (missle, colliders) => {
                for(var inx = 0; inx < colliders.Length; inx++){
                    var target = colliders[inx];
                    Require<ScoreManager>(score => {
                        score.Hit(target.gameObject, _damage);
                    });
                    Require<AttackerIdentifier>(targetIdentifier => {
                        targetIdentifier.Identify(target.gameObject, _damage);
                    });
                    // Kill all projectiles when it be in collision process
                    Destroy(missle.gameObject);
                }
            };
        }

        void OnePunch()
        {
            if (transform.parent != null)
            {
                transform.parent = null;
            }
            _collisionChecker.Check(this, transform.localScale.magnitude);
            _rigidbody.velocity = Utility.CalculateVelocity(_rigidbody.rotation, _speed);
        }
	}
}