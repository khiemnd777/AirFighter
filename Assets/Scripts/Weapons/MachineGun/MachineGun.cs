using System;
using System.Collections;
using UnityEngine;
using Saitama.Ships;

namespace Saitama.Weapons.MachineGun
{
	public class MachineGun : Gun
	{
		private float nextShotTime;

        public MachineGun(MonoBehaviour mono, Component monoComponent) 
            : base(mono, monoComponent){
			
		}

        public override void Init()
        {
            base.Init();

            EventEmitter
                .Static
                .RemoveListener("bullet-hit", this, "BulletHit")
                .On("bullet-hit", this, "BulletHit");
        }

        public void BulletHit(Component bullet){
            Debug.Log(bullet);
        }

		public override void IncreaseLevel (int level)
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

		public override void HoldTrigger (){
			if (Input.GetMouseButton (0)) {
				if (OnTriggerHold != null) {
					OnTriggerHold.Invoke ();
				}
                var side = _name == "right" ? 1 : -1;

                //var angle = Quaternion.Angle(Quaternion.Euler(90,0,-180), _ship.MonoComponent.transform.localRotation);
                //var angle = Quaternion.AngleAxis(shipAngleY, Vector3.forward);
				if (Time.time > nextShotTime) {
                    for (var i = 0; i < _slot; i++)
                    {
                        using (var bullet = InstantiateRawComponent<MachineGunBullet> ("", _targets)) {
                            bullet.Parent = this;
                            bullet.LifeTime = _lifeTime;
                            bullet.Level = _level;
                            bullet.Damage = _damage;
                            bullet.StartPosition = _monoComponent.transform.position;
                            bullet.StartRotation = _monoComponent.transform.rotation;
                            var component = bullet.Start();
                            component.transform.SetParent(_monoComponent.transform);
                            component.transform.localPosition += (Vector3.right * i * side);
                            bullet.Fire (_speed, component);
                            nextShotTime = Time.time + TimeBetweenExecute / 1000f;
                        }  
                    }
				}
			}
		}
	}
}