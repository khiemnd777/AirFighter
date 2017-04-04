using System;
using System.Collections.Generic;
using System.Reflection;

namespace Saitama
{
    public class MonoPerController : MonoController
    {
        public float health;

        public MonoPerController()
        {
            
        }

        protected override void Update()
        {
            base.Update();

            if (health <= 0)
            {
                var onDeathMethod = GetType().GetMethod("OnDeath"
                    , BindingFlags.Public | BindingFlags.Instance | BindingFlags.NonPublic
                    , null
                    , CallingConventions.Any
                    , new List<Type>().ToArray()
                    , null);
                if (onDeathMethod != null)
                {
                    onDeathMethod.Invoke(this, null);
                }
            }
        }
    }
}

