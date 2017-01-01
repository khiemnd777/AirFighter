using System;

namespace Saitama
{
	public interface IYielder
	{
		object Current { get; }
		bool MoveNext();
		void Reset();
	}
}

