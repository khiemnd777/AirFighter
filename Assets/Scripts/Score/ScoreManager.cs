using UnityEngine;

namespace Saitama {
	public class ScoreManager : CommonObject {
		
		private int _score;

		public ScoreManager(MonoBehaviour mono) : base(mono){
			_score = Constants.DEFAULT_SCORE;
		}

		public int Score{
			get { return _score; }
		}

		public void Increase(int amout){
			_score += amout;
		}

		public void Decrease(int amout){
			_score -= amout;
		}


	}
}