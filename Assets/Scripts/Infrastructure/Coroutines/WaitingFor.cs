using System;
using System.Collections;

namespace Saitama
{
	public sealed class WaitingFor : IEnumerator, IYielder
	{
		private readonly Func<bool> _predicate;

		public WaitingFor (Func<bool> predicate)
		{
			_predicate = predicate;
		}

		public object Current { get { return null; } }

		public bool MoveNext(){
			return _predicate();
		}

		public void Reset(){
			
		}
	}
}

