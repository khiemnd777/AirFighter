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
        _lifeTime = 2f;
        _speed = 500f;
        _timeBetweenExecute = 200f;
    }

    public override void HoldTrigger (){
        if (Time.time > nextShotTime)
        {
            var machineGunBullet = RequireMono<MachineGunBullet>(_transform.position, _transform.rotation, _transform);
            machineGunBullet.LifeTime = _lifeTime;
            machineGunBullet.Speed = _speed;
            Destroy(machineGunBullet.gameObject, _lifeTime);
            nextShotTime = Time.time + _timeBetweenExecute / 1000f;
        }
    }

    public override void Update()
    {
        
    }
}

