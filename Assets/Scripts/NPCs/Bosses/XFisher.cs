using UnityEngine;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Saitama;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public class XFisher : Boss, IMovable
    {
        private Rigidbody _rigidbody;

        public XFisher(MonoBehaviour mono, Component monoComponent) : base (mono, monoComponent)
        {
            
        }

        public override void Init()
        {
            _rigidbody = _mono.GetComponent<Rigidbody>();
            ComputeLevel();
        }

        public void Move()
        {
            // velocity
            var velocity = Utility.CalculateVelocity(_rigidbody.rotation, AmbientSpeed, Time.fixedDeltaTime);
            _rigidbody.velocity = velocity;

            // detect target position
            var targetPosition = DetectTargetsPosition("Flight", 1600f);
            if (targetPosition == Vector3.zero)
            {
                // if target position was zero, the NPC moves with zero rotation
                var yaw = Utility.CalculateYaw (Vector2.zero, RotationSpeed, Time.fixedDeltaTime);
                _rigidbody.rotation *= yaw;

                var pitch = Utility.CalculatePitch (Vector2.zero, RotationSpeed, Time.fixedDeltaTime);
                _rigidbody.rotation *= pitch;    
            }
            else
            {
                // if target position was non-zero, the NPC moves to target position
                var lookTo = Quaternion.LookRotation(targetPosition - _mono.transform.position);
                var rotation = Quaternion.RotateTowards(_mono.transform.rotation, lookTo, Constants.DEFAULT_MAX_DEGREES_DELTA);
                _rigidbody.MoveRotation(rotation);
            }
        }

        public override void ComputeLevel()
        {
            // level be computed via average level total of players
            var targets = GameObject.FindGameObjectsWithTag("Flight");
            var levelManagers = Utility.GetShipComponents<LevelManager>(targets);
            var levels = levelManagers.Select(levelManager => levelManager.Level);
            var level = levels.Sum();
            level /= targets.Length;
            _level = level;
        }

        private Vector3 DetectTargetsPosition(string tag, float limit){
            var targets = Utility.FindTargetsViaRadar(tag, _mono.transform.position, limit);
            var positions = targets.Select(target => target.transform.position).ToArray();
            var averagePosition = Utility.ComputeAveragePosition(positions);
            return averagePosition;
        }
    }
}

