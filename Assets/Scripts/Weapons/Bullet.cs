using UnityEngine;
using System.Collections;

namespace Saitama.Weapons
{
	public abstract class Bullet : Projectile
	{
		protected Bullet (MonoBehaviour mono) : base(mono)
		{
			
		}

		public float LifeTime { get; set; }

		public abstract Component Start (Vector3 position, Quaternion rotation);

		public abstract void Fire (float speed, Component bullet);

//		protected void OnHitObject(Collider c, Vector3 hitPoint){
//			var layer = c.gameObject.layer;
//			if (layer == LayerMask.NameToLayer("Enemy")) {
//				var damageableObject = c.GetComponent<IDamageable> ();
//				if (damageableObject != null) {
//					damageableObject.TakeHit (damage, hitPoint, transform.forward);
//
//					// blood out
//					dampingEffect.startColor = Color.red;
//					var damping = Instantiate (dampingEffect.gameObject, hitPoint, Quaternion.FromToRotation (Vector3.back, transform.forward)) as GameObject;
//					Destroy (damping, dampingEffect.startLifetime);
//				}			
//			} else if (layer == LayerMask.NameToLayer("Obstacle")) {
//
//				// Wall damp out
//				var obstacleMat = c.GetComponent<Renderer> ().material;
//				dampingEffect.startColor = obstacleMat.color;
//
//				var damping = Instantiate (dampingEffect.gameObject, hitPoint, Quaternion.FromToRotation (Vector3.back, transform.forward)) as GameObject;
//				Destroy (damping, dampingEffect.startLifetime);
//			}
//			GameObject.Destroy (gameObject);
//		}
	}
}

