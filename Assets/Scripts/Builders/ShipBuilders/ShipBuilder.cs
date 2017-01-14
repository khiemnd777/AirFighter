using UnityEngine;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Saitama;
using Saitama.Infrastructure;
using Saitama.Ships;
using Saitama.FlyableControls;
using Saitama.FlyableControls.ShipControls;
using Saitama.FlyableObjects;

namespace Saitama.Builders.ShipBuilders
{
	public class ShipBuilder<T> : Builder<T, ShipBuilder<T>> where T: IShip
	{
		private readonly ICollection<KeyValuePair<Type, string>> _components;

		public ShipBuilder ()
		{
			_components = new List<KeyValuePair<Type, string>> ();
		}

		public override T Build(object mono, IDictionary<KeyValuePair<Type, string>, Component> monoComponents = null, Action<T> initiate = null, Action<T, List<KeyValuePair<ICommonObject, string>>> initiateComponents = null) {
			_owner = (T)Activator.CreateInstance (typeof(T), mono, null);
			_owner.Init ();
			if (initiate != null) {
				initiate.Invoke (_owner);
			}
			// Assembly components belong to owner
			var assembliedComponents = AssemblyComponents (mono, monoComponents);
			if (initiateComponents != null) {
				initiateComponents.Invoke (_owner, assembliedComponents);
			}
			return _owner;
		}

		public override void Register(params object[] types){
			if (_owner != null)
				return;
			 
			foreach (var type in types) {
				if (type is KeyValuePair<Type, string>) {
					_components.Add ((KeyValuePair<Type, string>)type);
				} else {
					var t = (Type)type;
					if (typeof(ICommonObject).IsAssignableFrom(t)) {
						_components.Add (new KeyValuePair<Type, string>(t, string.Empty));	
					}
				}
			}
		}

		private List<KeyValuePair<ICommonObject, string>> AssemblyComponents(object mono, IDictionary<KeyValuePair<Type, string>, Component> monoComponents = null){
			if (!_components.Any ())
				return null;
			
			var components = _components.Select (controlType => {
				Component monoComponent = null;
				if(monoComponents != null && monoComponents.ContainsKey(controlType)){
					monoComponent = monoComponents[controlType];
				}
                var component = (ICommonObject) Activator.CreateInstance(controlType.Key, mono, monoComponent);
				component.MonoComponent = monoComponent;
				component.SetComponent(_owner);
				component.Init();
				return new KeyValuePair<ICommonObject, string> (component, controlType.Value);
			}).ToList();

			_owner.SetComponents(components);

			return components;
		}
	}
}