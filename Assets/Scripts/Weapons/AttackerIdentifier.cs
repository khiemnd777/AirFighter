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

        private List<GameObject> _attackers;

        public AttackerIdentifier(MonoBehaviour mono, Component monoComponent) : base (mono, monoComponent)
        {
            _attackers = new List<GameObject>();
        }

        public override void Init()
        {
            EventEmitter
                .Static
                .On(IDENTIFY, this, "Identify");
        }

        public GameObject[] Attackers { get { return _attackers.ToArray(); } }

        public void Identify(GameObject attacker)
        {
            Debug.Log(1); 
        }

        public void Identify(GameObject attacker, GameObject target)
        {
            Debug.Log(2);
            if (_mono.gameObject.GetInstanceID() == target.GetInstanceID())
            {
                _attackers.Add(attacker);   
            }
        }
    }
}

