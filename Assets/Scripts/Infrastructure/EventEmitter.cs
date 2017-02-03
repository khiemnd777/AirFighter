using System;
using System.Linq;
using System.Reflection;
using System.Collections.Generic;

namespace Saitama
{
    public class EventEmitter
    {
        private Dictionary<string, List<KeyValuePair<object, string>>> _events;
        
        public EventEmitter()
        {
            _events = new Dictionary<string, List<KeyValuePair<object, string>>>();
        }

        public static EventEmitter Static{
            get {
                return Singleton<EventEmitter>.Instance ?? (Singleton<EventEmitter>.Instance = new EventEmitter());
            }
        }

        public EventEmitter On(string eventName, object listenerObject, string listenerMethod)
        {
            List<KeyValuePair<object, string>> subscribedMethods;
            if (this._events.TryGetValue(eventName, out subscribedMethods))
            {
                subscribedMethods.Add(new KeyValuePair<object, string>(listenerObject, listenerMethod));
            }
            else
            {
                this._events.Add(eventName, new List<KeyValuePair<object, string>> { new KeyValuePair<object, string>(listenerObject, listenerMethod) });
            }
            return this;
        }

        public EventEmitter Emit(string eventName, params object[] parameters)
        {
            List<KeyValuePair<object, string>> subscribedMethods;
            if (this._events.TryGetValue(eventName, out subscribedMethods))
            {
                foreach (var f in subscribedMethods)
                {
                    var types = parameters
                        .Select(p => p.GetType())
                        .ToArray();
                    var method = f.Key
                        .GetType()
                        .GetMethod(f.Value
                            , BindingFlags.Public | BindingFlags.Instance
                            , null
                            , CallingConventions.Any
                            , types
                            , null);
                    method.Invoke(f.Key, parameters);
                }
            }
            return this;
        }

        public EventEmitter RemoveListener(string eventName, object listenerObject, string listenerMethod)
        {
            List<KeyValuePair<object, string>> subscribedMethods;
            if (this._events.TryGetValue(eventName, out subscribedMethods))
            {
                var hasSubscriber = subscribedMethods.Exists(x => ReferenceEquals(x.Key, listenerObject) && listenerMethod.Equals(x.Value));
                if (hasSubscriber)
                {
                    subscribedMethods.RemoveAll(x => ReferenceEquals(x.Key, listenerObject) && listenerMethod.Equals(x.Value));
                }
            }
            return this;
        }

        public EventEmitter RemoveAllListeners(string eventName)
        {
            List<KeyValuePair<object, string>> subscribedMethods;
            if (this._events.TryGetValue(eventName, out subscribedMethods))
            {
                subscribedMethods.Clear();
            }
            return this;
        }
    }
}

