using UnityEngine;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace Saitama.Weapons{
    public class GunPivotTrackerSystem : Updater {
        
		private readonly List<Gun> _guns;

        public GunPivotTrackerSystem(MonoBehaviour mono) : base(mono){
			_guns = new List<Gun>();
		}

        public override void Init()
        {
            base.Init();

            RequireMany<Gun>(g => {
                SetGuns(g);
            });
        }

        void TwoPunch(){
            RotateGunPivot (
                LockTargetsNearest (
                    FindTargetsInCrosshair ("Target", 1600, 10.25f)
                )
            ); 
        }

		public void SetGuns(params Gun[] guns){
			_guns.Clear ();
			if (!guns.Any ())
				return;
			_guns.AddRange (guns);
		}

        public void RotateGunPivot(GameObject lockedTarget){
            _guns.ForEach ((gun) => RotateGunPivot (gun, lockedTarget));
		}

        public void RotateGunPivot(GameObject[] lockedTargets){
            _guns.ForEach((gun)=>
                {
                    var t = lockedTargets
                        .OrderBy(target => (target.transform.position - gun.Transform.position).sqrMagnitude)
                        .FirstOrDefault();
                    RotateGunPivot(gun, t);
                });
        }

        public void RotateGunPivot(Gun gun, GameObject lockedTarget){
            if (lockedTarget == null) {
				gun.Transform.localRotation = Quaternion.Euler (90.0f, 180.0f, 0.0f);
				return;
			}
            var wantedRotation = Quaternion.LookRotation (lockedTarget.transform.position - gun.Transform.position);
			StartCoroutine(RotatingGunPivot(gun, wantedRotation));
		}

		IEnumerator RotatingGunPivot(Gun gun, Quaternion wantedRotation){
			var percent = .0f;
			while (percent <= 1f) {
				percent += Time.deltaTime;
				gun.Transform.rotation = Quaternion.Lerp (gun.Transform.rotation, wantedRotation, percent);
				yield return new WaitForFixedUpdate ();
			}
			yield return null;
		}

		public IEnumerable<GameObject> FindTargets(string tag, float limit){
			var targets = GameObject.FindGameObjectsWithTag (tag);
			return targets.Where (target => {
				var sqrLen = (target.transform.position - _mono.transform.position).sqrMagnitude;
				return Utility.IsFrontOfCamera(target.transform.position, Camera.main) 
					&& sqrLen <= limit * limit;
			});
		}

		public GameObject[] FindTargetsInCrosshair(string tag, float limit, float border = 1.0f){
			var targets = FindTargets (tag, limit);
			var centerScreen = new Vector2(Screen.width / 2, Screen.height / 2);
			targets = targets.Where (target => {
				var targetScrPt = Camera.main.WorldToScreenPoint(target.transform.position);
				return Utility.IsInRange(targetScrPt.x, centerScreen.x - border, centerScreen.x + border)
					&& Utility.IsInRange(targetScrPt.y, centerScreen.y - border, centerScreen.y + border);
			}).Take (1);

			return targets.ToArray();
		}

        public GameObject LockTarget(GameObject[] targets){
			return targets.Length == 0 ? null : targets [0];
		}

        public GameObject[] LockTargetsNearest(GameObject[] targets){
            targets = targets
                .OrderBy(target => (target.transform.position - _mono.transform.position).sqrMagnitude)
                .Take(_guns.Count)
                .ToArray();
            return targets;
        }
	}
}