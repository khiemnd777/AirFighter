using UnityEngine;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Saitama;
using Saitama.Weapons;
using Saitama.Extensions;
using Saitama.Ships;

namespace Saitama.NPCs.Bosses
{
    public class XFisher : Boss, IMovable, IChasing, IRunningForLife
    {
        private const int RUNNING_FOR_LIFE_HEALTH_PERCENT = 20;
        private const int DEFAULT_HEALTH = 99999;
        private int _runningForLifeHealth;

        private Rigidbody _rigidbody;

        public XFisher(MonoBehaviour mono) : base (mono)
        {
            
        }

        public override void Init()
        {
            _rigidbody = _mono.GetComponent<Rigidbody>();
        }

        public override void Setup()
        {
            // compute level at first time
            ComputeLevel();
            // compute health at first time
            ComputeHealth();
        }

        public void Chase(){
            if (_mono.GetScore() > _runningForLifeHealth)
            {
                // compute velocity
                ComputeVelocity();

                // detect target position
                var targetPosition = DetectTargetsPosition(Constants.PLAYER_TAG, 1600f);
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
                    Chase(targetPosition);
                }
            }
        }

        public void Chase(GameObject target){
            Chase(target.transform.position);
        }

        public void Chase(Vector3 targetPosition){
            var lookTo = Quaternion.LookRotation(targetPosition - _mono.transform.position);
            var rotation = Quaternion.RotateTowards(_mono.transform.rotation, lookTo, Constants.DEFAULT_MAX_DEGREES_DELTA);
            _rigidbody.MoveRotation(rotation);
        }

        public void RunForLife(){
            if (_mono.GetScore() <= _runningForLifeHealth)
            {
                // compute velocity
                ComputeVelocity();

                // the NPC should be moved straigth when it was near death
                var yaw = Utility.CalculateYaw(Vector2.zero, RotationSpeed, Time.fixedDeltaTime);
                _rigidbody.rotation *= yaw;

                var pitch = Utility.CalculatePitch(Vector2.zero, RotationSpeed, Time.fixedDeltaTime);
                _rigidbody.rotation *= pitch;
            }
        }

        public void Move()
        {
            if (_isDead)
                return;
            // die
            Die();
            // chasing
            Chase();
            // running for life
            RunForLife();
        }

        public override void Die()
        {
            if (_mono.GetScore() <= 0)
            {
                var attackerIdentifier = _mono.GetShipComponent<AttackerIdentifier>();
                Utility.SplitPoints(attackerIdentifier, _mono.GetOriginalScore());
            }
            base.Die();
        }

        public void ComputeLevel()
        {
            // level be computed via average level total of players
            var targets = GameObject.FindGameObjectsWithTag(Constants.PLAYER_TAG);
            var targetLevelManagers = targets.GetShipComponents<LevelManager>();
            var levels = targetLevelManagers.Select(l => l.Level);
            var sum = levels.Sum();
            sum /= targets.Length;
            var levelManager = _mono.GetShipComponent<LevelManager>();
            levelManager.ComputeLevel(sum);
        }

        public void ComputeHealth()
        {
            var targets = GameObject.FindGameObjectsWithTag(Constants.PLAYER_TAG);
            var targetScoreManagers = targets.GetShipComponents<ScoreManager>();
            var scores = targetScoreManagers.Select(t => t.Score);
            var sum = scores.Sum();
            var scoreManager = _mono.GetShipComponent<ScoreManager>();
            var score = sum <= DEFAULT_HEALTH ? DEFAULT_HEALTH : sum;
            _runningForLifeHealth = score * RUNNING_FOR_LIFE_HEALTH_PERCENT / 100;
            scoreManager.ComputeScore(score);
        }

        private void ComputeVelocity(){
            var velocity = Utility.CalculateVelocity(_rigidbody.rotation, AmbientSpeed, Time.fixedDeltaTime);
            _rigidbody.velocity = velocity;
        }

        private Vector3 DetectTargetsPosition(string tag, float limit){
            var targets = Utility.FindTargetsViaRadar(tag, _mono.transform.position, limit);
            var positions = targets.Select(target => target.transform.position).ToArray();
            var averagePosition = Utility.ComputeAveragePosition(positions);
            return averagePosition;
        }
    }
}

