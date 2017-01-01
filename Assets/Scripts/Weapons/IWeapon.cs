using System;
using UnityEngine;
using System.Collections;

namespace Saitama.Weapons 
{	
	public interface IWeapon : ICommonObject
	{
		void HoldTrigger();
		void ReleaseTrigger();
	}
}