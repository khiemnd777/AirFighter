using UnityEngine;
using System;
using Saitama.FlyableObjects;

namespace Saitama.FlyableControls
{
	public interface IFlyableControlFactory
	{
		T CreateFlyableControl<T>(object mono) where T : IFlyableControl;
		IFlyableControl CreateFlyableControl (Type flyableControlType, object mono);
	}
}

