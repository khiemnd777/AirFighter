using UnityEngine;
using System.Collections;
using Saitama.Ships;
using Saitama.Extensions;

namespace Saitama.Weapons.MachineGun
{
	public class MachineGunBullet : Bullet
	{
        public static string Prefab = "Prefabs/Bullet";

		CollisionChecker _collisionChecker;

        Transform _cachedTransform;
        Rigidbody _rg;

        void Begin()
        {
            _rg = GetComponent<Rigidbody>();
            _cachedTransform = transform;
            _cachedTransform.Rotate(Random.Range(-.5f, .5f), Random.Range(-.5f, .5f), .0f);
            _collisionChecker = new CollisionChecker(_targets);
            _collisionChecker.OnHit += (bullet, colliders) => {
                for(var inx = 0; inx < colliders.Length; inx++){
                    var target = colliders[inx];
                    Require<ScoreManager>(score => {
                        score.Hit(target.gameObject, _damage);
                    });
                    Require<AttackerIdentifier>(targetIdentifier => {
                        targetIdentifier.Identify(target.gameObject, _damage);
                    });
                    // Kill all projectiles when it be in collision process
                    Destroy(bullet.gameObject);
                }
            };
            _rg.velocity = Utility.CalculateVelocity(_rg.rotation, _speed);
        }

        void TwoPunch()
        {
            if (_cachedTransform.parent != null)
            {
                _cachedTransform.parent = null;
            }
            var distance = _speed * Time.fixedDeltaTime;
//            _cachedTransform.Translate(Vector3.forward * distance);
            _collisionChecker.Check(this, distance / 2.5f);
        }
	}
}

