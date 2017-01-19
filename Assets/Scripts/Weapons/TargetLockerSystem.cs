using UnityEngine;
using System.Linq;
using System.Collections.Generic;

namespace Saitama.Weapons{
	public class TargetLockerSystem : CommonObject {

		private int _missleSlot;
		private List<TargetLocker> _lockers;
        private bool _useLockerUI;
        public TargetLockerSystem(MonoBehaviour mono, Component monoComponent) : base(mono, monoComponent){
            _useLockerUI = true;
		}

        public bool UseLockerUI { get { return _useLockerUI; } set { _useLockerUI = value; } }
		public int MissleSlot { get { return _missleSlot; } set { _missleSlot = value; } }
		public List<TargetLocker> Lockers { get { return _lockers; } }

		public void PrepareTargetLockerUIs(RectTransform targetLockerUI, RectTransform canvasUI){
			if (_lockers == null) {
				_lockers = new List<TargetLocker> ();
			}
			_lockers.Clear ();
			for (var inx = 0; inx < _missleSlot; inx++) {
                if (_useLockerUI)
                {
                    var lockerUI = Instantiate(targetLockerUI) as RectTransform;
                    lockerUI.SetParent(canvasUI.transform);
                    lockerUI.gameObject.SetActive(false);
                    _lockers.Add(new TargetLocker
                        {
                            UI = lockerUI
                        });
                }
                else
                {
                    _lockers.Add(new TargetLocker());
                }
			}
		}

		public void SetVisibleTargetLockerUIs(bool visible){
			if (_lockers == null)
				return;
			for (var inx = 0; inx < _lockers.Count; inx++) {
				var locker = _lockers[inx];
				locker.UI.gameObject.SetActive (visible);
				if (!visible) {
					locker.Target = null;
				}
			}
		}

		public IEnumerable<GameObject> FindTargets(string tag, float limit){
			var targets = GameObject.FindGameObjectsWithTag (tag);
			return targets.Where (target => {
				var sqrLen = (target.transform.position - _mono.transform.position).sqrMagnitude;
				return Utility.IsFrontOfCamera(target.transform.position, Camera.main) 
					&& sqrLen <= limit * limit;
			});
		}

        public IEnumerable<GameObject> FindTargetsViaRadar(string tag, float limit){
            var targets = GameObject.FindGameObjectsWithTag(tag);
            return targets.Where(target=>{
                var sqrLen = (target.transform.position - _mono.transform.position).sqrMagnitude;
                return sqrLen <= limit * limit;
            });
        }

		public GameObject[] FindTargetsInCrosshair(string tag, float limit, RectTransform crosshair, float border = .0f){
			var ratio = crosshair.parent.localScale.x;
			var sizeDelta = new Vector2 (crosshair.rect.width * ratio,  crosshair.rect.height * ratio);
			var crosshairMinBound = crosshair.transform.position - (new Vector3(sizeDelta.x, sizeDelta.y) / 2);
			var crosshairMaxBound = crosshair.transform.position + (new Vector3(sizeDelta.x, sizeDelta.y) / 2);
			return FindTargetsInCrosshair (tag, limit, crosshairMinBound, crosshairMaxBound, border);
		}

		public GameObject[] FindTargetsInCrosshair(string tag, float limit, Vector2 crosshairMinBound, Vector2 crosshairMaxBound, float border = .0f){
			var targets = FindTargets (tag, limit);
			targets = targets.Where (target => {
				var targetScrPt = Camera.main.WorldToScreenPoint(target.transform.position);
				return Utility.IsInRange(targetScrPt.x, crosshairMinBound.x - border, crosshairMaxBound.x + border)
					&& Utility.IsInRange(targetScrPt.y, crosshairMinBound.y - border, crosshairMaxBound.y + border);
			}).Take (_missleSlot);

			return targets.ToArray();
		}

		public void LockTargets(GameObject[] targets){
			SetVisibleTargetLockerUIs (false);
			if (targets.Length == 0)
				return;
			var maxSlot = _missleSlot == 0 ? targets.Length : _missleSlot;
			GameObject lastTarget = null;
			for (var inx = 0; inx < maxSlot && inx < _lockers.Count; inx++) {
				var target = inx > targets.Length - 1 ? lastTarget : targets [inx];
				var locker = _lockers [inx];
                if (_useLockerUI)
                {
                    var targetScrPt = Camera.main.WorldToScreenPoint(target.transform.position);

                    locker.UI.transform.position = new Vector3 (targetScrPt.x, targetScrPt.y, .0f);
                    locker.UI.gameObject.SetActive (true);
                }
				locker.Target = target;
				lastTarget = target;
			}
		}
	}
}