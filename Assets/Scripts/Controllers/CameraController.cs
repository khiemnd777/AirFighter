using UnityEngine;
using System.Collections;
using Saitama;

public class CameraController : MonoController {
	public Ray ray;
	public Transform target;
	public float cameraDistance = 9.5f;
	public float cameraHeight = 2.0f;
    public float cameraLookAt = 2.0f;
    public float damping = .2f;
	public float rotationDamping = .04f;
	public float rotationSpeed = Constants.CameraRotationSpeed;

	Vector3 mousePosition;
	Vector3 wantedPosition;
	Quaternion wantedRotation;

	Rigidbody rigid;
    JoystickController _joystickController;

	void Begin(){
		rigid = GetComponent<Rigidbody> ();
        _joystickController = GetMonoComponent<JoystickController>("SmartphoneController/JoystickController");
	}

    void OnePunch()
    {
        wantedPosition = target.TransformPoint (0f, cameraHeight, -cameraDistance);
        transform.position = Vector3.Lerp (transform.position, wantedPosition, damping);

        wantedRotation = Quaternion.LookRotation (target.position - transform.position, target.up);
        transform.rotation = Quaternion.Lerp (transform.rotation, wantedRotation, rotationDamping);

        if (_joystickController.isDragging)
        {
            var touchPosition = new Vector2(_joystickController.Horizontal, _joystickController.Vertical);
            var principalRotation = Utility.RotatePrincipalAxes (touchPosition, rotationSpeed);
            rigid.rotation *= principalRotation;
        }
    }
}
