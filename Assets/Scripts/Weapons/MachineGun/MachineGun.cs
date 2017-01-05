using System;
using UnityEngine;
using System.Collections;

namespace Saitama.Weapons.MachineGun
{
	public class MachineGun : Gun
	{
		private float nextShotTime;

		public MachineGun(MonoBehaviour mono) : base(mono){
			
		}

		public override void IncreaseLevel (int level)
		{
			//throw new System.NotImplementedException ();
		}

		public override void HoldTrigger (){
			if (Input.GetMouseButton (0)) {
				if (OnTriggerHold != null) {
					OnTriggerHold.Invoke ();
				}

				if (Time.time > nextShotTime) { 
					using (var bullet = InstantiateRawComponent<MachineGunBullet> ("", _targets)) {
						bullet.Parent = this;
						bullet.LifeTime = BulletLifeTime;
						bullet.Level = _level;
                        bullet.StartPosition = _monoComponent.transform.position;
                        bullet.StartRotation = _monoComponent.transform.rotation;
						var component = bullet.Start();
						bullet.Fire (BulletSpeed, component);
						nextShotTime = Time.time + TimeBetweenExecute / 1000f;
					}
				}
			}
		}
	}
}