using UnityEngine;
using System;
using Saitama.Extensions;

namespace Saitama {
	public class ScoreManager : CommonObject {

        public const string HIT = "score-manager-hit";

		public Action OnDecreasing;
		public Action OnIncreasing;

		private int _score;

        public ScoreManager(MonoBehaviour mono, Component monoComponent) : base(mono, monoComponent){
			_score = Constants.DEFAULT_SCORE;
		}

        public override void Init()
        {
            EventEmitter
                .Static
                .On(HIT, this, "Hit");
        }

		public int Score{
			get { return _score; }
		}

		public void Increase(int amout){
			_score += amout;
			if (OnIncreasing != null) {
				OnIncreasing.Invoke ();
			}
		}

		public void Decrease(int amout){
			_score -= amout;
			if (OnDecreasing != null) {
				OnDecreasing.Invoke ();
			}
		}

		public void Hit(GameObject target, int damage){
            var targetScoreManager = target.GetShipComponent<ScoreManager>();
			if (targetScoreManager == null)
				return;
			targetScoreManager.Decrease (damage);
		}

        public void Hit(GameObject by, GameObject target, int damage){
            if (by.GetInstanceID() != _mono.gameObject.GetInstanceID())
                return;
            Hit(target, damage);
        }
	}
}