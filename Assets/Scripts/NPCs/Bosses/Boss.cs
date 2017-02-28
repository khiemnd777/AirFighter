using UnityEngine;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public abstract class Boss : Ship, IBoss
    {
        protected Boss(MonoBehaviour mono):base(mono)
        {
            
        }
    }
}