using UnityEngine;
using System;
using System.Linq;
using System.Collections.Generic;
using Saitama.FlyableControls;

namespace Saitama.FlyableObjects
{
	public abstract class FlyableObject : CommonObject, IFlyableObject
	{
        protected FlyableObject (MonoBehaviour mono, Component monoComponent) : base(mono, monoComponent)
		{
			
		}
	}
}

