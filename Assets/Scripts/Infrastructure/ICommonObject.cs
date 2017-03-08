using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

namespace Saitama
{
    public interface ICommonObject : ICloneable<ICommonObject>, IDisposable, ICoroutine, ITransformable
	{
		// Props
		ICommonObject Parent {get;set;}
		bool IsActive { get; }
        string Name { get; set; }

        // MonoComponents
        T GetMonoComponent<T>(string name) where T : UnityEngine.Component;
        T GetChildMonoComponent<T>(string name) where T: UnityEngine.Component;
        T GetMonoResource<T>(string path) where T : UnityEngine.Object;
        T InstantiateFromMonoResource<T>(string path, params Type[] componentTypes) where T: UnityEngine.Object;
        T InstantiateFromMonoResource<T>(string path, Vector3 position, Quaternion rotation, params Type[] componentTypes) where T : UnityEngine.Object;
        T InstantiateFromMonoResource<T>(string path, Vector3 position, Quaternion rotation, Transform parent, params Type[] componentTypes) where T: UnityEngine.Object;

		// Components
		T GetComponent<T> (string name = "") where T: ICommonObject;
        ICommonObject GetComponent(Type type, string name = "");
		List<T> GetComponents<T> (string name = "") where T: ICommonObject;
        List<ICommonObject> GetComponents(Type type, string name = "");
        List<ICommonObject> GetComponents(Func<KeyValuePair<ICommonObject, string>, bool> predicate);
        ICommonObject[] GetAllComponents();
        ICommonObject[] GetAllComponents(Func<ICommonObject, bool> predicate);
        T[] GetAllComponents<T>() where T: ICommonObject;
        T[] GetAllComponents<T>(Func<ICommonObject, bool> predicate) where T: ICommonObject;

        T Require<T>(params object[] attributes) where T : ICommonObject;
        T Require<T>(Action<T> predicate, params object[] attributes) where T : ICommonObject;
        T Require<T>(string name, params object[] attributes) where T : ICommonObject;
        T Require<T>(string name, Action<T> predicate, params object[] attributes) where T : ICommonObject;
        T RequireOnly<T>(string name, Action<T> predicate) where T : ICommonObject;
        T[] RequireMany<T>() where T : ICommonObject;
        T[] RequireMany<T>(Action<T[]> predicate) where T: ICommonObject;

        T RequireMono<T>(params Type[] componentTypes) where T : MonoController;
        T RequireMono<T>(Vector3 position, Quaternion rotation, params Type[] componentTypes) where T : MonoController;
        T RequireMono<T>(Vector3 position, Quaternion rotation, Transform parent, params Type[] componentTypes) where T : MonoController;

		void SetComponent (ICommonObject component, string name = "");
		void SetComponents (IList<KeyValuePair<ICommonObject, string>> components);

        void RemoveComponent(ICommonObject component, string name = "");

        // Utilities
        IEnumerator OnLoadingPercent(Action<float> act, float deltaTime = 1f);
        IEnumerator OnLoadingPercent(Action<float> act, Func<bool> cond, float deltaTime = 1f);
        IEnumerator OnLoadingPercent(Action<float> act, Action post, float deltaTime = 1f);
        IEnumerator OnLoadingPercent(Action<float> act, Action pre, Action post, float deltaTime = 1f);

		// Raw components
		void SetRawComponent (RawComponent rawComponent, string name = "");
		RawComponent GetRawComponent (Type type, string name = "");
		T InstantiateRawComponent<T> (string name = "", params object[] args) where T: ICommonObject;

		// Other
		void Init();
        void Setup();
		void SetActive (bool isActive);
	}
}

