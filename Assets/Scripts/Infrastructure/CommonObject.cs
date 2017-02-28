using UnityEngine;
using System;
using System.Reflection;
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
		protected ICommonObject _parent;
        protected Transform _transform;
        protected string _name;

		//private readonly ICoroutineHandler _coroutineHandler;
		public ICommonObject Parent{get {return _parent;} set{_parent = value;}}

		public bool IsActive
        {
            get { return _isActive; }
        }

        public string Name { get { return _name; } set { _name = value; } }

        // Transformale
        public Transform Transform { get { return _transform; } set{_transform = value; } }

        protected CommonObject (MonoBehaviour mono)
		{
			_components = new List<KeyValuePair<ICommonObject, string>> ();
			_rawComponents = new Dictionary<KeyValuePair<Type, string>, RawComponent> ();
			_isActive = true;
            _mono = mono;
		}

        // Diposes
        public static void Dispose(ICommonObject obj) {
            Dispose(obj, null);
        }

        public static void Dispose(ICommonObject obj, Component comp) {
            if (comp != null)
            {
                GameObject.Destroy(comp.gameObject);
            }
            GC.SuppressFinalize(obj);
        }

        public static void Dispose(ICommonObject obj, float seconds) {
            Dispose(obj, null, seconds);
        }

        public static void Dispose(ICommonObject obj, Component comp, float seconds){
            obj.StartCoroutine(WaitForDispose(obj, comp, seconds));
        }

        private static IEnumerator WaitForDispose(ICommonObject obj, Component comp, float seconds){
            yield return new WaitForSeconds(seconds);
            Dispose(obj, comp);
            yield return null;
        }

        // Inits
		public virtual void Init(){
			
		}

        // MonoComponents
        public T GetMonoComponent<T>(string name) where T : UnityEngine.Component{
            return GameObject.Find(name).GetComponent<T>();
        }

        public T GetChildMonoComponent<T>(string name) where T: UnityEngine.Component{
            var t = _transform.Find(name);
            if (typeof(T).IsEqual(typeof(Transform)))
            {
                return t as T;
            }
            return t.gameObject.GetComponent<T>();
        }

        public T GetMonoResource<T>(string path) where T : UnityEngine.Object{
            return (T) Resources.Load(path, typeof(T));
        }

        public T InstantiateFromMonoResource<T>(string path, params Type[] componentTypes) where T: UnityEngine.Object{
            var resource = GetMonoResource<T>(path);
            var o = Instantiate(resource) as GameObject;
            foreach (var componentType in componentTypes)
            {
                o.AddComponent(componentType);
            }
            return o as T;
        }

        public T InstantiateFromMonoResource<T>(string path, Vector3 position, Quaternion rotation, params Type[] componentTypes) where T : UnityEngine.Object{
            var resource = GetMonoResource<T>(path);
            var o = Instantiate(resource, position, rotation) as GameObject;
            foreach (var componentType in componentTypes)
            {
                o.AddComponent(componentType);
            }
            return o as T;
        }

        public T InstantiateFromMonoResource<T>(string path, Vector3 position, Quaternion rotation, Transform parent, params Type[] componentTypes) where T : UnityEngine.Object {
            var resource = GetMonoResource<T>(path);
            var o = Instantiate(resource, position, rotation, parent) as GameObject;
            foreach (var componentType in componentTypes)
            {
                o.AddComponent(componentType);
            }
            return o as T;
        }

        public T RequireMono<T>(params Type[] componentTypes) where T : MonoController {
            var prefabInfo = GetPrefabInfo<T>();
            if (prefabInfo == null)
                return null;
            
            var prefabPath = (string) prefabInfo.GetValue(null);
            var go = InstantiateFromMonoResource<GameObject>(prefabPath, typeof(T));
            if (go == null)
                return null;
            
            AssignMonoComponentTypes(go, componentTypes);

            var t = go.GetComponent<T>();
            t.CommonObject = this;
            return t;
        }

        public T RequireMono<T>(Vector3 position, Quaternion rotation, params Type[] componentTypes) where T : MonoController {
            var prefabInfo = GetPrefabInfo<T>();
            if (prefabInfo == null)
                return null;

            var prefabPath = (string) prefabInfo.GetValue(null);
            var go = InstantiateFromMonoResource<GameObject>(prefabPath, position, rotation, typeof(T));
            if (go == null)
                return null;
            
            AssignMonoComponentTypes(go, componentTypes);

            var t = go.GetComponent<T>();
            t.CommonObject = this;
            return t;
        }

        public T RequireMono<T>(Vector3 position, Quaternion rotation, Transform parent, params Type[] componentTypes) where T : MonoController {
            var prefabInfo = GetPrefabInfo<T>();
            if (prefabInfo == null)
                return null;

            var prefabPath = (string) prefabInfo.GetValue(null);
            var go = InstantiateFromMonoResource<GameObject>(prefabPath, position, rotation, parent, typeof(T));
            if (go == null)
                return null;
            
            AssignMonoComponentTypes(go.gameObject, componentTypes);

            var t = go.GetComponent<T>();
            t.CommonObject = this;
            return t;
        }

        private void AssignMonoComponentTypes (GameObject go, params Type[] componentTypes){
            foreach (var componentType in componentTypes)
            {
                go.AddComponent(componentType);
                if (typeof(MonoController).IsAssignableFrom(componentType))
                {
                    var m = (MonoController) go.GetComponent(componentType);
                    m.CommonObject = this;
                }
            }
        }

        private FieldInfo GetPrefabInfo<T>(){
            var t = typeof(T);
            return GetPrefabInfo(t);
        }

        private FieldInfo GetPrefabInfo(Type type){
            return type.GetField("Prefab", BindingFlags.Static | BindingFlags.Public);
        }

		// Components
		public T GetComponent<T> (string name = "") where T: ICommonObject{
			return GetComponents<T> (name).FirstOrDefault();
		}

        public ICommonObject GetComponent(Type type, string name = "")
        {
            return GetComponents(type, name).FirstOrDefault();
        }

		public List<T> GetComponents<T> (string name = "") where T: ICommonObject{
//			return _components.Where (x => (x.Key.GetType ().IsEqual<T> () || typeof(T).IsAssignableFrom(x.Key.GetType())) && name.Equals(x.Value) && x.Key.IsActive)
//				.Select(x => x.Key) 
//				.Cast<T>()
//				.ToList();
            var t = typeof(T);
            return GetComponents(t)
                .Cast<T>()
                .ToList();
		}

        public List<ICommonObject> GetComponents (Type type, string name = "") {
            return GetComponents (x => (x.Key.GetType ().IsEqual (type) || type.IsAssignableFrom(x.Key.GetType())) && name.Equals(x.Value) && x.Key.IsActive);
        }

        public List<ICommonObject> GetComponents(Func<KeyValuePair<ICommonObject, string>, bool> predicate){
            return _components.Where(predicate)
                .Select(x=>x.Key)
                .ToList();
        }

        public T Require<T>(params object[] attributes) where T : ICommonObject{
            return Require<T>(string.Empty, attributes);
        }

        public T Require<T>(Action<T> predicate, params object[] attributes) where T : ICommonObject{
            return Require<T>(string.Empty, predicate, attributes);
        }

        public T Require<T>(string name, params object[] attributes) where T : ICommonObject{
            return Require<T>(name, null, attributes);
        }

        public T Require<T>(string name, Action<T> predicate, params object[] attributes) where T : ICommonObject{
            var type = typeof(T);
            var e_O = GetRecursiveComponent(this, name, predicate);
            if (e_O != null)
            {
                return e_O;
            }
            var attrs = new List<object>{ _mono };
            if (attributes != null)
            {
                attrs.AddRange(attributes);
            }
            var o = (T) Activator.CreateInstance(type, attrs.ToArray());
            o.Parent = this;
            o.Init();
            // prefab
            var prefabInfo = GetPrefabInfo(type);
            if (prefabInfo != null)
            {
                var prefabPath = (string) prefabInfo.GetValue(null);
                var go = InstantiateFromMonoResource<GameObject>(prefabPath);
                o.Transform = go.transform;
            }
            // predicate
            if (predicate != null)
            {
                predicate.Invoke(o);
            }
            SetComponent(o, name);
            return o;
        }

        private T GetRecursiveComponent<T>(ICommonObject commonObject, string name, Action<T> predicate) where T : ICommonObject {
            var comp = commonObject.RequireOnly(name, predicate);
            if (comp == null && commonObject.Parent != null)
            {
                return GetRecursiveComponent(commonObject.Parent, name, predicate);
            }
            return comp;
        }

        private T[] GetManyRecursiveComponents<T>(ICommonObject commonObject, Action<T[]> predicate) where T : ICommonObject {
            if (commonObject == null)
                return null;
            var type = typeof(T);
            var comps = commonObject.GetAllComponents<T>(x => x.GetType().IsEqual(type) || type.IsAssignableFrom(x.GetType()));
            if ((comps == null || !comps.Any()) && commonObject.Parent != null)
            {
                return GetManyRecursiveComponents(commonObject.Parent, predicate);
            }
            if (predicate != null)
            {
                predicate.Invoke(comps);
            }
            return comps;
        }

        public T[] RequireMany<T>() where T : ICommonObject{
            return RequireMany<T>(null);
        }

        public T[] RequireMany<T>(Action<T[]> predicate) where T: ICommonObject{
            var cs = GetManyRecursiveComponents(this, predicate);
            if (!cs.Any())
                return null;
            if (predicate != null)
            {
                predicate.Invoke(cs);
            }
            return cs;
        }

        public T RequireOnly<T>(string name, Action<T> predicate) where T : ICommonObject {
            var e_O = GetComponent<T>(name);
            if (e_O != null && predicate != null)
            {
                predicate.Invoke(e_O);
            }    
            return e_O;
        }

        public ICommonObject[] GetAllComponents(){
            return _components.Select(c => c.Key).ToArray();
        }

        public ICommonObject[] GetAllComponents(Func<ICommonObject, bool> predicate){
            return _components
                .Where(c => predicate.Invoke(c.Key))
                .Select(c => c.Key)
                .ToArray();
        }

        public T[] GetAllComponents<T>() where T: ICommonObject{
            var t = typeof(T);
            return GetAllComponents<T>(c => c.GetType().IsEqual(t) || t.IsAssignableFrom(c.GetType()));
        }

        public T[] GetAllComponents<T>(Func<ICommonObject, bool> predicate) where T: ICommonObject{
            return _components
                .Where(c => predicate.Invoke(c.Key))
                .Select(c => c.Key)
                .Cast<T>()
                .ToArray();
        }

		public void SetComponent (ICommonObject component, string name = ""){
			if (!(component is ICommonObject))
				return;
			component.Parent = this;
            component.Name = name;
            if(_components.Any(x => x.Key.GetType().IsEqual(component.GetType()) && name.Equals(x.Value)))
                return;
			_components.Add (new KeyValuePair<ICommonObject, string>(component, name));
		}

		public void SetComponents (IList<KeyValuePair<ICommonObject, string>> components){
			foreach (var component in components) {
				SetComponent (component.Key, component.Value);
			}
		}

        public void RemoveComponent(ICommonObject component, string name = ""){
            _components.RemoveAll(m => m.Key.GetType().IsEqual(component.GetType()) && name.Equals(m.Value));
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
        public virtual void Setup(){
            
        }

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