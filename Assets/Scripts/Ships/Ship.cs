using UnityEngine;
using System;
using System.Collections.Generic;
using Saitama.FlyableControls;
using Saitama.FlyableControls.ShipControls;
using Saitama.FlyableObjects;

namespace Saitama.Ships
{
    public abstract class Ship : FlyableObject, IShip
	{
        protected EventEmitter _eventEmitter;
        protected bool _isDead;
        
        protected Ship (MonoBehaviour mono, Component monoComponent) : base(mono, monoComponent)
		{
            _eventEmitter = new EventEmitter();
		}

        public EventEmitter EventEmitter { get { return _eventEmitter; } }
        public bool IsDead { get { return _isDead; } }

		public float AmbientSpeed { get; set; }
		public float AmbientMaxSpeed{ get; set; }
		public float AmbientMinSpeed{ get; set; }
		public float RotationSpeed { get; set; }
		public float ShiftedRotationExtraSpeed { get; set; }
		public float RollSpeed { get; set; }
		public float ShiftDistance { get; set; }
		public float ShiftAngleLeft { get; set; }
		public float ShiftAngleRight { get; set; }
		public Component InnerShip { get; set; }

        public virtual void Die(){
            _isDead = true;
        }
	}
}