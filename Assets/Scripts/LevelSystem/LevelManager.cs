using UnityEngine;
using Saitama;

public class LevelManager : CommonObject {
	public Action<int> OnIncreasing;
	private int _level;
	private int[] _availableLevels;

	public LevelManager(MonoBehaviour mono) : base(mono){
		_availableLevels = new int[Constants.MAX_LEVEL];
	}

	public int Level { get { return _level; } }

	public void Increase(){
		var scoreManager = _parent.GetComponent<ScoreManager> ();
		var score = scoreManager.Score;
		var nextLevel = _level + 1;
		var upgradedScore = GetUpgradedScoreByLevel (nextLevel);
		if (score >= upgradedScore) {
			_level = nextLevel;
			if (OnIncreasing != null) {
				OnIncreasing.Invoke (_level);
			}
		}
	}

	public int GetUpgradedScoreByLevel(int currentLevel){
		var index = 0;
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
