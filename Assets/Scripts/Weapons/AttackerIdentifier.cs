using UnityEngine;
using System;
using System.Linq;
using System.Collections.Generic;
using Saitama.Extensions;

namespace Saitama.Weapons
{
    public class AttackerIdentifier : CommonObject
    {
        public const string IDENTIFY = "attacker-identifier-identify";

        private IDictionary<GameObject, float> _attackers;

        public AttackerIdentifier(MonoBehaviour mono) : base (mono)
        {
            _attackers = new Dictionary<GameObject, float>();
        }

        public IDictionary<GameObject, float> Attackers { get { return _attackers; } }

        public override void Init()
        {
            EventEmitter
                .Static
                .On(IDENTIFY, this, "Identify");
        }

        public IDictionary<GameObject, float> GetAttackers(){
            return _attackers.Where(a => a.Key != null).ToDictionary(a => a.Key, a => a.Value);
        }

        public float Sum(){
            return _attackers.Select(a => a.Value).Sum();
        }

        public virtual void Identify(GameObject attacker, float damage){
            Identify(attacker, _mono.gameObject, damage);
        }

        public virtual void Identify(GameObject attacker, GameObject target, float damage)
        {
            if (_mono.gameObject.GetInstanceID() != target.GetInstanceID())
                return;
            if (!_attackers.Any(a => a.Key.GetInstanceID() == attacker.GetInstanceID()))
            {
                _attackers.Add(new KeyValuePair<GameObject, float>(attacker, damage));
            }
            else
            {
                _attackers[attacker] += damage;
            }
        }
    }
}

