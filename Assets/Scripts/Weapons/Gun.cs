using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public abstract class Gun : Weapon
	{
		protected Gun (MonoBehaviour mono) : base(mono)
		{

		}

		public float BulletSpeed { get; set; }
		public float BulletLifeTime { get; set; }
		public float TimeBetweenExecute { get; set; } 
	}
}