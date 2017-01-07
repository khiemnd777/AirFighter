using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using Saitama;
using Saitama.Ships;
using Saitama.FlyableControls;
using Saitama.FlyableControls.ShipControls;
using Saitama.Builders.ShipBuilders;
using Saitama.Weapons;
using Saitama.Weapons.MachineGun;
using Saitama.Weapons.AirToAirMissle;

public class ShipController : MonoBehaviour {
	[Header("Ambient speed")]
	public float ambientSpeed = 100.0f;
	public float ambientMaxSpeed = 500.0f;
	public float ambientMinSpeed = 75.0f;
	[Header("Rotation")]
	public float rotationSpeed = Constants.RotationSpeed;
	public float shiftedRotationExtraSpeed = 250.0f;
    public float rollSpeed = 25.0f;
	public float smoothZToZero = 100f;
	[Header("Shifting")]
	public float shiftDistance = 10f;
	public float shiftAngleLeft = 70f;
	public float shiftAngleRight = 290f;
	[Header("Gun controller")]
	public Transform gunLeft;
	public Transform gunRight;
	public Transform bullet;
	public LayerMask bulletTargets;
	public float bulletSpeed = 3000f;
	public float bulletLifeTime = 3f;
	public float bulletTimeBetweenExecute = 100f;
	[Header("Missle controller")]
	public Transform missleHandlerLeft;
	public Transform missleHandlerRight;
	public Transform missle;
	public LayerMask missleTargets;
	public float missleSpeed = 15000f;
	public float missleLifeTime = 10f;
	public float missleTimeBetweenExecute = 1000f;
	[Header("Others")]
	public Camera screenCamera;
	public Transform shipComponent;
	public RectTransform canvasUI;
	public RectTransform crosshairUI;
	public RectTransform targetLockerUI;
	public RectTransform targetTrackerUI;

	[NonSerialized]
	public Ship ship;

	Vector3 crosshairMinBound;
	Vector3 crosshairMaxBound;

	Rigidbody rigid;
	Vector3 mousePosition;

	ShipControl _shipControl;
	TargetLockerSystem _targetLocker;
	GunPivotTrackerSystem _gunPivotTracker;
	MachineGun _leftGun;
	MachineGun _rightGun;
	AirToAirMissleHandler _leftMissleHandler;
	AirToAirMissleHandler _rightMissleHandler;
	LevelManager _levelManager;
	
