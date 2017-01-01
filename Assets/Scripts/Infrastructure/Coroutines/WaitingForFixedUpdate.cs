using UnityEngine;
using System;
using System.Collections;

namespace Saitama
{
	public sealed class WaitingForFixedUpdate : IEnumerator, IYielder
	{
		private readonly IYielder _yielder;

		public WaitingForFixedUpdate ()
		{
			_yielder = new WaitingFor (() => {
				return false;
			});
		}

		public object Current { get { return _yielder; } }

		public bool MoveNext(){  
			return _yielder.MoveNext();
		}

		public void Reset(){
			_yielder.Reset ();
		}
	}
}