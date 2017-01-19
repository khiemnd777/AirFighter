using UnityEngine;

namespace Saitama.NPCs
{
    public interface IChasing
    {
        void Chase(GameObject[] targets);
        void Chase(GameObject target);
    }
}

