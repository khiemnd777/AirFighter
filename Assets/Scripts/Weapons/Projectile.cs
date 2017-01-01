using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public abstract class Projectile : CommonObject, IProjectile
	{
		protected Projectile (MonoBehaviour mono) : base(mono)
		{
			
		}

		public float Damage { get; set; }
	}
}

