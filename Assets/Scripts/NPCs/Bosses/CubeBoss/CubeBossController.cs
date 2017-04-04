using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;
using Saitama.Weapons;
using Saitama.Weapons.AirToAirMissle;

public class CubeBossController : MonoPerController {
    public int satelliteNumber = 100;
    public int satelliteMaxNumber = 200;
    public int spawnNumberInTime = 2;
    public float timeBornSatellite = 0.125f;
    public float timeSatelliteMoveToTarget = 0.125f;
    public LayerMask targetAlert;
    public LayerMask targetShips;
    public LayerMask targetWeapons;
    public float rangeAlertChecker = 9f;
    public float rangeTargetChecker = 5f;
    public float rangeWeaponChecker = 5f;
    public float rangeMissleExecutingChecker = 4f;
    public float timeBetweenMissleExecuted = 5f;
    public float missleLifeTime = 5f;
    public float missleSpeed = 600f;
    public int numOfMissleHandler = 20;
    public float missleExecuteDelay = 0.05f;

    [Header("Satellite feature")]
    public float satelliteHealth = 10f;
    public float satelliteVelocity = 100f;
    public float bulletLifeTime = 1f;
    public float bulletSpeed = 600f;
    public float timeBetweenSatelliteBulletShoot = 750f;
    public float rangeShootTarget;
    public int satelliteBulletRemain = 20;
    public LayerMask satelliteTargets;

    private List<CubeSatellite> _satellites;
    private float _nextSatelliteIsBorn;
    private float _nextSatelliteMoveToTarget;
    private float _maxNumber;
    private Transform _cachedTransform;
    private Rigidbody _rigid;
    private int _spawnNumberInTime;
    private CollisionChecker _collisionAlertChecker;
    private CollisionChecker _collisionTargetChecker;
    private CollisionChecker _collisionWeaponChecker;
    private CollisionChecker _collisionMissleExecutedChecker;
    private CubeMissleHandler[] _missleHandlers;
    private System.Random _random;

    void Setup(){
        _satellites = new List<CubeSatellite>();
    }

    void Begin(){
        _random = new System.Random();
        _cachedTransform = transform;
        _nextSatelliteIsBorn = Time.time + timeBornSatellite;
        _nextSatelliteMoveToTarget = Time.time + timeSatelliteMoveToTarget;
        _rigid = GetComponent<Rigidbody>();
        _missleHandlers = new CubeMissleHandler[numOfMissleHandler];
        // Initialize collision checkers
        InitCollisionCheckers();
        // Initialize missle handlers
        InitMissleHandlers();

        StartCoroutine(OnRemovingSatellite());
    }

    void OnePunch(){
        //_rigid.velocity = _rigid.rotation * Vector3.forward * 50f;
    }

    void TwoPunch(){
        BornSatellites();
        RotateInAir();

        _collisionAlertChecker.Check(this);
        _collisionTargetChecker.Check(this);
        //_collisionWeaponChecker.Check(this);
        _collisionMissleExecutedChecker.Check(this);

        Debug.DrawLine(_cachedTransform.position
            , _cachedTransform.position + Vector3.right * rangeTargetChecker
            , Color.white);

        Debug.DrawLine(_cachedTransform.position
            , _cachedTransform.position + Vector3.up * rangeAlertChecker
            , Color.blue);
    }

    private List<Vector3> GeneratePositionsOnCubeSurface(int t){
        var list = new List<Vector3>();
        var sides = new Vector3[] { Vector3.right, Vector3.left, Vector3.up, Vector3.down, Vector3.forward, Vector3.back };

        for (var i = 0; i < t; i++)
        {
            Randomize:
            var side = sides[Random.Range(0, sides.Length)];
            side.x = side.x == 1 || side.x == -1 ? side.x : Random.Range(-0.85f, 0.85f);
            side.y = side.y == 1 || side.y == -1 ? side.y : Random.Range(-0.85f, 0.85f);
            side.z = side.z == 1 || side.z == -1 ? side.z : Random.Range(-0.85f, 0.85f);
            if (list.Count > 0)
            {
                if (list.Contains(side))
                {
                    goto Randomize;
                }
            }
            list.Add(side);
        }
        return list;
    }

