using UnityEngine;
using System.Collections;

namespace Saitama.Weapons.AirToAirMissle
{
	public class AirToAirMissle : Missle
	{
		private float _speedUpTime = .5f;
		private float _missleSpeedOnExecute = 6500f;
		private readonly CollisionChecker _collisionChecker;

		public AirToAirMissle (MonoBehaviour mono, LayerMask targets) : base(mono)
		{
			_collisionChecker = new CollisionChecker (targets);
		}

		public override void Init ()
		{
			base.Init ();

			_collisionChecker.OnHit = (hit, missle) => {
				
				//Debug.Log((missle.transform.position - hit.collider.gameObject.transform.position).magnitude);
				Debug.Log((hit.point - missle.transform.position).magnitude);
//				if(hit.point == missle.transform.position)
//					Destroy(missle.gameObject);
			};
		}

		public override Component Start(Vector3 position, Quaternion rotation){
			var instantiatedMissle = Instantiate (_monoComponent, position, rotation) as Component;
			Destroy (instantiatedMissle.gameObject, LifeTime);
			return instantiatedMissle;
		}

		public override void Fire(Component missle)
		{
			StartCoroutine (SpeedingEaseUp (Speed));
			StartCoroutine (Firing(Speed, missle));
		}
			
		IEnumerator Firing(float speed, Component missle){
			var rigibody = missle.GetComponent<Rigidbody> ();

			yield return new WaitingForFixedUpdate();
			while(missle != null){
				var distance = Time.fixedDeltaTime * _missleSpeedOnExecute;
				_collisionChecker.Check (missle, distance);
				var pos = Vector3.forward;
				pos = rigibody.rotation * pos;
				rigibody.velocity = pos * distance;
				yield return new WaitingForFixedUpdate();
			}
			rigibody = null;
			yield return null;
		}

		IEnumerator SpeedingEaseUp(float speed){
			yield return new WaitForSeconds (_speedUpTime);
			_missleSpeedOnExecute = Mathf.Max(speed, _missleSpeedOnExecute);
			yield return null;
		}
	}
}

