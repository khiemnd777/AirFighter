using UnityEngine;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace Saitama
{
	public abstract class CommonObject : UnityEngine.Object, ICommonObject
	{
		protected List<KeyValuePair<ICommonObject, string>> _components;
		protected IDictionary<KeyValuePair<Type, string>, RawComponent> _rawComponents;
		protected bool _isActive;
		protected readonly MonoBehaviour _mono;
		protected Component _monoComponent;
		protected ICommonObject _parent;
        protected string _name;

		//private readonly ICoroutineHandler _coroutineHandler;
		public ICommonObject Parent{get {return _parent;} set{_parent = value;}}

		public bool IsActive
        {
            get { return _isActive; }
        }

        public string Name { get { return _name; } set { _name = value; } }

		public Component MonoComponent {
			get { return _monoComponent; }
			set { _monoComponent = value; }
		}

		protected CommonObject (MonoBehaviour mono, Component monoComponent = null)
		{
			_components = new List<KeyValuePair<ICommonObject, string>> ();
			_rawComponents = new Dictionary<KeyValuePair<Type, string>, RawComponent> ();
			_isActive = true;
			//_coroutineHandler = new CoroutineHandler (this);
			_mono = mono;
			if (monoComponent != null) {
				_monoComponent = monoComponent;
			}
		}

		public virtual void Init(){
			
		}

		// Components
		public T GetComponent<T> (string name = "") where T: ICommonObject{
			return GetComponents<T> (name).FirstOrDefault();
		}

		public List<T> GetComponents<T> (string name = "") where T: ICommonObject{
			return _components.Where (x => (x.Key.GetType ().IsEqual<T> () || typeof(T).IsAssignableFrom(x.Key.GetType())) && name.Equals(x.Value) && x.Key.IsActive)
				.Select(x => x.Key) 
				.Cast<T>()
				.ToList();
		}

		public void SetComponent (ICommonObject component, string name = ""){
			if (!(component is ICommonObject))
				return;
			component.Parent = this;
            component.Name = name;
			_components.Add (new KeyValuePair<ICommonObject, string>(component, name));
		}

		public void SetComponents (IList<KeyValuePair<ICommonObject, string>> components){
			foreach (var component in components) {
				SetComponent (component.Key, component.Value);
			}
		}

		public void SetRawComponent(RawComponent rawComponent, string name = ""){
			_rawComponents.Add(new KeyValuePair<Type, string>(rawComponent.Type, name), rawComponent);
		}

		public RawComponent GetRawComponent(Type type, string name = ""){
			var rawComponent = _rawComponents.Where (x => (x.Key.Key == type || type.IsAssignableFrom (x.Key.Key)) && name.Equals (x.Key.Value))
				.Select(x => x.Value).FirstOrDefault();
			return rawComponent;
		}

		public T InstantiateRawComponent<T>(string name = "", params object[] args) where T: ICommonObject{
			var rawComponent = GetRawComponent (typeof(T), name);
			var listArgs = new List<object> ();
			listArgs.Add ((object)rawComponent.Mono);
			if (args.Any ()) {
				listArgs.AddRange (args);
			}
			//var component = (ICommonObject) Activator.CreateInstance(rawComponent.Type, (object) rawComponent.Mono, args);
			var component = (ICommonObject) Activator.CreateInstance(rawComponent.Type, listArgs.ToArray());
			component.MonoComponent = rawComponent.MonoComponent;
			component.Init ();
			return (T) component;
		}

		// Coroutine
		public Coroutine StartCoroutine(string methodName){
			return _mono.StartCoroutine (methodName);
		}

		public Coroutine StartCoroutine(string methodName, object value){
			return _mono.StartCoroutine (methodName, value);
		}

		public Coroutine StartCoroutine(IEnumerator routine){
			return _mono.StartCoroutine (routine);
		}

		public void StopCoroutine(string methodName){
			_mono.StopCoroutine (methodName);
		}

		public void StopCoroutine(IEnumerator routine){
			_mono.StopCoroutine (routine);
		}

		public void StopCoroutine(Coroutine routine){
			_mono.StopCoroutine (routine);
		}

		// Other
		public void SetActive (bool isActive){
			_isActive = isActive;
		}

		public virtual ICommonObject Clone(){
			return (ICommonObject) this.MemberwiseClone();
		}

		public virtual void Dispose(){
			
		}
	}
}

