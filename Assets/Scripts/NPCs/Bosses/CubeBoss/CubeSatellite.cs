using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;

public class CubeSatellite : MonoController {
    public static string Prefab = "Prefabs/CubeSatellite";

    public Transform target;

    private Rigidbody _rigid;
    private Transform _cachedTransform;

    void Begin(){
        _rigid = GetComponent<Rigidbody>();
        _cachedTransform = transform;
    }

    void OnePunch(){
        _cachedTransform.RotateAround(target.position, _cachedTransform.up, 100f * Time.deltaTime);
        _rigid.position = target.position + (_rigid.position - target.position).normalized * 30f;
        _rigid.velocity = _rigid.rotation * Vector3.forward * 100f;

    }

    void ThreePunch(){
        
    }
}
