using System;
using System.Collections;

namespace Saitama
{
	public sealed class InputUntil : IEnumerator, IYielder
	{
		private readonly bool _input;
		private readonly Action _predicate;
		
		public InputUntil (bool input, Action predicate)
		{
			_input = input;
			_predicate = predicate;
		}

		public object Current { get{ return null; } }

		public bool MoveNext(){
			if (_input && _predicate != null) {
				_predicate.Invoke();
			}
			return false;	
		}

		public void Reset(){
			
		}
	}
}

