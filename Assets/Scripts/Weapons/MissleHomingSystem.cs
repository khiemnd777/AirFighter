using UnityEngine;
using System;
using System.Collections;
using System.Linq;

namespace Saitama.Weapons{
    public class MissleHomingSystem : MonoController {
        Rigidbody _rigidbody;
		float _maxDegreesDelta;
        GameObject _target;

        public GameObject Target { get { return _target; } set { _target = value; } }

        void Begin(){
            _maxDegreesDelta = 20;
            _rigidbody = GetComponent<Rigidbody>();
        }

        void OnePunch(){
            if (_target == null)
                return;
            
            MoveRotation();
        }

        void MoveRotation (){
            var targetRotation = Quaternion.LookRotation (_target.transform.position - transform.position);
            _rigidbody.MoveRotation (Quaternion.RotateTowards(transform.rotation, targetRotation, _maxDegreesDelta));
        }
	}
}