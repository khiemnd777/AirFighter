using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;

namespace Saitama
{
    public class MonoController : MonoBehaviour
    {
        [NonSerialized]
        protected ICommonObject _commonObject;

        public ICommonObject CommonObject { get { return _commonObject; } set { _commonObject = value; } }

        protected T InstantiateCommonObject<T>(Action<T> predicate, params object[] attributes) where T : ICommonObject{
            var attrs = new List<object>{ this };
            if (attributes != null)
            {
                attrs.AddRange(attributes);
            }
            var t = typeof(T);
            var o = (T) Activator.CreateInstance(t, attrs.ToArray());
            o.Transform = transform;
            if (predicate != null)
            {
                predicate.Invoke(o);
            }
            o.Init();
            _commonObject = o;
            return o;
        }

        protected virtual void Awake(){
            var setupMethod = GetType().GetMethod("Setup"
                , BindingFlags.Public | BindingFlags.Instance | BindingFlags.NonPublic
                , null
                , CallingConventions.Any
                , new List<Type>().ToArray()
                , null);
            if (setupMethod != null)
            {
                setupMethod.Invoke(this, null);
            }
        }

        public T GetMonoComponent<T>(string name) where T : UnityEngine.Component{
            return GameObject.Find(name).GetComponent<T>();
        }

        public T GetMonoResource<T>(string path) where T : UnityEngine.Object{
            return (T) Resources.Load(path, typeof(T));
        }

        public T GetChildMonoComponent<T>(string name) where T: UnityEngine.Component{
            var t = transform.Find(name);
            if (typeof(T).IsEqual(typeof(Transform)))
            {
                return t as T;
            }
            return t.gameObject.GetComponent<T>();
        }

        private FieldInfo GetPrefabInfo<T>(){
            var t = typeof(T);
            return GetPrefabInfo(t);
        }

        private FieldInfo GetPrefabInfo(Type type){
            return type.GetField("Prefab", BindingFlags.Public | BindingFlags.Static);
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

            var c = go.GetComponent<T>();
            c.CommonObject = _commonObject;
            return c;
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

            var c = go.GetComponent<T>();
            c.CommonObject = _commonObject;
            return c;
        }

        public T RequireMono<T>(Vector3 position, Quaternion rotation, Transform parent, params Type[] componentTypes) where T : MonoController {
            var prefabInfo = GetPrefabInfo<T>();
            if (prefabInfo == null)
                return null;

            var prefabPath = (string) prefabInfo.GetValue(null);
            var go = InstantiateFromMonoResource<GameObject>(prefabPath, position, rotation, parent, typeof(T));
            if (go == null)
                return null;

            AssignMonoComponentTypes(go, componentTypes);

            var c = go.GetComponent<T>();
            c.CommonObject = _commonObject;
            return c;
        }

        private void AssignMonoComponentTypes (GameObject go, params Type[] componentTypes){
            foreach (var componentType in componentTypes)
            {
                go.gameObject.AddComponent(componentType);
            }
        }

        public T Require<T> () where T : ICommonObject {
            return GetCommonObjectComponent<T>(_commonObject, string.Empty, null);
        }

        public T Require<T> (Action<T> predicate) where T : ICommonObject {
            return GetCommonObjectComponent<T>(_commonObject, string.Empty, predicate);
        }

        public T Require<T>(string name) where T : ICommonObject {
            return GetCommonObjectComponent<T>(_commonObject, name, null);
        }

        public T Require<T>(string name, Action<T> predicate) where T : CommonObject {
            return GetCommonObjectComponent<T>(_commonObject, name, predicate);
        }

        private T GetCommonObjectComponent<T>(ICommonObject commonObject, string name, Action<T> predicate) where T : ICommonObject{
            var comp = commonObject.RequireOnly(name, predicate);
            if (comp == null && commonObject.Parent != null)
            {
                GetCommonObjectComponent<T>(commonObject.Parent, name, predicate);
            }
            return (T)comp;
        }

        protected virtual void Start() {
            PrepareStart(_commonObject);
            var beginMethod = GetType().GetMethod("Begin"
                , BindingFlags.Public | BindingFlags.Instance | BindingFlags.NonPublic
                , null
                , CallingConventions.Any
                , new List<Type>().ToArray()
                , null);
            if (beginMethod != null)
            {
                beginMethod.Invoke(this, null);
            }
        }

