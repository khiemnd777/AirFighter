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

    private Rigidbody _rigid;
    private Transform _cachedTransform;
    private bool hasTarget;

    void Begin(){
        _rigid = GetComponent<Rigidbody>();
        _cachedTransform = transform;
    }

    void OnePunch(){
        if (target == null)
        {
            if (hasTarget)
            {
                _cachedTransform.rotation = Random.rotation;
                hasTarget = false;
            }
            _cachedTransform.RotateAround(mainTarget.position, _cachedTransform.up, velocity * Time.deltaTime);
            var dist = _rigid.position - mainTarget.position;
            var targetMagnitude = mainScale.magnitude;
            _rigid.position = Vector3.Lerp(_rigid.position, mainTarget.position + dist.normalized * targetMagnitude, 15f / (dist.magnitude));
        }
        else
        {
            hasTarget = true;
            var dist = target.transform.position - _cachedTransform.position;
            if (dist.magnitude <= target.localScale.magnitude * 2f)
            {
                var side = Random.Range(-1, 1);
                side = side == 0 ? 1 : side;
                dist.Set(side * target.localScale.magnitude * 2f, side * target.localScale.magnitude * 2f, side * target.localScale.magnitude * 2f);
            }
            var targetRotation = Quaternion.LookRotation (dist, _cachedTransform.up);
            _rigid.MoveRotation (Quaternion.RotateTowards(_cachedTransform.rotation, targetRotation, 7f));
        }

        _rigid.velocity = _rigid.rotation * Vector3.forward * velocity;
    }
}
