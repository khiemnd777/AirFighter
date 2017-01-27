using UnityEngine;
using System;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public interface IBoss : IShip
    {
        int Level { get; }
        void ComputeLevel();
    }
}

