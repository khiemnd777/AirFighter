using UnityEngine;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace Saitama
{
	public sealed class CoroutineHandler : ICoroutineHandler
	{
		static Dictionary<string, List<IEnumerator>> routines = new Dictionary<string, List<IEnumerator>>();
		static Dictionary<string, Dictionary<string, IEnumerator>> names = new Dictionary<string, Dictionary<string, IEnumerator>>();

		private readonly object _obj;
		private readonly Type _type;
		private readonly List<IEnumerator> _routines;
		private readonly Dictionary<string, IEnumerator> _names;

		public CoroutineHandler (object obj)
		{
			_obj = obj;
			_type = obj.GetType();	
			_routines = new List<IEnumerator> ();
			_names = new Dictionary<string, IEnumerator> ();
		}

		public void Start(string methodName, params object[] args){
			var method = _type.GetMethod (methodName);
			var routine = method.Invoke (_obj, args.Length == 0 ? null : args.ToArray ()) as IEnumerator;
			_names.Add (methodName, routine);
			if (!CoroutineHandler.names.ContainsKey (_type.FullName))
				CoroutineHandler.names.Add (_type.FullName, _names);
			Start (routine);
		}

		public void Start(IEnumerator routine){
			lock (_routines) {
				_routines.Add (routine);
				if (!CoroutineHandler.routines.ContainsKey (_type.FullName)) {
					CoroutineHandler.routines.Add (_type.FullName, _routines);
				}
			}
		}

		public void Stop(string methodName) {
			var routine = _names [methodName];
			if (routine != null) {
				_names.Remove (methodName);
				Stop (routine);
			}
		}

		public void Stop(IEnumerator routine) {
			_routines.Remove (routine);
		}

		public static void Update(){
			foreach (var element in routines) {
				var _routines = element.Value;
				if (_routines.Count == 0)
					break;
				for (var inx = 0; inx < _routines.Count;) {
					var routine = _routines [inx];
					var res = routine.MoveNext ();
					if (res) {
						inx++;
					} else if (_routines.Count > 1) {
						_routines [inx] = _routines [_routines.Count - 1];
						_routines.RemoveAt (_routines.Count - 1);
					} else {
						_routines.Clear ();
						break;
					}
				}
			}
		}
	}
}