        protected virtual void FixedUpdate(){
            PrepareUpdate(_commonObject, "FixedUpdate");
            var punchMethod = GetType().GetMethod("OnePunch"
                , BindingFlags.Public | BindingFlags.Instance | BindingFlags.NonPublic
                , null
                , CallingConventions.Any
                , new List<Type>().ToArray()
                , null);
            if (punchMethod != null)
            {
                punchMethod.Invoke(this, null);
            }
        }

        protected virtual void Update(){
            PrepareUpdate(_commonObject, "Update");
            var punchMethod = GetType().GetMethod("TwoPunch"
                , BindingFlags.Public | BindingFlags.Instance | BindingFlags.NonPublic
                , null
                , CallingConventions.Any
                , new List<Type>().ToArray()
                , null);
            if (punchMethod != null)
            {
                punchMethod.Invoke(this, null);
            }
        }

        protected virtual void LateUpdate(){    
            PrepareUpdate(_commonObject, "LateUpdate");
            var punchMethod = GetType().GetMethod("ThreePunch"
                , BindingFlags.Public | BindingFlags.Instance | BindingFlags.NonPublic
                , null
                , CallingConventions.Any
                , new List<Type>().ToArray()
                , null);
            if (punchMethod != null)
            {
                punchMethod.Invoke(this, null);
            }
        }

        protected IEnumerator OnLoadingPercent(Action<float> act, float deltaTime = 1f){
            if (act == null)
                yield return null;
            var percent = .0f;
            while (percent <= 1f)
            {
                percent += Time.fixedDeltaTime * deltaTime;
                act.Invoke(percent);
                yield return new WaitForFixedUpdate();
            }
            yield return null;
        }

        protected IEnumerator OnLoadingPercent(Action<float> act, Func<bool> cond, float deltaTime = 1f){
            if (cond == null)
                yield return null;
            if (!cond.Invoke())
                yield return null;
            if (act == null)
                yield return null;
            var percent = .0f;
            while (percent <= 1f)
            {
                if (!cond.Invoke())
                    break;
                percent += Time.fixedDeltaTime * deltaTime;
                act.Invoke(percent);
                yield return new WaitForFixedUpdate();
            }
            yield return null;
        }

        protected IEnumerator OnLoadingPercent(Action<float> act, Action post, float deltaTime = 1f){
            if (act == null)
                yield return null;
            var percent = .0f;
            while (percent <= 1f)
            {
                percent += Time.fixedDeltaTime * deltaTime;
                act.Invoke(percent);
                yield return new WaitForFixedUpdate();
            }
            if (post != null)
            {
                post.Invoke();
            }
            yield return null;
        }

        protected IEnumerator OnLoadingPercent(Action<float> act, Action post, Func<bool> cond, float deltaTime = 1f){
            if (cond == null)
                yield return null;
            if (!cond.Invoke())
                yield return null;
            if (act == null)
                yield return null;
            var percent = .0f;
            while (percent <= 1f)
            {
                if (!cond.Invoke())
                    break;
                percent += Time.fixedDeltaTime * deltaTime;
                act.Invoke(percent);
                yield return new WaitForFixedUpdate();
            }
            if (post != null)
            {
                post.Invoke();
            }
            yield return null;
        }

        protected IEnumerator OnLoadingPercent(Action<float> act, Action pre, Action post, float deltaTime = 1f){
            if (act == null)
                yield return null;
            if (pre != null)
            {
                pre.Invoke();
            }
            var percent = .0f;
            while (percent <= 1f)
            {
                percent += Time.fixedDeltaTime * deltaTime;
                act.Invoke(percent);
                yield return new WaitForFixedUpdate();
            }
            if (post != null)
            {
                post.Invoke();
            }
            yield return null;
        }

        void PrepareStart(ICommonObject commonObject){
            if (commonObject != null)
            {
                var components = commonObject.GetAllComponents();
                foreach (var component in components)
                {
                    PrepareStart(component);
                }
            }
        }

        void PrepareUpdate(ICommonObject commonObject, string how){
            if (commonObject != null)
            {
                ((IUpdatable)commonObject)
                    .GetType()
                    .GetMethod(how)
                    .Invoke(commonObject, null);
            }
        }
    }
}

