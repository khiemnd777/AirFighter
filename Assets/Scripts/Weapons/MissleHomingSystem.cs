using UnityEngine;
using System.Collections;
using System.Linq;

namespace Saitama.Weapons{
	public class MissleHomingSystem : CommonObject {
		private TargetLocker[] _lockers;
		private float _maxDegreesDelta;
		private RectTransform _targetTrackerUI;
		private RectTransform _canvasUI;

		public MissleHomingSystem(MonoBehaviour mono) : base(mono){
			_lockers = new TargetLocker[0];
			_maxDegreesDelta = 20;
		}

		public RectTransform TargetTrackerUI { get { return _targetTrackerUI; } set { _targetTrackerUI = value; } }
		public RectTransform CanvasUI { get { return _canvasUI; } set { _canvasUI = value; } }

		public float MaxDegreesDelta{ get { return _maxDegreesDelta; } set { _maxDegreesDelta = value; } }

		public void GoHome(Missle missle){
			var missleHandler = missle.Parent;
			var missleComponent = missle.Start ();
			if (!_lockers.Any ()) {
				missle.Fire (missleComponent);
				return;
			}
			foreach (var locker in _lockers) {
				if (locker.Target == null) {
					continue;
				}
				var target = locker.Target;
				locker.Target = null;
				StartCoroutine (Tracking (target, missleComponent));
				missle.Fire (missleComponent);
				StartCoroutine (Homing(target, missleComponent));
				return;
			}
			missle.Fire (missleComponent);
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