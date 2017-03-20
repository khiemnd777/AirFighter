using UnityEngine;
using System;
using System.Collections;
using Saitama;
using Saitama.Ships;
using Saitama.FlyableObjects;

namespace Saitama.FlyableControls.ShipControls
{
	public class ShipControl : FlyableControl, IShipControl
	{
		private Rigidbody _rigidbody;
		private Ship _ship;
        private Transform _shipModel;
        private JoystickController _joystickController;
        private AccessoryController _accessoryController;

		private float keepAmbientSpeed = 0f;
		private float keepAmbientMaxSpeed = 0f;
		private float keepAmbientMinSpeed = 0f;
		private float keepRotationSpeed = 0f;
		private float smoothZToZero = 100f;
		private float rollAngle = .0f;

		private Vector3 shipAnchorPosition;
		private Quaternion shipAnchorRotation;

		private SpeedControllerState speedControllerState;
		private ShiftingState shiftingState;

		private bool isKeptLeftShifting;
		private bool isKeptRightShifting;

        private bool isSwitchToZero;

        private bool isAccelerating;
        private bool isAccelrated;
        private bool isBreaking;
        private bool isBroke;

		public float SmoothZToZero { 
			get { return smoothZToZero; } 
			set { smoothZToZero = value; } 
		}

		public Action BalancedRollingInput;
		public Action<InputState, Ship> AcceleratingInput;
		public Action<InputState, Ship> BreakingInput;
		public Action<InputState, Ship, float> LeftRollingInput;
		public Action<InputState, Ship, float> RightRollingInput;
		public Action<InputState, Ship> LeftShiftingInput;
		public Action<InputState, Ship> RightShiftingInput;

        public ShipControl (MonoBehaviour mono) : base(mono)
		{
			
		}

        public override void Init ()
        {
            _rigidbody = _mono.GetComponent<Rigidbody> ();
            _joystickController = GetMonoComponent<JoystickController>("SmartphoneController/JoystickController");
            _accessoryController = GetMonoComponent<AccessoryController>("SmartphoneController/AccessoryController");
            _transform = _mono.transform;
            _ship = (Ship) _parent;
            _shipModel = GetChildMonoComponent<Transform>("MAX");

            this.InitKeptValues ();
        }

		private void InitKeptValues(){
			keepAmbientSpeed = _ship.AmbientSpeed;
			keepRotationSpeed = _ship.RotationSpeed;
			// keep the original position of inner ship
            shipAnchorPosition = _shipModel.localPosition;
			// keep the original rotation of inner ship
            shipAnchorRotation = _shipModel.localRotation;

			shiftingState = ShiftingState.Normal;
			speedControllerState = SpeedControllerState.Normal;
		}

        void OnePunch(){
            var touchPosition = new Vector2(_joystickController.Horizontal, _joystickController.Vertical);
            Yaw(touchPosition);
            Pitch(touchPosition);
            Thrust();
            //Roll ();
        }

        void TwoPunch(){
            HandleInputEvents();
        }

