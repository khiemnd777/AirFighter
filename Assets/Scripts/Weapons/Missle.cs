using UnityEngine;
using System.Collections;

namespace Saitama.Weapons
{
	public abstract class Missle : Projectile
	{
		protected MissleHandler _missleHandler;
		
		protected Missle (MonoBehaviour mono) : base(mono)
		{
			
		}

		public MissleHandler MissleHandler { get { return _missleHandler; } set { _missleHandler = value; } }

		public float Speed { get; set; }
		public float LifeTime { get; set; }

		public abstract Component Start (Vector3 position, Quaternion rotation);

		public abstract void Fire (Component missle);
	}
}

