using UnityEngine;
using System;

namespace Saitama.Weapons
{
    public abstract class Weapon : Updater, IWeapon
	{
		public Action OnTriggerHold;
		public Action OnTriggerRelease;
		protected LayerMask _targets;
		protected int _level = Constants.MIN_LEVEL;
		protected int _damage;

        protected Weapon (MonoBehaviour mono) : base(mono)
		{
            
		}

		public LayerMask Targets { set { _targets = value; } }
		public int Level { get { return _level; } set { _level = value; } }
		public int Damage { get { return _damage; } set { _damage = value; } }

        public virtual void IncreaseLevel(int level){
            
        }

		public abstract void HoldTrigger ();

		public virtual void ReleaseTrigger(){
			if (OnTriggerRelease != null) {
				OnTriggerRelease.Invoke ();
			}
		}

        public override void Update()
        {
            base.Update();
            HoldTrigger();
            ReleaseTrigger();
        }
	}
}