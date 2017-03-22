using UnityEngine;
using System.Collections;
using Saitama;
using Saitama.Ships;

public class CameraController : MonoController {
	public Ray ray;

    [System.NonSerialized]
	public Ship target;

	public float cameraDistance = 9.5f;
	public float cameraHeight = 2.0f;
    public float cameraLookAt = 2.0f;
    public float damping = .2f;
	public float rotationDamping = .04f;
	public float rotationSpeed = Constants.CameraRotationSpeed;

	Vector3 mousePosition;
	Vector3 wantedPosition;
	Quaternion wantedRotation;

	Rigidbody _rigid;
    JoystickController _joystickController;
    Transform _cachedTranform;

	void Begin(){
        _cachedTranform = transform;
		_rigid = GetComponent<Rigidbody> ();
        _joystickController = GetMonoComponent<JoystickController>("SmartphoneController/JoystickController");
	}

    void OnePunch()
    {
        var touchPosition = new Vector2(_joystickController.Horizontal, _joystickController.Vertical);

        var yaw = Utility.CalculateYaw (touchPosition, target.RotationSpeed);
        _rigid.rotation *= yaw;

        var pitch = Utility.CalculatePitch (touchPosition, target.RotationSpeed);
        _rigid.rotation *= pitch;

        var velocity = Utility.CalculateVelocity(_rigid.rotation, target.AmbientSpeed);
        _rigid.velocity = velocity;

        wantedPosition = target.Transform.TransformPoint (0f, cameraHeight, -cameraDistance);
        _cachedTranform.position = Vector3.Lerp(_cachedTranform.position, wantedPosition, damping);
    }
}
