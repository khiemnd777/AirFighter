using UnityEngine;
using System.Collections;

namespace Saitama.Weapons
{
	public abstract class Bullet : Projectile
	{
        protected float _lifeTime;
        protected float _speed;
        protected LayerMask _targets;

        public LayerMask Targets { get{ return _targets; } set { _targets = value; } }
        public float LifeTime { get{ return _lifeTime; } set { _lifeTime = value; } }
        public float Speed { get { return _speed; } set { _speed = value; } }
	}
}

