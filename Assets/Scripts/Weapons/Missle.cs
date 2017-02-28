using UnityEngine;
using System.Collections;

namespace Saitama.Weapons
{
	public abstract class Missle : Projectile
	{
		protected float _speed;
		protected float _lifeTime;
        protected bool _isExecuted;
        protected LayerMask _targets;

        public LayerMask Targets { get{ return _targets; } set { _targets = value; } }
		public float Speed { get{ return _speed; } set { _speed = value; } }
		public float LifeTime { get{ return _lifeTime; } set{ _lifeTime = value; } }
        public bool IsExecuted { get { return _isExecuted; } }
	}
}

