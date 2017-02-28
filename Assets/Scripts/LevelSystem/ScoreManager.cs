using UnityEngine;
using System;
using System.Linq;
using Saitama.Extensions;

namespace Saitama {
	public class ScoreManager : CommonObject {

        public const string HIT = "score-manager-hit";

		public Action OnDecreasing;
		public Action OnIncreasing;

		private int _score;
        private int _originalScore;

        public ScoreManager(MonoBehaviour mono) : base(mono){
            _originalScore = _score = Constants.DEFAULT_SCORE;
		}

        public override void Init()
        {
            EventEmitter
                .Static
                .On(HIT, this, "Hit");
        }

		public int Score { get { return _score; }}

        public int OriginalScore { get { return _originalScore; } }

		public void Increase(int amout){
            _originalScore += amout;
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

        public float ComputeScoreViaPercent(float sum, float val, float total){
            return total * (val * 100 / sum) / 100;
        }

        public virtual void ComputeScore(int score){
            _originalScore = _score = score;
        }

        public virtual void Hit(GameObject target, int damage){
            if (!(target.IsShip() || target.IsBoss()))
                return;
            var targetScoreManager = target.GetShipComponent<ScoreManager>();
			if (targetScoreManager == null)
				return;
			targetScoreManager.Decrease (damage);
		}

        public virtual void Hit(GameObject by, GameObject target, int damage){
            if (by.GetInstanceID() != _mono.gameObject.GetInstanceID())
                return;
            Hit(target, damage);
        }
	}
}