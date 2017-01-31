using UnityEngine;
using System;
using System.Collections.Generic;

namespace Saitama.Builders
{
	public abstract class Builder<T, TReturn> : IBuilder<T> where T: ICommonObject
															where TReturn : IBuilder<T>
	{
		protected T _owner;

		protected Builder() {
			
		}

		public T Owner{ get { return _owner; } }

		public abstract T Build(object mono, IDictionary<KeyValuePair<Type, string>, Component> monoComponents = null, Action<T> initiate = null, Action<T, List<KeyValuePair<ICommonObject, string>>> initiateComponents = null);

		public abstract void Register(params object[] types);

		public static IBuilder<T> GetInstance() {
			return Singleton<IBuilder<T>>.Instance ?? (Singleton<IBuilder<T>>.Instance = Activator.CreateInstance<TReturn>());
		}

		public static void GetAlready(params object[] types) {
			GetInstance().Register (types);
		}

		public static T Assembly(MonoBehaviour mono, IDictionary<KeyValuePair<Type, string>, Component> monoComponents = null, Action<T> initiate = null, Action<T, List<KeyValuePair<ICommonObject, string>>> initiateComponents = null) {
			var instance = GetInstance ();
			if (instance.Owner != null) {
				return (T) instance.Owner.Clone ();
			}

			return GetInstance().Build (mono, monoComponents, initiate, initiateComponents);
		}
	}
}

