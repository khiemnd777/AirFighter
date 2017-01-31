using UnityEngine;
using System;
using System.Linq;
using System.Collections.Generic;
using Saitama.Extensions;

namespace Saitama.Weapons
{
    public class AttackerIdentifier : CommonObject
    {
        private List<GameObject> _attackers;

        public AttackerIdentifier(MonoBehaviour mono, Component monoComponent) : base (mono, monoComponent)
        {
            _attackers = new List<GameObject>();
        }

        public override void Init()
        {
            EventEmitter
                .Static
                .On("attacker-identifier-identify", this, "Identify");
        }

        public GameObject[] Attackers { get { return _attackers.ToArray(); } }

        public void Identify(GameObject attacker, GameObject target){
            _attackers.Add(attacker);
        }
    }
}

