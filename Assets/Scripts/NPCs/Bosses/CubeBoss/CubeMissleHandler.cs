using UnityEngine;
using System;
using Saitama.Weapons;
using Saitama.Weapons.AirToAirMissle;

public class CubeMissleHandler : MissleHandler
{
    public static string Prefab = "Prefabs/Missle projectile";

    private float _nextExecuteTime;

    public Transform target;
    public bool hasTarget;

    public CubeMissleHandler(MonoBehaviour mono) : base (mono)
    {
        
    }

    public override void Init()
    {
        
    }

    public override void HoldTrigger()
    {
        if (target == null)
        {
            if (hasTarget)
            {
                hasTarget = false;
            }
        }
        else
        {
            hasTarget = true;
            if (Time.time > _nextExecuteTime)
            {
                if (OnTriggerHold != null)
                {
                    OnTriggerHold.Invoke();
                }

                var missle = RequireMono<AirToAirMissle>(
                    _transform.position
                    , _transform.rotation
                    , typeof(MissleHomingSystem));

                missle.Speed = _speed;
                missle.Damage = _damage;
                missle.Targets = _targets;
                Destroy(missle.gameObject, _lifeTime);

                var mhs = missle.GetComponent<MissleHomingSystem>();
                mhs.Target = target.gameObject;

                _nextExecuteTime = Time.time + _timeBetweenExecute / 1000f;
                target = null;
            }
        }
    }

    public override void Update()
    {

    }
}