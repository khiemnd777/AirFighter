using UnityEngine;
using System;

namespace Saitama.Weapons
{
	public abstract class Gun : Weapon
	{
        protected int _slot;
        protected float _speed;
        protected float _lifeTime;
        protected float _timeBetweenExecute;

        protected Gun (MonoBehaviour mono, Component monoComponent) : base(mono, monoComponent)
		{
            
		}

        public int Slot {get { return _slot; } set{ _slot = value; }}
        public float Speed { get { return _speed; } set { _speed = value; } }
        public float LifeTime { get { return _lifeTime; } set { _lifeTime = value; } }
        public float TimeBetweenExecute { get { return _timeBetweenExecute; } set { _timeBetweenExecute = value; } }
	}
}