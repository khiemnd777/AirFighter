using System;
using System.Collections;

namespace Saitama
{
	public interface ICoroutineHandler
	{
		void Start(string methodName, params object[] args);

		void Start(IEnumerator routine);

		void Stop(string methodName);

		void Stop(IEnumerator routine);
	}
}