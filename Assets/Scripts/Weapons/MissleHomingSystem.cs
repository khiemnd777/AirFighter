using UnityEngine;
using System;
using System.Collections;
using System.Linq;

namespace Saitama.Weapons{
    public class MissleHomingSystem : MonoController {
        Rigidbody _rigidbody;
		float _maxDegreesDelta;
        GameObject _target;
        Transform _cachedTransform;
        float _deltaTimeHoming = 0.15f;
        float _timeHoming;

        public GameObject Target { get { return _target; } set { _target = value; } }

        void Begin(){
            _cachedTransform = transform;
            _maxDegreesDelta = 20f;
            _rigidbody = GetComponent<Rigidbody>();
            _timeHoming = Time.time + _deltaTimeHoming;
        }

        void OnePunch(){
            if (_target == null)
                return;
            if (Time.time > _timeHoming)
            {
                MoveRotation();
            }
        }

        void MoveRotation (){
            var dist = _target.transform.position - _cachedTransform.position;
            Utility.MoveRotation(_rigidbody, _cachedTransform, dist, 15f);
            //_cachedTransform.LookAt(_target.transform);
        }
	}
}