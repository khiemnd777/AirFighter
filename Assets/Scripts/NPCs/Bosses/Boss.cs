using UnityEngine;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public abstract class Boss : Ship, IBoss
    {
        protected Boss(MonoBehaviour mono, Component monoComponent):base(mono, monoComponent)
        {
            
        }

        public GameObject[] FindTargets()
        {
            return null;
        }

        public void Chase(GameObject target){
            
        }

        public abstract void RunForLife();

    }
}