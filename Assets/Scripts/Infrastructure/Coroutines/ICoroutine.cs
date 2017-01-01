using UnityEngine;
using System;
using System.Collections;

namespace Saitama
{
	public interface ICoroutine
	{
		Coroutine StartCoroutine (string methodName);

		Coroutine StartCoroutine (string methodName, object value);

		Coroutine StartCoroutine (IEnumerator routine);

		void StopCoroutine (string methodName);

		void StopCoroutine (IEnumerator routine);

		void StopCoroutine (Coroutine routine);
	}
}

