using UnityEngine;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public abstract class Boss : Ship, IBoss
    {


        protected Boss(MonoBehaviour mono, Component monoComponent):base(mono, monoComponent)
        {
            
        }

        public virtual void Move(){
            
        }

        public virtual void Chase(GameObject target){

        }

        public virtual void Chase(GameObject[] targets){
            
        }

        public virtual void RunForLife(){
            
        }
    }
}