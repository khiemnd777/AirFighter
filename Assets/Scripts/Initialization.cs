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
using Saitama.NPCs.Bosses;

public class Initialization : MonoBehaviour {
	
	void Awake(){
        // Assembly the standard ship
		ShipBuilder<StandardShip>.GetAlready (typeof(ShipControl)
			, typeof(TargetLockerSystem)
			, typeof(GunPivotTrackerSystem)
			, typeof(LevelManager)
			, typeof(ScoreManager)
			, new KeyValuePair<Type, string> (typeof(MachineGun), "left")
			, new KeyValuePair<Type, string> (typeof(MachineGun), "right")
			, new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "left")
			, new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "right"));	

        // Assembly the X Fisher boss
        ShipBuilder<XFisher>.GetAlready(
            typeof(TargetLockerSystem)
            , typeof (GunPivotTrackerSystem)
            , new KeyValuePair<Type, string> (typeof(MachineGun), "1")
            , new KeyValuePair<Type, string> (typeof(MachineGun), "2")
            , new KeyValuePair<Type, string> (typeof(MachineGun), "3")
            , new KeyValuePair<Type, string> (typeof(MachineGun), "4")
            , new KeyValuePair<Type, string> (typeof(MachineGun), "5")
            , new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "1")
            , new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "2")
            , new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "3")
            , new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "4")
            , new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "5"));
	}
}