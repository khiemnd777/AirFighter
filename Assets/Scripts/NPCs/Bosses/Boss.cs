using UnityEngine;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public abstract class Boss : Ship, IBoss
    {
        protected int _level;
        protected float _health;

        protected Boss(MonoBehaviour mono, Component monoComponent):base(mono, monoComponent)
        {
            
        }

        public int Level { get { return _level; } }
        public float Health { get { return _health; } set { _health = value; } }

        public virtual void ComputeLevel(){
            
        }
    }
}