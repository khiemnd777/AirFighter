using UnityEngine;
using System;

namespace Saitama.Weapons
{
    public class CollisionChecker
	{
		public Action<Component, Collider[]> OnHit;

		private LayerMask _targets;

        public CollisionChecker (LayerMask targets)
		{
			_targets = targets;
		}

        public virtual void Check (Component component, float radius = 1.0f, QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.Collide)
		{
			var transform = component.transform;
			if (OnHit != null) {
				var colliders = Physics.OverlapSphere (transform.position, radius, _targets, queryTriggerInteraction);
				OnHit.Invoke (component, colliders);
			}
		}
	}
}