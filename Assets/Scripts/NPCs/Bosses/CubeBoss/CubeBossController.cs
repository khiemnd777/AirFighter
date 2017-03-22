using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;

public class CubeBossController : MonoController {
    public int satelliteNumber = 100;
    public float timeBornSatellite = 0.125f;

    private List<CubeSatellite> _satellites;
    private float _nextSatelliteIsBorn;
    private Transform _cachedTransform;
    private Transform _model;
    private Rigidbody _rigid;

    void Setup(){
        _satellites = new List<CubeSatellite>(satelliteNumber);
    }

    void Begin(){
        _nextSatelliteIsBorn = Time.time + timeBornSatellite;
        _cachedTransform = transform;
        _model = GetChildMonoComponent<Transform>("Cube");
        _rigid = GetComponent<Rigidbody>();
    }

    void OnePunch(){
        _rigid.velocity = _rigid.rotation * Vector3.forward * 50f;
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
            if (_satellites.Count >= satelliteNumber)
                return;
            var satellitePosition = Random.insideUnitSphere * _model.localScale.magnitude + _cachedTransform.position;
            var satellite = RequireMono<CubeSatellite>(satellitePosition, Random.rotation);
            satellite.target = transform;
            _satellites.Add(satellite);
        }
    }
}
