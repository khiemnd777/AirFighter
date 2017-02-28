using UnityEngine;
using System;
using System.Collections.Generic;
using Saitama.Ships;

namespace Saitama.Builders
{
	public interface IBuilder<T>
	{
		T Owner { get; }
		T Build(object mono, Action<T> initiate = null, Action<T, List<KeyValuePair<ICommonObject, string>>> initiateComponents = null);
		void Register(params object[] types);
	}
}

