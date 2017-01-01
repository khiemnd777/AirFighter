using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public abstract class MissleHandler : Weapon
	{
		protected MissleHandler (MonoBehaviour mono) : base(mono)
		{
			
		}
		public int Slot{ get; set;}
		public float Speed { get; set; }
		public float LifeTime { get; set; }
		public float TimeBetweenExecute { get; set; } 
	}
}

