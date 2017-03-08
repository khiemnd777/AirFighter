using System;
using System.Collections;
using UnityEngine;
using Saitama.Ships;

namespace Saitama.Weapons.MachineGun
{
	public class MachineGun : Gun
	{
        public static string Prefab = "Prefabs/Gun projectile";

        private GunFireButton _gunFireBtn;
        private float nextShotTime;
        
        public MachineGun(MonoBehaviour mono) 
            : base(mono){

		}

        public override void Init()
        {
            base.Init();
            _gunFireBtn = GetMonoComponent<GunFireButton>("SmartphoneController/GunFireButton");
            _lifeTime = 3f;
            _speed = 3000f;
            _timeBetweenExecute = 100f;
        }

		public override void HoldTrigger (){
            if (_gunFireBtn.isTriggered)
            {
                if (OnTriggerHold != null)
                {
                    OnTriggerHold.Invoke();
                }
                if (Time.time > nextShotTime)
                {
                    var machineGunBullet = RequireMono<MachineGunBullet>(_transform.position, _transform.rotation, _transform);
                    machineGunBullet.LifeTime = _lifeTime;
                    machineGunBullet.Speed = _speed;
                    machineGunBullet.Targets = _targets;
                    Destroy(machineGunBullet.gameObject, _lifeTime);
                    nextShotTime = Time.time + _timeBetweenExecute / 1000f;
                }
            }
		}
	}
}