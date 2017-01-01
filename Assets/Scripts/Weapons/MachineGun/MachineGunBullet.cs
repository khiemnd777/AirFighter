using UnityEngine;
using System.Collections;

namespace Saitama.Weapons.MachineGun
{
	public class MachineGunBullet : Bullet
	{
		private readonly CollisionChecker _collisionChecker;

		public MachineGunBullet (MonoBehaviour mono, LayerMask targets) : base(mono)
		{
			_collisionChecker = new CollisionChecker (targets);
		}

		public override void Init ()
		{
			base.Init ();

			_collisionChecker.OnHit = (hit, bullet) => {
				Destroy(bullet.gameObject);
			};
		}

		public override Component Start(Vector3 position, Quaternion rotation){
			var instantiatedBullet = Instantiate (_monoComponent, position, rotation) as Component;
			instantiatedBullet.transform.Rotate (Random.Range (-.5f, .5f), Random.Range (-.5f, .5f), 0f);
			Destroy (instantiatedBullet.gameObject, LifeTime);

			return instantiatedBullet;
		}

		public override void Fire(float speed, Component bullet)
		{
			StartCoroutine(Firing(speed, bullet));
		}

		IEnumerator Firing(float speed, Component bullet){
			yield return new WaitingForFixedUpdate();
			while(bullet != null){
				var distance = speed * Time.fixedDeltaTime;
				_collisionChecker.Check(bullet, distance);
				bullet.transform.Translate (Vector3.forward * distance);
				yield return new WaitingForFixedUpdate();
			}
			yield return null;
		}
	}
}

