using UnityEngine;
using System;
using System.Collections.Generic;
using Saitama;
using Saitama.Ships;
using Saitama.Builders.ShipBuilders;
using Saitama.FlyableControls.ShipControls;
using Saitama.Weapons;
using Saitama.Weapons.MachineGun;
using Saitama.Weapons.AirToAirMissle;

public class Initialization : MonoBehaviour {
	
	void Awake(){
		ShipBuilder<StandardShip>.GetAlready (typeof(ShipControl)
			, typeof(TargetLockerSystem)
			, typeof(GunPivotTrackerSystem)
			, typeof(LevelManager)
			, typeof(ScoreManager)
			, new KeyValuePair<Type, string> (typeof(MachineGun), "left")
			, new KeyValuePair<Type, string> (typeof(MachineGun), "right")
			, new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "left")
			, new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "right"));	
	}
}