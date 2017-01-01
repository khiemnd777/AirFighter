using UnityEngine;
using System.Linq;
using System.Collections.Generic;
using Saitama.Ships;
using Saitama.Builders;
using Saitama.Builders.ShipBuilders;

public class Flight : MonoBehaviour {
	public ShipController flightController;

	[Header("Wing trails")]
	public bool enableWingTrail = true;
	public TrailRenderer wingTrailLeft;
	public TrailRenderer wingTrailRight;

	void Start(){
		EnableWingTrails ();
	}

	void EnableWingTrails(){
		wingTrailLeft.enabled = wingTrailRight.enabled = enableWingTrail;
	}
}
