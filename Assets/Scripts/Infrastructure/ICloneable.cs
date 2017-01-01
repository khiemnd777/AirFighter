using System;

namespace Saitama
{
	public interface ICloneable<T> where T: ICommonObject
	{
		T Clone();
	}
}

