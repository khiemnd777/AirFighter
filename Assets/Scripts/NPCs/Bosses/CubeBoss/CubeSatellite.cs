using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;

public class CubeSatellite : MonoController {
    public static string Prefab = "Prefabs/CubeSatellite";

    public Transform target;
    public Transform mainTarget;
    public Vector3 scale;
    public Vector3 mainScale;
    public float velocity = 200f;
    [System.NonSerialized]
    public bool hasTarget;

    private Rigidbody _rigid;
    private Transform _cachedTransform;
    private CubeSatelliteGun _gun;

    void Begin(){
        _rigid = GetComponent<Rigidbody>();
        _cachedTransform = transform;
        _gun = Require<CubeSatelliteGun>((gun) =>
            {
                gun.Transform.SetParent(_cachedTransform);
                gun.Transform.localPosition = new Vector3(.0f, .0f, .0f);
                gun.Transform.localRotation = Quaternion.Euler(new Vector3(.0f, .0f, 0f));
                gun.Transform.localScale = new Vector3(1f, 1f, 1f);
            });
    }

    void OnePunch(){
        if (target == null)
        {
            if (hasTarget)
            {
                _cachedTransform.rotation = Random.rotation;
                hasTarget = false;
            }
            Utility.RotateAround(_rigid, _cachedTransform, mainTarget, _cachedTransform.up, mainScale.magnitude, velocity, 15f);
        }
        else
        {
            hasTarget = true;
            var dist = target.transform.position - _cachedTransform.position;
            if (dist.magnitude <= target.localScale.magnitude * 2f)
            {
                var sideX = Random.Range(-1, 1);
                var sideY = Random.Range(-1, 1);
                var sideZ = Random.Range(-1, 1);
                sideX = sideX == 0 ? 1 : sideX;
                sideY = sideY == 0 ? 1 : sideY;
                sideZ = sideZ == 0 ? 1 : sideZ;
                dist.Set(sideX * target.localScale.magnitude * 2f
                    , sideY * target.localScale.magnitude * 2f
                    , sideZ * target.localScale.magnitude * 2f);
            }
            Utility.MoveRotation(_rigid, _cachedTransform, dist, 7f);
        }

        _rigid.velocity = Utility.CalculateVelocity(_rigid.rotation, velocity);
    }

    void TwoPunch(){
        GetFireTarget();
    }

    private void GetFireTarget(){
        if (target == null)
        {
            _gun.Transform.localRotation = Quaternion.Euler (0.0f, 0.0f, 0.0f);
            return;
        }
        var wantedRotation = Quaternion.LookRotation (target.transform.position - _gun.Transform.position);
        //_gun.Transform.LookAt(target.position);
        _gun.Transform.rotation = wantedRotation;
        _gun.HoldTrigger();
    }
}
