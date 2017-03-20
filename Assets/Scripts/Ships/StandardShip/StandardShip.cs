using UnityEngine;
using System;
using System.Collections.Generic;
using Saitama.FlyableControls.ShipControls;
using Saitama.Weapons;
using Saitama.Weapons.MachineGun;
using Saitama.Weapons.AirToAirMissle;
using Saitama.Extensions;

namespace Saitama.Ships
{
	public class StandardShip : Ship
	{
        public StandardShip (MonoBehaviour mono)
            : base(mono)
		{
			
		}

        public override void Init()
        {
            var shipModel = GetChildMonoComponent<Transform>("MAX");

            Require<ShipControl>();
            Require<AttackerIdentifier>();
            Require<ScoreManager>();
            Require<LevelManager>(lv => {
                lv.OnIncreased += (level) => {

                };
            });
            Require<MachineGun>("gun1", (gun) =>
                {
                    gun.Transform.SetParent(shipModel);
                    gun.Transform.localPosition = new Vector3(.005f, .025f, .0f);
                    //gun.Transform.localRotation = Quaternion.Euler(new Vector3(0f, .0f, 0f));
                    gun.Transform.localScale = new Vector3(.002f, .002f, .002f);
                    gun.Targets = LayerMask.GetMask("Flight", "Target");
                });

            Require<MachineGun>("gun2", (gun) =>
                {
                    gun.Transform.SetParent(shipModel);
                    gun.Transform.localPosition = new Vector3(-.005f, .025f, .0f);
                    //gun.Transform.localRotation = Quaternion.Euler(new Vector3(0f, .0f, 0f));
                    gun.Transform.localScale = new Vector3(.002f, .002f, .002f);
                    gun.Targets = LayerMask.GetMask("Flight", "Target");
                });

            Require<AirToAirMissleHandler>("missle1", (missleHandler) =>
                {
                    missleHandler.Transform.SetParent(shipModel);
                    missleHandler.Transform.localPosition = new Vector3(.009f, .025f, .0f);
                    //missleHandler.Transform.localRotation = Quaternion.Euler(new Vector3(0f, .0f, 0f));
                    missleHandler.Transform.localScale = new Vector3(.002f, .002f, .002f);
                    missleHandler.Targets = LayerMask.GetMask("Target");
                });
            
            Require<AirToAirMissleHandler>("missle2", (missleHandler) =>
                {
                    missleHandler.Transform.SetParent(shipModel);
                    missleHandler.Transform.localPosition = new Vector3(-.009f, .025f, .0f);
                    //missleHandler.Transform.localRotation = Quaternion.Euler(new Vector3(0f, .0f, 0f));
                    missleHandler.Transform.localScale = new Vector3(.002f, .002f, .002f);
                    missleHandler.Targets = LayerMask.GetMask("Target");
                });

            Require<GunPivotTrackerSystem>();
            Require<TargetLockerSystem>();
            Require<TargetTrackerSystem>();
        }

        public override void Die()
        {
            Require<ScoreManager>(score =>
                {
                    if(score.Score <= 0){
                        Require<AttackerIdentifier>(attackerIdentifier => {
                            Utility.SplitPoints(attackerIdentifier, score.OriginalScore);
                        });
                    }
                });
            base.Die();
        }
	}
}

