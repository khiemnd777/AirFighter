using UnityEngine;
using System;
using Saitama;

namespace Saitama{
	public class LevelManager : CommonObject {
		
		public Action<int> OnIncreased;
		private int _level = Constants.MIN_LEVEL;

        public LevelManager(MonoBehaviour mono, Component monoComponent) : base(mono, monoComponent){

		}

		public int Level { get { return _level; } }

        public void InitLevel(Action<int> init){
            init.Invoke(_level);
        }

		public void Update(){
			if (IsMax())
				return;
			var scoreManager = _parent.GetComponent<ScoreManager> ();
			var score = scoreManager.Score;
			var nextLevel = _level + 1;
			var upgradedScore = GetUpgradedScoreByLevel (nextLevel);
			if (score >= upgradedScore) {
				_level = nextLevel;
				if (OnIncreased != null) {
					OnIncreased.Invoke (_level);
				}
			}
		}

		public bool IsMax(){
			return _level == Constants.MAX_LEVEL;
		}

		public int GetUpgradedScoreByLevel(int currentLevel){
			var next = Constants.DEFAULT_SCORE;
			var _fibo = 0;
			for (var i = 0; i < (currentLevel + 1); i++) {
				var temp = _fibo;
				_fibo = next;
				next = temp + next;
			}
			return _fibo;
		}
	}
}