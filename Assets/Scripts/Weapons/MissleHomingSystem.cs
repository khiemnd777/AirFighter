using UnityEngine;
using System.Collections;
using System.Linq;

namespace Saitama.Weapons{
	public class MissleHomingSystem : CommonObject {
		private TargetLocker[] _lockers;
		private float _maxDegreesDelta;
		private RectTransform _targetTrackerUI;
		private RectTransform _canvasUI;
        private bool _allowTracking;

		public MissleHomingSystem(MonoBehaviour mono) : base(mono){
			_lockers = new TargetLocker[0];
			_maxDegreesDelta = 20;
            _allowTracking = true;
		}

		public RectTransform TargetTrackerUI { get { return _targetTrackerUI; } set { _targetTrackerUI = value; } }
		public RectTransform CanvasUI { get { return _canvasUI; } set { _canvasUI = value; } }

		public float MaxDegreesDelta { get { return _maxDegreesDelta; } set { _maxDegreesDelta = value; } }
        public bool AllowTracking { get { return _allowTracking; } set { _allowTracking = value; } }

        public Component GoHome(Missle missle){
			var missleHandler = missle.Parent;
			var missleComponent = missle.Start ();
			if (!_lockers.Any ()) {
				missle.Fire (missleComponent);
                return missleComponent;
			}
			foreach (var locker in _lockers) {
				if (locker.Target == null) {
					continue;
				}
				var target = locker.Target;
				locker.Target = null;
                if (_allowTracking)
                {
                    StartCoroutine (Tracking (target, missleComponent));
                }
				missle.Fire (missleComponent);
				StartCoroutine (Homing(target, missleComponent));
                return missleComponent;
			}
			missle.Fire (missleComponent);
            return missleComponent;
		}  

		public void SetLockers(TargetLocker[] lockers){
			_lockers = lockers;
		}

		IEnumerator Homing(GameObject target, Component missle){
			var rigibody = missle.GetComponent<Rigidbody> ();
			while(missle != null){
				var targetRotation = Quaternion.LookRotation (target.transform.position - missle.transform.position);
				rigibody.MoveRotation (Quaternion.RotateTowards(missle.transform.rotation, targetRotation, _maxDegreesDelta));
				yield return new WaitingForFixedUpdate();
			}
			rigibody = null;
			yield return null;
		}

		IEnumerator Tracking(GameObject target, Component missle){
			var targetTrackerUI = Instantiate (_targetTrackerUI) as RectTransform;
			targetTrackerUI.gameObject.SetActive (false);
			targetTrackerUI.SetParent (_canvasUI.transform);
			while (missle != null) {
				var targetScrPt = Camera.main.WorldToScreenPoint(target.transform.position);
				targetTrackerUI.transform.position = new Vector3 (targetScrPt.x, targetScrPt.y, .0f);
				targetTrackerUI.gameObject.SetActive (targetScrPt.z > 0);
				yield return new WaitingForFixedUpdate ();
			}
			Destroy (targetTrackerUI.gameObject);
			yield return null;
		}
	}
}