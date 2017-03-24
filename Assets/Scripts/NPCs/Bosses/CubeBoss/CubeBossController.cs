using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;

public class CubeBossController : MonoController {
    public int satelliteNumber = 100;
    public int satelliteMaxNumber = 200;
    public int spawnNumberInTime = 2;
    public float timeBornSatellite = 0.125f;

    private List<CubeSatellite> _satellites;
    private float _nextSatelliteIsBorn;
    private Transform _cachedTransform;
    private Transform _model;
    private Rigidbody _rigid;
    private int _spawnNumberInTime;
    private float _maxNumber;

    void Setup(){
        _satellites = new List<CubeSatellite>();
    }

    void Begin(){
        _nextSatelliteIsBorn = Time.time + timeBornSatellite;
        _cachedTransform = transform;
        _model = GetChildMonoComponent<Transform>("Cube");
        _rigid = GetComponent<Rigidbody>();
        StartCoroutine(OnRemovingSatellite());
    }

    void OnePunch(){
        //_rigid.velocity = _rigid.rotation * Vector3.forward * 50f;
    }

    void TwoPunch(){
        BornSatellites();
        RotateInAir();
    }

    private void RotateInAir(){
        _cachedTransform.Rotate(50f * Time.fixedDeltaTime * .2f, 70f * Time.fixedDeltaTime * .2f, 25f * Time.fixedDeltaTime * .2f);
    }

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
        satellite.target = transform;
        _satellites.Add(satellite);
    }

    private IEnumerator OnRemovingSatellite(){
        while (true)
        {
            if (!_satellites.Any(x => x == null))
                yield return null;
            var removedIndex = -1;
            for(var inx = 0; inx < _satellites.Count / 2 + (_satellites.Count % 2 == 0 ? 0 : 1); inx++){
                var satellite = _satellites[inx];
                if (satellite == null)
                {
                    removedIndex = inx;
                    break;
                }
            }
            if (removedIndex == -1)
            {
                for(var inx = _satellites.Count - 1; inx >= _satellites.Count / 2; inx--){
                    var satellite = _satellites[inx];
                    if (satellite == null)
                    {
                        removedIndex = inx;
                        break;
                    }
                }
            }

            if (removedIndex > -1)
            {
                _spawnNumberInTime += spawnNumberInTime;
                _satellites.RemoveAt(removedIndex);
            }
            yield return null;
        }
        yield return null;
    }
}
