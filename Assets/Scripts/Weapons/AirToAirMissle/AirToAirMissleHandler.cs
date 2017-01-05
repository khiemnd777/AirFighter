using UnityEngine;
using System.Collections;

namespace Saitama.Weapons.AirToAirMissle
{
    public class AirToAirMissleHandler : MissleHandler
    {
        private float _nextExecuteTime;
        private bool _isExecuted;
        private readonly MissleHomingSystem _missleHomingSystem;

        public AirToAirMissleHandler(MonoBehaviour mono)
            : base(mono)
        {
            _missleHomingSystem = new MissleHomingSystem(mono);
        }

        public override void Init()
        {
            base.Init();
            _missleHomingSystem.MaxDegreesDelta = 20;
            SetComponent(_missleHomingSystem);
            IncreaseLevel(3);
        }

        public void SetLockers(TargetLocker[] lockers)
        {
            _missleHomingSystem.SetLockers(lockers);
        }

        public override void IncreaseLevel(int level)
        {
            _level = level;
            switch (level)
            {
                default:
                case 1:
                    {
                        _slot = 1;
                        _lifeTime += 0;
                        _damage += 0;
                        _speed += 0;

                    }
                    break;
                case 2:
                    {
                        _slot = 2;
                        _lifeTime += 1;
                        _damage += 10;
                        _speed += 500;
                    }
                    break;
                case 3:
                    {
                        _slot = 3;
                        _lifeTime += 2;
                        _damage += 10;
                        _speed += 0;
                    }
                    break;

            }
        }

        public override void HoldTrigger()
        {
            if (Input.GetMouseButton(1))
            {
                if (OnTriggerHold != null)
                {
                    OnTriggerHold.Invoke();
                }
                
                if (Time.time > _nextExecuteTime && !_isExecuted)
                {
                    for (var i = 0; i < _slot; i++)
                    {
                        using (var missle = InstantiateRawComponent<AirToAirMissle>("", _targets))
                        {
                            var side = _name == "right" ? 1 : -1;
                            missle.Parent = this;
                            missle.LifeTime = _lifeTime;
                            missle.Speed = _speed;
                            missle.Damage = _damage;
                            missle.Level = _level;
                            missle.StartPosition = _monoComponent.transform.position + new Vector3(i * side, 0, 0);
                            missle.StartRotation = _monoComponent.transform.rotation;
                            _missleHomingSystem.GoHome(missle);
                            _nextExecuteTime = Time.time + _timeBetweenExecute / 1000f;
                            _isExecuted = true; 
                        }   
                    }
                }
            }
        }

        public override void ReleaseTrigger()
        {
            if (Input.GetMouseButtonUp(1))
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