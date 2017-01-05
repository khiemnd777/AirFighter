using UnityEngine;
using System.Collections;

namespace Saitama.Weapons
{
	public abstract class Missle : Projectile
	{
		protected MissleHandler _missleHandler;
		protected float _speed;
		protected float _lifeTime;
		
		protected Missle (MonoBehaviour mono) : base(mono)
		{
			
		}

		public MissleHandler MissleHandler { get { return _missleHandler; } set { _missleHandler = value; } }

		public float Speed { get{ return _speed; } set { _speed = value; } }
		public float LifeTime { get{ return _lifeTime; } set{ _lifeTime = value; } }

        public virtual Component Start (){
            return Start(_startPosition, _startRotation);
        }

        public virtual Component Start(Vector3 position, Quaternion rotation){
            var instantiated = Instantiate (_monoComponent, position, rotation) as Component;
            Destroy (instantiated.gameObject, _lifeTime);
            return instantiated;
        }

		public abstract void Fire (Component missle);
	}
}

