using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public abstract class Projectile : CommonObject, IProjectile
	{
		protected int _damage;
		protected int _level;

		protected Projectile (MonoBehaviour mono) : base(mono)
		{
			
		}

		public int Damage { get{ return _damage; } set {_damage = value; } }
		public int Level { get{ return _level; } set { _level = value; } }
	}
}

