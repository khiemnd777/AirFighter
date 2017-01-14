using UnityEngine;
using System.Collections;

namespace Saitama.Weapons
{
	public abstract class Bullet : Projectile
	{
        protected float _lifeTime;

        protected Bullet (MonoBehaviour mono) : base(mono)
		{
			
		}

        public float LifeTime { get{ return _lifeTime; } set { _lifeTime = value; } }

        public virtual Component Start (){
            return Start(_startPosition, _startRotation);
        }

        public virtual Component Start (Vector3 position, Quaternion rotation){
            var instantiatedBullet = Instantiate (_monoComponent, position, rotation) as Component;
            Destroy (instantiatedBullet.gameObject, _lifeTime);

            return instantiatedBullet;
        }

        public abstract void Fire(float speed, Component bullet);
	}
}

