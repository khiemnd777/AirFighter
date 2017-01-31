using UnityEngine;
using System.Collections;
using Saitama.Ships;
using Saitama.Extensions;

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

			_collisionChecker.OnHit += (bullet, colliders) => {
				for(var inx = 0; inx < colliders.Length; inx++){
                    if(colliders[inx].gameObject.HasShipComponent()){
						var scoreManager = _parent.Parent.GetComponent<ScoreManager>();
						scoreManager.Hit(colliders[inx].gameObject, _damage);	
					}
                    EventEmitter
                        .Static
                        .Emit("bullet-hit", bullet);
					Destroy(bullet.gameObject);
				}
			};
		}

		public override Component Start(Vector3 position, Quaternion rotation){
            var bullet = base.Start(position, rotation);
            bullet.transform.Rotate (Random.Range (-.5f, .5f), Random.Range (-.5f, .5f), 0f);
            return bullet;
		}

		public override void Fire(float speed, Component bullet)
		{
			StartCoroutine(Firing(speed, bullet));
		}

		IEnumerator Firing(float speed, Component bullet){
			yield return new WaitingForFixedUpdate();
            bullet.transform.parent = null;
			while(bullet != null){
				var distance = speed * Time.fixedDeltaTime;
				bullet.transform.Translate (Vector3.forward * distance);
				_collisionChecker.Check(bullet, distance / 2.5f);

				yield return new WaitingForFixedUpdate();
			}
			yield return null;
		}
	}
}

