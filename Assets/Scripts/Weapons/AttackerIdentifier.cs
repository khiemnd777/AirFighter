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

        public GameObject[] Attackers { get { return _attackers.ToArray(); } }

        public override void Init()
        {
            EventEmitter
                .Static
                .On(IDENTIFY, this, "Identify");
        }

        public void Identify(GameObject attacker, GameObject target)
        {
            if (_mono.gameObject.GetInstanceID() != target.GetInstanceID())
                return;
            if (_attackers.Contains(attacker))
                return;
            _attackers.Add(attacker);
        }
    }
}