	void Start () {
		var self = this;
		rigid = GetComponent<Rigidbody> ();
		rigid.freezeRotation = true;

		// Assembly standard ship
		ship = ShipBuilder<StandardShip>.Assembly (this, new Dictionary<KeyValuePair<Type, string>, Component> {
			{ new KeyValuePair<Type, string> (typeof(MachineGun), "left"), gunLeft },
			{ new KeyValuePair<Type, string> (typeof(MachineGun), "right"), gunRight },
			{ new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "left"), missleHandlerLeft },
			{ new KeyValuePair<Type, string> (typeof(AirToAirMissleHandler), "right"), missleHandlerRight }
		}, delegate(StandardShip _ship) {
			_ship.AmbientSpeed = ambientSpeed;
			_ship.AmbientMaxSpeed = ambientMaxSpeed;
			_ship.AmbientMinSpeed = ambientMinSpeed;
			_ship.RotationSpeed = rotationSpeed;
			_ship.RollSpeed = rollSpeed;
			_ship.ShiftedRotationExtraSpeed = shiftedRotationExtraSpeed;
			_ship.ShiftDistance = shiftDistance;
			_ship.ShiftAngleLeft = shiftAngleLeft;
			_ship.ShiftAngleRight = shiftAngleRight;
			_ship.MonoComponent = shipComponent;

		}, delegate(StandardShip _ship, List<KeyValuePair<ICommonObject, string>> assembliedComponents){
			var __leftGun = _ship.GetComponent<MachineGun> ("left");
			__leftGun.Targets = bulletTargets;
            __leftGun.Speed = bulletSpeed;
            __leftGun.LifeTime = bulletLifeTime;
			__leftGun.TimeBetweenExecute = bulletTimeBetweenExecute;
			__leftGun.SetRawComponent(new RawComponent{
				Type = typeof(MachineGunBullet),
				Mono = self,
				MonoComponent = bullet
			});

			var __rightGun = _ship.GetComponent<MachineGun> ("right");
			__rightGun.Targets = bulletTargets;
            __rightGun.Speed = bulletSpeed;
            __rightGun.LifeTime = bulletLifeTime;
			__rightGun.TimeBetweenExecute = bulletTimeBetweenExecute;
			__rightGun.SetRawComponent(new RawComponent{
				Type = typeof(MachineGunBullet),
				Mono = self,
				MonoComponent = bullet
			});

			var __leftMissleHandler = _ship.GetComponent<AirToAirMissleHandler>("left");
			__leftMissleHandler.Targets = missleTargets;
			__leftMissleHandler.Speed = missleSpeed;
			__leftMissleHandler.LifeTime = missleLifeTime;
			__leftMissleHandler.TimeBetweenExecute = missleTimeBetweenExecute;
			__leftMissleHandler.SetRawComponent(new RawComponent{
				Type = typeof(AirToAirMissle),
				Mono = self,
				MonoComponent = missle
			});
			var _leftMissleHomingSystem = __leftMissleHandler.GetComponent<MissleHomingSystem>();
			_leftMissleHomingSystem.TargetTrackerUI = targetTrackerUI;
			_leftMissleHomingSystem.CanvasUI = canvasUI;

			var __rightMissleHandler = _ship.GetComponent<AirToAirMissleHandler>("right");
			__rightMissleHandler.Targets = missleTargets;
			__rightMissleHandler.Speed = missleSpeed;
			__rightMissleHandler.LifeTime = missleLifeTime;
			__rightMissleHandler.TimeBetweenExecute = missleTimeBetweenExecute;
			__rightMissleHandler.SetRawComponent(new RawComponent{
				Type = typeof(AirToAirMissle),
				Mono = self,
				MonoComponent = missle
			});
			var _rightMissleHomingSystem = __rightMissleHandler.GetComponent<MissleHomingSystem>();
			_rightMissleHomingSystem.TargetTrackerUI = targetTrackerUI;
			_rightMissleHomingSystem.CanvasUI = canvasUI;
		});

		_shipControl = ship.GetComponent<ShipControl> ();

		_shipControl.SmoothZToZero = smoothZToZero;

		// The samples of input events below:
		_shipControl.BalancedRollingInput += () => {
			
		};

		// on accelerating input
		_shipControl.AcceleratingInput += delegate (InputState inputState, Ship _ship) {
			switch(inputState){
				case InputState.On:
					
					break;
				case InputState.Off:
					
					break;
				default:
					break;
			}
		};

		// on breaking input
		_shipControl.BreakingInput += delegate (InputState inputState, Ship _ship) {
			switch(inputState){
				case InputState.On:
					
					break;
				case InputState.Off:
					
					break;
				default:
					break;
			}
		};

		// on left rolling input
		_shipControl.LeftRollingInput += delegate(InputState inputState, Ship _ship, float rollAngle) {
			switch(inputState){
				case InputState.HoldOn:
					
					break;
				case InputState.Off:
					
					break;
				default:
					break;
			}
		};

		// on right rolling input
		_shipControl.RightRollingInput += delegate(InputState inputState, Ship _ship, float rollAngle) {
			switch(inputState){
				case InputState.HoldOn:
					
					break;
				case InputState.Off:
				
					break;
				default:
					break;
			}
		};

		_shipControl.LeftShiftingInput += delegate(InputState inputState, Ship _ship) {
			switch(inputState){
			case InputState.On:
				
				break;
			case InputState.Off:
				
				break;
			default:
				break;
			}
		};

