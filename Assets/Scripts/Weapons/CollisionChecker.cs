using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public class CollisionChecker
	{
		public Action<RaycastHit, Component> OnHit;

		private LayerMask _targets;

		public CollisionChecker (LayerMask targets)
		{
			_targets = targets;
		}
			
		public void Check(Component component, float maxDistance = 6.0f){
			var transform = component.transform;
			var ray = new Ray (transform.position + new Vector3(0, 0, transform.localScale.z / 2), transform.TransformDirection(Vector3.forward));
			Debug.DrawRay (transform.position, transform.TransformDirection(Vector3.forward) * maxDistance, Color.green);
			RaycastHit hit;

			if (Physics.Raycast (ray, out hit, maxDistance, _targets, QueryTriggerInteraction.Collide)) {
				if (OnHit != null) {
					OnHit.Invoke (hit, component);	
				}
				//Physics.OverlapSphere(
			}
		}
	}
}