		public override void HandleInputEvents(){
			// on balanced rolling
			if(Input.GetKey(KeyCode.R)){
				if (BalancedRollingInput != null) {
					BalancedRollingInput.Invoke();
				}
				StartCoroutine(BalanceRollingLinear(smoothZToZero/ 100f));
			}
            // on normal moving
            if(_accessoryController.TimeHoldDown >= 0.5f){
                if (isBreaking)
                {
                    isBreaking = false;
                    speedControllerState = SpeedControllerState.ReleaseBreaking;
                    if (BreakingInput != null) {
                        BreakingInput.Invoke (InputState.Off, _ship);
                    }
                    StartCoroutine (ShiftToNormalSpeedLinear (1f));
                }
                if (isAccelerating)
                {
                    isAccelerating = false;
                    speedControllerState = SpeedControllerState.ReleaseAccelerating;
                    if (AcceleratingInput != null) {
                        AcceleratingInput.Invoke (InputState.Off, _ship);
                    }
                    StartCoroutine (ShiftToNormalSpeedLinear (1f));
                }
            }
			// on accelerating
            if (_accessoryController.isSwipingUp)
            {
                if (!isAccelerating)
                {
                    StopCoroutine("ShiftToNormalSpeedLinear");
                    isAccelerating = true;
                    isBreaking = false;
                    speedControllerState = SpeedControllerState.Accelerating;
                    if (AcceleratingInput != null)
                    {    
                        AcceleratingInput.Invoke(InputState.On, _ship);
                    }
                    StartCoroutine(AccelerateLinear(1f));
                }
//                if (isBreaking && !isNormalSpeed)
//                {
//                    isAccelerating = false;
//                    isBreaking = false;
//                    speedControllerState = SpeedControllerState.ReleaseBreaking;
//                    if (BreakingInput != null) {
//                        BreakingInput.Invoke (InputState.Off, _ship);
//                    }
//                    StartCoroutine (ShiftToNormalSpeedLinear (1f));
//                }
            }
			// on breaking
            if (_accessoryController.isSwipingDown)
            {
                if (!isBreaking)
                {
                    StopCoroutine("ShiftToNormalSpeedLinear");
                    isBreaking = true;
                    isAccelerating = false;
                    speedControllerState = SpeedControllerState.Breaking;
                    if (BreakingInput != null) {
                        BreakingInput.Invoke (InputState.On, _ship);
                    }
                    StartCoroutine (BreakLinear (1f));
                }
//                if (isAccelerating && !isNormalSpeed)
//                {
//                    isAccelerating = false;
//                    isBreaking = false;
//                    isNormalSpeed = true;
//                    speedControllerState = SpeedControllerState.ReleaseAccelerating;
//                    if (AcceleratingInput != null) {
//                        AcceleratingInput.Invoke (InputState.Off, _ship);
//                    }
//                    StartCoroutine (ShiftToNormalSpeedLinear (1f));
//                }
            }
//			if (Input.GetKeyDown (KeyCode.S)) {
//				speedControllerState = SpeedControllerState.Breaking;
//				if (BreakingInput != null) {
//					BreakingInput.Invoke (InputState.On, _ship);
//				}
//				StartCoroutine (BreakLinear (1f));
//			}
//			// on shifting to normal speed after breaking
//			if (Input.GetKeyUp (KeyCode.S)) {
//				speedControllerState = SpeedControllerState.ReleaseBreaking;
//				if (BreakingInput != null) {
//					BreakingInput.Invoke (InputState.Off, _ship);
//				}
//				StartCoroutine (ShiftToNormalSpeedLinear (1f));
//			}
			// on rolling left with state is hold on
			if (Input.GetKey (KeyCode.Q)) {
				rollAngle = Time.fixedDeltaTime * _ship.RollSpeed;
				if (LeftRollingInput != null) {
					LeftRollingInput.Invoke (InputState.HoldOn, _ship, rollAngle);
				}
			}
			// on rolling left with state is off
			if(Input.GetKeyUp (KeyCode.Q)){
				rollAngle = 0f;
				if (LeftRollingInput != null) {
					LeftRollingInput.Invoke (InputState.Off, _ship, rollAngle);
				}
			}
			// on rolling right with state is hold on
			if (Input.GetKey (KeyCode.E)) {
				rollAngle = -Time.fixedDeltaTime * _ship.RollSpeed;
				if (RightRollingInput != null) {
					RightRollingInput.Invoke (InputState.HoldOn, _ship, rollAngle);
				}
			}
			// on rolling right with state is off
			if (Input.GetKeyUp (KeyCode.E)) {
				rollAngle = 0f;
				if (RightRollingInput != null) {
					RightRollingInput.Invoke (InputState.Off, _ship, rollAngle);
				}
			}

            if (_accessoryController.isSwipingLeft)
            {
                if (_accessoryController.Horizontal < -0.9f)
                {
                    if (!(shiftingState == ShiftingState.Left || isKeptRightShifting))
                    {
                        shiftingState = ShiftingState.Left;
                        isKeptLeftShifting = true;
                        _ship.RotationSpeed = keepRotationSpeed + _ship.ShiftedRotationExtraSpeed;
                        if (LeftShiftingInput != null)
                        {
                            LeftShiftingInput.Invoke(InputState.On, _ship);
                        }
                        StartCoroutine(ShiftLeftLinear(.5f)); 
                    }
                }  
            }
            else
            {
                if (!isKeptRightShifting)
                {
                    shiftingState = ShiftingState.ReleaseLeft;
                    isKeptLeftShifting = false;
                    _ship.RotationSpeed = keepRotationSpeed;
                    if(LeftShiftingInput != null){
                        LeftShiftingInput.Invoke(InputState.Off, _ship);
                    }
                    StartCoroutine(ShiftToNormalPositionLinear(.5f));   
                }
            }

            if (_accessoryController.isSwipingRight)
            {
                if (_accessoryController.Horizontal > .9f)
                {
                    if (!(shiftingState == ShiftingState.Right || isKeptLeftShifting))
                    {
                        shiftingState = ShiftingState.Right;
                        isKeptRightShifting = true;
                        _ship.RotationSpeed = keepRotationSpeed + _ship.ShiftedRotationExtraSpeed;
                        if(RightShiftingInput != null){
                            RightShiftingInput.Invoke(InputState.On, _ship);
                        }
                        StartCoroutine(ShiftRightLinear(.5f));      
                    }
                }
            }
            else
            {
                if (!isKeptLeftShifting)
                {
                    shiftingState = ShiftingState.ReleaseRight;
                    isKeptRightShifting = false;
                    _ship.RotationSpeed = keepRotationSpeed;
                    if(RightShiftingInput != null){
                        RightShiftingInput.Invoke(InputState.Off, _ship);
                    }
                    StartCoroutine(ShiftToNormalPositionLinear(.5f));
                }
            }
//			StartCoroutine (new WaitWhile (() => {
//				if(Input.GetKey(KeyCode.A)){
//					if(shiftingState == ShiftingState.Left || isKeptRightShifting)
//						return false;
//					shiftingState = ShiftingState.Left;
//					isKeptLeftShifting = true;
//					_ship.RotationSpeed = keepRotationSpeed + _ship.ShiftedRotationExtraSpeed;
//					if(LeftShiftingInput != null){
//						LeftShiftingInput.Invoke(InputState.On, _ship);
//					}
//					StartCoroutine(ShiftLeftLinear(.5f));
//				}
//				if(Input.GetKeyUp(KeyCode.A)){
//					if(isKeptRightShifting)
//						return false;
//					shiftingState = ShiftingState.ReleaseLeft;
//					isKeptLeftShifting = false;
//					_ship.RotationSpeed = keepRotationSpeed;
//					if(LeftShiftingInput != null){
//						LeftShiftingInput.Invoke(InputState.Off, _ship);
//					}
//					StartCoroutine(ShiftToNormalPositionLinear(.5f));
//				}
//				return false;
//			}));
//
//			StartCoroutine (new WaitWhile (() => {
//				if(Input.GetKey(KeyCode.D)){
//					if(shiftingState == ShiftingState.Right || isKeptLeftShifting)
//						return false;
//					shiftingState = ShiftingState.Right;
//					isKeptRightShifting = true;
//					_ship.RotationSpeed = keepRotationSpeed + _ship.ShiftedRotationExtraSpeed;
//					if(RightShiftingInput != null){
//						RightShiftingInput.Invoke(InputState.On, _ship);
//					}
//					StartCoroutine(ShiftRightLinear(.5f));
//				}
//				if(Input.GetKeyUp(KeyCode.D)){
//					if(isKeptLeftShifting)
//						return false;
//					shiftingState = ShiftingState.ReleaseRight;
//					isKeptRightShifting = false;
//					_ship.RotationSpeed = keepRotationSpeed;
//					if(RightShiftingInput != null){
//						RightShiftingInput.Invoke(InputState.Off, _ship);
//					}
//					StartCoroutine(ShiftToNormalPositionLinear(.5f));
//				}
//				return false;
//			}));



//			// on left turning with state is on
//			StartCoroutine (new InputUntil (Input.GetKeyDown (KeyCode.A), () => {
////				if(shiftingState == ShiftingState.Right)
////					return;
//				shiftingState = ShiftingState.Left;
//				_ship.RotationSpeed = keepRotationSpeed + _ship.ShiftedRotationExtraSpeed;
//				if(LeftShiftingInput != null)
//					LeftShiftingInput.Invoke(InputState.On, _ship);
//			}));
//			// on left turning with state is off
//			StartCoroutine (new InputUntil (Input.GetKeyUp (KeyCode.A), () => {
//				shiftingState = ShiftingState.ReleaseLeft;
//				_ship.RotationSpeed = keepRotationSpeed;
//				if(LeftShiftingInput != null)
//					LeftShiftingInput.Invoke(InputState.Off, _ship);
//			}));
//			// on right turning with state is on
//			StartCoroutine (new InputUntil (Input.GetKeyDown (KeyCode.D), () => {
////				if(shiftingState == ShiftingState.Left)
////					return;
//				shiftingState = ShiftingState.Right;
//				_ship.RotationSpeed = keepRotationSpeed + _ship.ShiftedRotationExtraSpeed;
//				if(RightShiftingInput != null)
//					RightShiftingInput.Invoke(InputState.On, _ship);
//			}));
//			// on right turning with state is off
//			StartCoroutine (new InputUntil (Input.GetKeyUp (KeyCode.D), () => {
//				shiftingState = ShiftingState.ReleaseRight;
//				_ship.RotationSpeed = keepRotationSpeed;
//				if(RightShiftingInput != null)
//					RightShiftingInput.Invoke(InputState.Off, _ship);
//			}));
		}