		_shipControl.RightShiftingInput += delegate(InputState inputState, Ship _ship) {
			switch(inputState){
			case InputState.On:
				
				break;
			case InputState.Off:
				
				break;
			default:
				break;
			}
		};

		_leftGun = ship.GetComponent<MachineGun> ("left");
		_rightGun = ship.GetComponent<MachineGun> ("right");

		_leftGun.OnTriggerHold += () => {
			
		};

		_rightGun.OnTriggerHold += () => {
			
		};

		_leftMissleHandler = ship.GetComponent<AirToAirMissleHandler> ("left");
		_rightMissleHandler = ship.GetComponent<AirToAirMissleHandler> ("right");

		_leftMissleHandler.OnTriggerHold += () => {
			
		};

		_rightMissleHandler.OnTriggerHold += () => {

		};

		_targetLocker = ship.GetComponent<TargetLockerSystem> ();

		_gunPivotTracker = ship.GetComponent<GunPivotTrackerSystem> ();
		_gunPivotTracker.SetGuns (_leftGun, _rightGun);

		_levelManager = ship.GetComponent<LevelManager> ();
        _levelManager.InitLevel((level) =>
            {
                _leftGun.IncreaseLevel(level);
                _rightGun.IncreaseLevel(level);
                _leftMissleHandler.IncreaseLevel(level);
                _rightMissleHandler.IncreaseLevel(level);
                _targetLocker.MissleSlot = _leftMissleHandler.Slot + _rightMissleHandler.Slot;
                _targetLocker.PrepareTargetLockerUIs (targetLockerUI, canvasUI);
            });
		_levelManager.OnIncreased += (level) => {
			_leftGun.IncreaseLevel(level);
			_rightGun.IncreaseLevel(level);
			_leftMissleHandler.IncreaseLevel(level);
			_rightMissleHandler.IncreaseLevel(level);
            _targetLocker.MissleSlot = _leftMissleHandler.Slot + _rightMissleHandler.Slot;
            _targetLocker.PrepareTargetLockerUIs (targetLockerUI, canvasUI);
		};
	} 

	void FixedUpdate () {
		mousePosition = Utility.ScreenToWorldPoint(screenCamera);

		_shipControl.Yaw(mousePosition);
		_shipControl.Pitch(mousePosition);
		_shipControl.Thrust();
		_shipControl.Roll ();

		_gunPivotTracker.RotateGunPivot ();

		_leftGun.HoldTrigger ();
		_leftGun.ReleaseTrigger ();

		_rightGun.HoldTrigger ();
		_rightGun.ReleaseTrigger ();

		_leftMissleHandler.SetLockers (_targetLocker.Lockers.ToArray());
		_leftMissleHandler.HoldTrigger ();
		_leftMissleHandler.ReleaseTrigger ();

		_rightMissleHandler.SetLockers (_targetLocker.Lockers.ToArray());
		_rightMissleHandler.HoldTrigger ();
		_rightMissleHandler.ReleaseTrigger ();
	}

	void Update(){
		_levelManager.Update ();
		_targetLocker.LockTargets(
			_targetLocker.FindTargetsInCrosshair ("Target", 1600, crosshairUI, 25.375f));
		
		_gunPivotTracker.LockTarget (
			_gunPivotTracker.FindTargetsInCrosshair ("Target", 1600, 10.25f));

		_shipControl.HandleInputEvents ();
	}

	void RotateShip(){
		if (shipComponent.transform.eulerAngles.z < 90 || shipComponent.transform.eulerAngles.z > 270) {
			var side = 0;
			if(Input.GetAxis("Mouse X") > 0)
				side = -1;
			else if(Input.GetAxis("Mouse X") < 0)
				side = 1;
			else
				side = 0;
			
			var rot = Quaternion.identity;
			rot.eulerAngles = new Vector3 (.0f, .0f, Mathf.Abs (mousePosition.x * Time.fixedDeltaTime * rotationSpeed) * side);
			shipComponent.rotation *= rot;
		}
	}
}