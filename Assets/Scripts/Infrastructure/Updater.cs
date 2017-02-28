using UnityEngine;
using System;
using System.Collections.Generic;
using System.Reflection;

namespace Saitama
{
    public abstract class Updater: CommonObject, IUpdatable
    {
        protected Updater(MonoBehaviour mono) : base (mono){
            
        }

        public virtual void FixedUpdate(){
            PrepareUpdate(this, "FixedUpdate");
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

        public virtual void Update(){
            PrepareUpdate(this, "Update");
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

        public virtual void LateUpdate(){
            PrepareUpdate(this, "LateUpdate");
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

        private void PrepareUpdate(ICommonObject commonObject, string how){
            if (commonObject != null)
            {
                var updatables = commonObject.GetAllComponents(c => typeof(IUpdatable).IsAssignableFrom(c.GetType()));
                foreach (var updatable in updatables)
                {
                    PrepareUpdate(updatable, how);
                    ((IUpdatable)updatable)
                        .GetType()
                        .GetMethod(how)
                        .Invoke(updatable, null);
                }
            }
        }
    }
}