		public override void Thrust() {
			var velocity = Utility.CalculateVelocity(_rigidbody.rotation, _ship.AmbientSpeed);
			_rigidbody.velocity = velocity;
		}

		public override void Yaw(Vector2 position) {
			var yaw = Utility.CalculateYaw (position, _ship.RotationSpeed);
			_rigidbody.rotation *= yaw;
		}

		public override void Pitch(Vector2 position) {
			var pitch = Utility.CalculatePitch (position, _ship.RotationSpeed);
			_rigidbody.rotation *= pitch;
		}

		public override void Roll() {
			Roll (rollAngle);
		}

		public override void Roll(float angle) {
			var roll = Utility.CalculateRoll (angle);
			_rigidbody.rotation *= roll;
		}

		public void Accelerate(float delta) {
            var d = Mathf.Max(_ship.AmbientSpeed, keepAmbientSpeed);
			var deltaIncrement = (_ship.AmbientMaxSpeed - d) * delta;
            _ship.AmbientSpeed = d + deltaIncrement;
			keepAmbientMaxSpeed = _ship.AmbientSpeed;
		}

		public IEnumerator AccelerateLinear (float timer)
		{
			var percent = .0f;
			while (percent <= 1 && speedControllerState == SpeedControllerState.Accelerating) {
				percent += Time.deltaTime * timer;
				Accelerate (percent);
                yield return new WaitForFixedUpdate();
			}
			yield return null;
		}

