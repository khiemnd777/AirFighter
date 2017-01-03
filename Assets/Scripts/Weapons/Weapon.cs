using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public abstract class Weapon : CommonObject, IWeapon
	{
		public Action OnTriggerHold;
		public Action OnTriggerRelease;
		protected LayerMask _targets;
		protected int _level;

		protected Weapon (MonoBehaviour mono) : base(mono)
		{
			
		}

		public LayerMask Targets { set { _targets = value; } }
		public int Level { get { return _level; } set { _level = value; } }

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