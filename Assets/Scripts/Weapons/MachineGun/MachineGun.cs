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

		public override void HoldTrigger (){
			if (Input.GetMouseButton (0)) {
				if (OnTriggerHold != null) {
					OnTriggerHold.Invoke ();
				}

				if (Time.time > nextShotTime) { 
					using (var bullet = InstantiateRawComponent<MachineGunBullet> ("", _targets)) {
						bullet.Parent = this;
						bullet.LifeTime = BulletLifeTime;
						var component = bullet.Start(_monoComponent.transform.position, _monoComponent.transform.rotation);
						bullet.Fire (BulletSpeed, component);
						nextShotTime = Time.time + TimeBetweenExecute / 1000f;
					}
				}
			}
		}
	}
}