		public void Break(float delta) {
            var d = Mathf.Max(_ship.AmbientSpeed, keepAmbientSpeed);
			var deltaDecrement = (d - _ship.AmbientMinSpeed) * delta;
			_ship.AmbientSpeed = d - deltaDecrement;
			keepAmbientMinSpeed = _ship.AmbientSpeed;
		}

		public IEnumerator BreakLinear (float timer)
		{
			var percent = .0f;
			while (percent <= 1 && speedControllerState == SpeedControllerState.Breaking) {
				percent += Time.deltaTime * timer;
				Break (percent);
                yield return new WaitForFixedUpdate();
			}
			yield return null;
		}

		public void ShiftToNormalSpeed (float delta)
		{
			switch (speedControllerState) {
                case SpeedControllerState.ReleaseAccelerating:
                    var maxSpeed = Mathf.Min(keepAmbientMaxSpeed, _ship.AmbientMaxSpeed);
                    var deltaIncrement = (maxSpeed - keepAmbientSpeed) * delta;
                    _ship.AmbientSpeed = _ship.AmbientSpeed > keepAmbientSpeed ? maxSpeed - deltaIncrement : keepAmbientSpeed;
					break;
                case SpeedControllerState.ReleaseBreaking:
					var minSpeed = Mathf.Max (keepAmbientMinSpeed, _ship.AmbientMinSpeed);
			    	var deltaDecrement = (keepAmbientSpeed - minSpeed) * delta;
					_ship.AmbientSpeed = _ship.AmbientSpeed < keepAmbientSpeed ? minSpeed + deltaDecrement : keepAmbientSpeed;
					break;
				default:
					break;
			}

			//if(_ship.AmbientSpeed == keepAmbientSpeed)
				//speedControllerState = SpeedControllerState.Normal;
		}

