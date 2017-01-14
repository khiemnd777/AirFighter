using UnityEngine;
using System;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public interface IBoss : IShip
    {
        GameObject[] FindTargets();
        void Chase(GameObject target);
        void RunForLife();
    }
}