    private void InitMissleHandlers(){
        var sides = new Vector3[] { Vector3.right, Vector3.left, Vector3.up, Vector3.down, Vector3.forward, Vector3.back };
        var positions = GeneratePositionsOnCubeSurface(numOfMissleHandler);

        for (var i = 0; i < _missleHandlers.Length; i++)
        {
            _missleHandlers[i] = Require<CubeMissleHandler>("_mh_" + i, (missleHandler) =>
                {   
                    var position = positions[i];
                    var rotation = Quaternion.Euler(new Vector3(
                        Mathf.Abs(position.y) == 1 ? position.y * -90f 
                            : position.z == 1 ? 0f : position.z == -1 ? 180f : 0f
                        , Mathf.Abs(position.x) == 1 ? position.x * 90f : 0f
                        , 0f
                    ));
                    missleHandler.Transform.SetParent(_cachedTransform);
                    missleHandler.Transform.localPosition = position;
                    missleHandler.Transform.localRotation = rotation;
                    missleHandler.Transform.localScale = Vector3.one;
                    missleHandler.TimeBetweenExecute = timeBetweenMissleExecuted;
                    missleHandler.LifeTime = missleLifeTime;
                    missleHandler.Speed = missleSpeed;
                    missleHandler.Targets = satelliteTargets;
                });
        }
    }

    private void InitCollisionCheckers(){
        // Collision ALERT checker
        _collisionAlertChecker = new CollisionChecker(targetAlert, rangeAlertChecker);
        _collisionAlertChecker.OnHit += (component, colliders) =>
            {
                _satellites.Where(x => !colliders.Select(c=>c.transform).Contains(x.target))
                    .ToList()
                    .ForEach(x => {
                        x.target = null;
                        x.scale = Vector3.zero;
                    });
            };

        // Collision TARGET checker
        _collisionTargetChecker = new CollisionChecker(targetShips, rangeTargetChecker);
        _collisionTargetChecker.OnHit += (component, colliders) =>
            {
                if(colliders.Any() && _satellites.Any(x => !x.hasTarget)){
                    colliders = colliders.OrderBy(x => _random.Next()).ToArray();
                    var satellite = _satellites.FirstOrDefault(x => !x.hasTarget);
                    satellite.target = colliders[0].transform;
                    satellite.scale = colliders[0].transform.localScale;
                }
            };

        // Collision WEAPON checker
        _collisionWeaponChecker = new CollisionChecker(targetWeapons, rangeWeaponChecker);
        _collisionWeaponChecker.OnHit += (component, colliders) =>
            {
                
            };
        
        var missledelay = Time.time + missleExecuteDelay;
        _collisionMissleExecutedChecker = new CollisionChecker(targetShips, rangeMissleExecutingChecker);
        _collisionMissleExecutedChecker.OnHit += (component, colliders) =>
        {
            if (colliders.Any())
            {
                    if(Time.time > missledelay){
                        colliders = colliders.OrderBy(x => _random.Next()).ToArray();
                        var missleHandler = _missleHandlers.OrderBy(x => _random.Next()).FirstOrDefault();
                        missleHandler.target = colliders[0].transform;
                        missleHandler.HoldTrigger();        
                        missledelay = Time.time + missleExecuteDelay;
                    }
            }
        };
    }

    private void RotateInAir(){
        _cachedTransform.Rotate(50f * Time.fixedDeltaTime * .2f, 70f * Time.fixedDeltaTime * .2f, 25f * Time.fixedDeltaTime * .2f);
    }

    //***** SATELLITE FEATURES *****
    private void BornSatellites()
    {
        if (Time.time > _nextSatelliteIsBorn)
        {
            _nextSatelliteIsBorn = Time.time + timeBornSatellite;
            if (_spawnNumberInTime == 0)
            {
                if (_satellites.Count >= satelliteNumber)
                    return;
                InstantiateSatellite();
                return;
            }
            while (_spawnNumberInTime > 0 && _satellites.Count < satelliteMaxNumber)
            {
                InstantiateSatellite();
                _spawnNumberInTime--;
            }
        }
    }

    private void InstantiateSatellite(){
        var satellitePosition = Random.insideUnitSphere * _cachedTransform.localScale.magnitude + _cachedTransform.position;
        var satellite = RequireMono<CubeSatellite>(satellitePosition, Random.rotation);
        satellite.health = satelliteHealth;
        satellite.mainTarget = transform;
        satellite.velocity = satelliteVelocity;
        satellite.bulletLifeTime = bulletLifeTime;
        satellite.bulletSpeed = bulletSpeed;
        satellite.satelliteTargets = satelliteTargets;
        satellite.timeBetweenBulletShoot = timeBetweenSatelliteBulletShoot;
        satellite.rangeShootTarget = rangeShootTarget;
        satellite.bulletRemain = satelliteBulletRemain;

        _satellites.Add(satellite);
    }

    private IEnumerator OnRemovingSatellite(){
        while (true)
        {
            if (!_satellites.Any(x => x == null))
                yield return null;

            _spawnNumberInTime += spawnNumberInTime * _satellites.Count(x => x == null);
            _satellites.RemoveAll(x => x == null);

            yield return null;
        }
    }
}

