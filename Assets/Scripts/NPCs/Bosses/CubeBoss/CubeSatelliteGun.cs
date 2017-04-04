using UnityEngine;
using System;
using Saitama.Weapons.MachineGun;

public class CubeSatelliteGun : MachineGun
{
    public static new string Prefab = "Prefabs/Gun projectile";

    private float nextShotTime;

    public CubeSatelliteGun(MonoBehaviour mono) : base(mono)
    {
        
    }

    public override void Init()
    {
        
    }

    public override void HoldTrigger (){
        if (Time.time > nextShotTime)
        {
            PrepareFire();
            nextShotTime = Time.time + _timeBetweenExecute / 1000f;
        }
    }

    public override void HoldTrigger (Func<bool> callback){
        if (Time.time > nextShotTime)
        {
            if (callback != null && !callback.Invoke())
            {
                return;
            }
            PrepareFire();
            nextShotTime = Time.time + _timeBetweenExecute / 1000f;
        }
    }

    private void PrepareFire(){
        var machineGunBullet = RequireMono<MachineGunBullet>(_transform.position, _transform.rotation);
        machineGunBullet.LifeTime = _lifeTime;
        machineGunBullet.Speed = _speed;
        machineGunBullet.Targets = _targets;
        Destroy(machineGunBullet.gameObject, _lifeTime);
    }

    public override void Update()
    {
        
    }
}

