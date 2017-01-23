using UnityEngine;
using System;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public interface IBoss : IShip, IChasing, IRunningForLife, IMovable
    {
        
    }
}

