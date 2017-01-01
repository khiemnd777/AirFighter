using UnityEngine;
using System;
using System.Collections.Generic;

namespace Saitama
{
	public interface ICommonObject : ICloneable<ICommonObject>, IDisposable, ICoroutine
	{
		// Props
		ICommonObject Parent {get;set;}
		bool IsActive { get; }
		Component MonoComponent { get; set;}

		// Components
		T GetComponent<T> (string name = "") where T: ICommonObject;
		List<T> GetComponents<T> (string name = "") where T: ICommonObject;
		void SetComponent (ICommonObject component, string name = "");
		void SetComponents (IList<KeyValuePair<ICommonObject, string>> components);

		// Raw components
		void SetRawComponent (RawComponent rawComponent, string name = "");
		RawComponent GetRawComponent (Type type, string name = "");
		T InstantiateRawComponent<T> (string name = "", params object[] args) where T: ICommonObject;

		// Other
		void Init();
		void SetActive (bool isActive);
	}
}

