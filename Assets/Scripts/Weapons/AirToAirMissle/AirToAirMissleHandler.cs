using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using Saitama.Ships;

namespace Saitama.Weapons.AirToAirMissle
{
    public class AirToAirMissleHandler : MissleHandler
    {
        public static string Prefab = "Prefabs/Missle projectile";

        private MissleLaunchButton _missleLaunchBtn;
        private float _nextExecuteTime;
        private bool _isExecuted;

        public AirToAirMissleHandler(MonoBehaviour mono)
            : base(mono)
        {
            
        }

        public override void Init()
        {
            base.Init();
            _missleLaunchBtn = GetMonoComponent<MissleLaunchButton>("SmartphoneController/MissleLaunchButton");
            _speed = 15000f;
            _lifeTime = 10f;
            _timeBetweenExecute = 1000f;
        }

        public override void HoldTrigger()
        {
            if (_missleLaunchBtn.isTriggered)
            {
                if (Time.time > _nextExecuteTime && !_isExecuted)
                {
                    if (OnTriggerHold != null)
                    {
                        OnTriggerHold.Invoke();
                    }

                    var missle = RequireMono<AirToAirMissle>(
                                     _transform.position
                        , _transform.rotation
                        , _transform
                        , typeof(MissleHomingSystem));
                    
                    missle.Speed = _speed;
                    missle.Damage = _damage;
                    missle.Targets = _targets;
                    Destroy(missle.gameObject, _lifeTime);

                    Require<TargetLockerSystem>(tls =>
                        {
                            var mhs = missle.GetComponent<MissleHomingSystem>();
                            mhs.Target = tls.GetTarget();

                            Require<TargetTrackerSystem>(tts =>
                                {
                                    tts.Track(missle, mhs.Target);
                                });
                        });

                    _nextExecuteTime = Time.time + _timeBetweenExecute / 1000f;
                    _isExecuted = true;

                }
            }
        }

        public override void ReleaseTrigger()
        {
            if (!_missleLaunchBtn.isTriggered)
            {
                if (OnTriggerRelease != null)
                {
                    OnTriggerRelease.Invoke();
                }
                _isExecuted = false;
            }
        }
    }
}