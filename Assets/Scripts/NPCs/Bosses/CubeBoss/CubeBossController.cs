using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;
using Saitama.Weapons;

public class CubeBossController : MonoController {
    public int satelliteNumber = 100;
    public int satelliteMaxNumber = 200;
    public int spawnNumberInTime = 2;
    public float timeBornSatellite = 0.125f;
    public float timeSatelliteMoveToTarget = 0.125f;
    public LayerMask targetAlert;
    public LayerMask targetShips;
    public LayerMask targetWeapons;
    public float timeNumberCollisionAlertChecker = 8f;
    public float timeNumberCollisionTargetChecker = 4f;
    public float timeNumberCollisionWeaponChecker = 4f;
    public float satelliteVelocity = 100f;

    private List<CubeSatellite> _satellites;
    private float _nextSatelliteIsBorn;
    private float _nextSatelliteMoveToTarget;
    private Transform _cachedTransform;
    private Transform _model;
    private Rigidbody _rigid;
    private int _spawnNumberInTime;
    private float _maxNumber;
    private CollisionChecker _collisionAlertChecker;
    private CollisionChecker _collisionTargetChecker;
    private CollisionChecker _collisionWeaponChecker;
    private System.Random _random;

    void Setup(){
        _satellites = new List<CubeSatellite>();
    }

    void Begin(){
        _random = new System.Random();
        _cachedTransform = transform;
        _nextSatelliteIsBorn = Time.time + timeBornSatellite;
        _nextSatelliteMoveToTarget = Time.time + timeSatelliteMoveToTarget;
        _model = GetChildMonoComponent<Transform>("Cube");
        _rigid = GetComponent<Rigidbody>();

        // Initialize collision checkers
        InitCollisionCheckers();

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

        Debug.DrawLine(_cachedTransform.position
            , _cachedTransform.position + Vector3.right * _model.localScale.magnitude * timeNumberCollisionTargetChecker
            , Color.white);

        Debug.DrawLine(_cachedTransform.position
            , _cachedTransform.position + Vector3.right * _model.localScale.magnitude * timeNumberCollisionAlertChecker
            , Color.blue);
    }

    private void InitCollisionCheckers(){
        // Collision ALERT checker
        _collisionAlertChecker = new CollisionChecker(targetAlert, _model.localScale.magnitude * timeNumberCollisionAlertChecker);
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
        _collisionTargetChecker = new CollisionChecker(targetShips, _model.localScale.magnitude * timeNumberCollisionTargetChecker);
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
        _collisionWeaponChecker = new CollisionChecker(targetWeapons, _model.localScale.magnitude * timeNumberCollisionWeaponChecker);
        _collisionWeaponChecker.OnHit += (component, colliders) =>
            {
                
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
        var satellitePosition = Random.insideUnitSphere * _model.localScale.magnitude + _cachedTransform.position;
        var satellite = RequireMono<CubeSatellite>(satellitePosition, Random.rotation);
        satellite.mainTarget = transform;
        satellite.mainScale = _model.localScale;
        satellite.velocity = satelliteVelocity;
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

