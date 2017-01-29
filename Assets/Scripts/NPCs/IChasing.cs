using UnityEngine;

namespace Saitama.NPCs
{
    public interface IChasing
    {
        void Chase();
        void Chase(Vector3 targetPosition);
        void Chase(GameObject target);
    }
}

