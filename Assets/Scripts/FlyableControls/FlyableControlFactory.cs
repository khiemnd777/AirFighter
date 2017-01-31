using UnityEngine;
using System;
using Saitama.FlyableObjects;

namespace Saitama.FlyableControls
{
	public class FlyableControlFactory : IFlyableControlFactory
	{
		public FlyableControlFactory ()
		{
			
		}

		public static IFlyableControlFactory Instance{
			get {
				return Singleton<IFlyableControlFactory>.Instance ?? (Singleton<IFlyableControlFactory>.Instance = new FlyableControlFactory());	
			}
		}

		public T CreateFlyableControl<T>(object mono) where T : IFlyableControl
		{
			return (T) CreateFlyableControl (typeof(T), mono);
		}

		public IFlyableControl CreateFlyableControl(Type flyableControlType, object mono)
		{
			return (IFlyableControl) Activator.CreateInstance(flyableControlType, mono);
		}
	}
}