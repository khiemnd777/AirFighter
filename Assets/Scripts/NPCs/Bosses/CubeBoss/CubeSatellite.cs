using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;
using Saitama.Weapons;

public class CubeSatellite : MonoController {
    public static string Prefab = "Prefabs/CubeSatellite";

    public Transform target;
    public Transform mainTarget;
    public Vector3 scale;
    public float velocity = 200f;
    [System.NonSerialized]
    public bool hasTarget;
    public float bulletLifeTime = 1f;
    public float bulletSpeed = 600f;
    public float timeBetweenBulletShoot = 750f;
    public float rangeShootTarget;
    public int bulletRemain;
    public LayerMask satelliteTargets;

    private Rigidbody _rigid;
    private Transform _cachedTransform;
    private CubeSatelliteGun _gun;
    private CollisionChecker _collisionShootChecker;

    void Begin(){
        _rigid = GetComponent<Rigidbody>();
        _cachedTransform = transform;

        // Init gun
        _gun = Require<CubeSatelliteGun>((gun) =>
            {
                gun.Transform.SetParent(_cachedTransform);
                gun.Transform.localPosition = new Vector3(.0f, .0f, .0f);
                gun.Transform.localRotation = Quaternion.Euler(new Vector3(.0f, .0f, 0f));
                gun.Transform.localScale = new Vector3(1f, 1f, 1f);
                gun.LifeTime = bulletLifeTime;
                gun.Speed = bulletSpeed;
                gun.TimeBetweenExecute = timeBetweenBulletShoot;
                gun.Targets = satelliteTargets;
            });

        // Init collision shoot checker
        _collisionShootChecker = new CollisionChecker(satelliteTargets, rangeShootTarget);
        _collisionShootChecker.OnHit += (component, colliders) =>
        {
                if(colliders.Any()){
                    GetFireTarget();
                }
        };
    }

    void OnePunch(){
        Move();
    }

    void TwoPunch(){
        _collisionShootChecker.Check(this);
    }

    void OnTriggerEnter(Collider other){
        if (other == null)
            return;
        if (bulletRemain == 0 && IsInLayerMask(other.gameObject.layer, satelliteTargets))
        {
            Destroy(_cachedTransform.gameObject);
        }
    }

    private void Move(){
        if (target == null)
        {
            if (hasTarget)
            {
                _cachedTransform.rotation = Random.rotation;
                hasTarget = false;
            }
            Utility.RotateAround(_rigid, _cachedTransform, mainTarget, _cachedTransform.up, mainTarget.localScale.magnitude, velocity, 15f);
        }
        else
        {
            hasTarget = true;
            var dist = target.transform.position - _cachedTransform.position;

            // meaning when it has out of bullet, it will go straigth to target to destroy by itself
            if (bulletRemain != 0 && dist.magnitude <= target.localScale.magnitude * 2f)
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

            // Go straigth to target when it has out of bullet
            if (bulletRemain == 0)
            {
                _cachedTransform.LookAt(target);
            }
        }

        _rigid.velocity = Utility.CalculateVelocity(_rigid.rotation, velocity);
    }

    private void GetFireTarget(){
        if (target == null)
        {
            _gun.Transform.localRotation = Quaternion.Euler (0.0f, 0.0f, 0.0f);
            return;
        }
        var wantedRotation = Quaternion.LookRotation (target.transform.position - _gun.Transform.position);
        _gun.Transform.rotation = wantedRotation;
        _gun.HoldTrigger(() =>
            {
                if(bulletRemain > 0)
                {
                    bulletRemain--;
                }
                return bulletRemain > 0;
            });
    }
}