		public IEnumerator ShiftToNormalSpeedLinear(float timer){
			var percent = .0f;
            while (percent <= 1f) {
				percent += Time.deltaTime * timer;
				switch (speedControllerState) {
                    case SpeedControllerState.ReleaseAccelerating:
					ShiftToNormalSpeed (percent);
                        yield return null;
					break;
                    case SpeedControllerState.ReleaseBreaking:
					ShiftToNormalSpeed (percent);
                        yield return null;
					break;
				default:
					percent = 2f;
					break;
				}
			}
            //speedControllerState = SpeedControllerState.Normal;
			yield return null;
		}

		public IEnumerator BalanceRollingLinear(float timer){
			var zeroAngle = Quaternion.identity;
			zeroAngle.eulerAngles = new Vector3 (_rigidbody.rotation.eulerAngles.x, _rigidbody.rotation.eulerAngles.y, .0f);
			var currentAngle = _transform.rotation;

			foreach (Quaternion currentRotation in Utility.BalanceRollingLinear (currentAngle, zeroAngle, timer)) {
				_rigidbody.rotation = currentRotation;
				yield return new WaitForFixedUpdate ();
			}
			yield return null;
		}

		public IEnumerator ShiftLeftLinear(float timer){
			var percent = .0f;
			var wantedPosition = shipAnchorPosition + Vector3.left * _ship.ShiftDistance;
			var wantedRotation = shipAnchorRotation * Quaternion.AngleAxis (_ship.ShiftAngleLeft, -Vector3.up);
			while (percent <= 1f && shiftingState == ShiftingState.Left) {
                percent += Time.fixedDeltaTime * timer;
                _shipModel.localPosition = Vector3.Lerp (_shipModel.localPosition, wantedPosition, percent);
                _shipModel.localRotation = Quaternion.Lerp (_shipModel.localRotation, wantedRotation, percent);
                yield return null;
			}
			yield return null;
		}

		public IEnumerator ShiftRightLinear(float timer){
			var percent = .0f;
			var wantedPosition = shipAnchorPosition + Vector3.right * _ship.ShiftDistance;
			var wantedRotation = shipAnchorRotation * Quaternion.AngleAxis (_ship.ShiftAngleRight, -Vector3.up);
			while (percent <= 1f && shiftingState == ShiftingState.Right) {
                percent += Time.fixedDeltaTime * timer;
                _shipModel.localPosition = Vector3.Lerp (_shipModel.localPosition, wantedPosition, percent);
                _shipModel.localRotation = Quaternion.Lerp (_shipModel.localRotation, wantedRotation, percent);
                yield return null;
			}
			yield return null;
		}

		public IEnumerator ShiftToNormalPositionLinear(float timer){
			var percent = .0f;
			while (percent <= 1f) {
				percent += Time.deltaTime * timer;
				switch (shiftingState) {
				case ShiftingState.ReleaseLeft:
                        _shipModel.localPosition = Vector3.Lerp (_shipModel.localPosition, shipAnchorPosition, percent);
                        _shipModel.localRotation = Quaternion.Lerp (_shipModel.localRotation, shipAnchorRotation, percent);
					yield return new WaitForEndOfFrame ();
					break;
				case ShiftingState.ReleaseRight:
                        _shipModel.localPosition = Vector3.Lerp (_shipModel.localPosition, shipAnchorPosition, percent);
                        _shipModel.localRotation = Quaternion.Lerp (_shipModel.localRotation, shipAnchorRotation, percent);
					yield return new WaitForEndOfFrame ();
					break;
				default:
					percent = 2f;
					break;
				}
			}
			//shiftingState = ShiftingState.Normal;
			yield return null;
		}
	}
}