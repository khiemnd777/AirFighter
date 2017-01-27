using UnityEngine;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public abstract class Boss : Ship, IBoss
    {
        protected int _level;

        protected Boss(MonoBehaviour mono, Component monoComponent):base(mono, monoComponent)
        {
            
        }

        public int Level { get { return _level; } }

        public virtual void ComputeLevel(){
            
        }
    }
}