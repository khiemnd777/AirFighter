using UnityEngine;
using System;
using System.Linq;
using System.Collections.Generic;
using Saitama.FlyableControls;

namespace Saitama.FlyableObjects
{
	public abstract class FlyableObject : Updater, IFlyableObject
	{
        protected FlyableObject (MonoBehaviour mono) : base(mono)
		{
			
		}
	}
}

