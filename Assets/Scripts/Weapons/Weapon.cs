using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public abstract class Weapon : CommonObject, IWeapon
	{
		public Action OnTriggerHold;
		public Action OnTriggerRelease;

		protected ScoreManager _scoreManager;
		protected LayerMask _targets;

		protected Weapon (MonoBehaviour mono) : base(mono)
		{
			
		}

		public LayerMask Targets { set { _targets = value; } }
		public ScoreManager ScoreManager { set {_scoreManager = value; } }

		public abstract void HoldTrigger ();

		public virtual void ReleaseTrigger(){
			if (Input.GetMouseButtonUp (0)) {
				if (OnTriggerRelease != null) {
					OnTriggerRelease.Invoke ();
				}
			}
		}
	}
}