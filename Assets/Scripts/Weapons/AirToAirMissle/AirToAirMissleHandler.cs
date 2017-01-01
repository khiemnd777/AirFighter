using UnityEngine;
using System.Collections;

namespace Saitama.Weapons.AirToAirMissle
{
	public class AirToAirMissleHandler : MissleHandler
	{
		private float nextExecuteTime;
		private bool isExecuted;
		private readonly MissleHomingSystem _missleHomingSystem;

		public AirToAirMissleHandler(MonoBehaviour mono):base(mono)
		{
			_missleHomingSystem = new MissleHomingSystem (mono);
		}

		public override void Init ()
		{
			base.Init ();
			_missleHomingSystem.MaxDegreesDelta = 20;
			SetComponent (_missleHomingSystem);
		}

		public void SetLockers(TargetLocker[] lockers){
			_missleHomingSystem.SetLockers (lockers);
		}

		public override void HoldTrigger (){
			if (Input.GetMouseButton (1)) {
				if (OnTriggerHold != null) {
					OnTriggerHold.Invoke ();
				}

				if (Time.time > nextExecuteTime && !isExecuted) {
					using (var missle = InstantiateRawComponent<AirToAirMissle> ("", _targets)) {
						missle.LifeTime = LifeTime;
						missle.Speed = Speed;
						missle.MissleHandler = this;
						_missleHomingSystem.GoHome (missle);
						nextExecuteTime = Time.time + TimeBetweenExecute / 1000f;
						isExecuted = true;	
					}
				}
			}
		}

		public override void ReleaseTrigger ()
		{
			if (Input.GetMouseButtonUp (1)) {
				if (OnTriggerRelease != null) {
					OnTriggerRelease.Invoke ();
				}
				isExecuted = false;
			}
		}
	}
}