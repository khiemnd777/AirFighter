using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
	public Ray ray;
	public Transform target;
	public float cameraDistance = 9.5f;
	public float cameraHeight = 2.0f;
    public float cameraLookAt = 2.0f;
    public float damping = 2.5f;
	public float rotationDamping = 1.0f;
	public float rotationSpeed = Constants.CameraRotationSpeed;
	public Camera screenCamera;

	Vector3 mousePosition;
	Vector3 wantedPosition;
	Quaternion wantedRotation;

	Rigidbody rigid;

	void Start(){
		rigid = GetComponent<Rigidbody> ();
	}

	void FixedUpdate(){
		SmoothFollow();
	}  

	void SmoothFollow(){
		wantedPosition = target.TransformPoint (0f, cameraHeight, -cameraDistance);
		transform.position = Vector3.Lerp (transform.position, wantedPosition, Time.fixedDeltaTime * damping);

		wantedRotation = Quaternion.LookRotation (target.position - transform.position, target.up);
		transform.rotation = Quaternion.Lerp (transform.rotation, wantedRotation, Time.fixedDeltaTime * rotationDamping);

		mousePosition = Utility.ScreenToWorldPoint (screenCamera);
		var principalRotation = Utility.RotatePrincipalAxes (mousePosition, rotationSpeed, Time.fixedDeltaTime);
		rigid.rotation *= principalRotation;
		//transform.LookAt (target.position + new Vector3(.0f, cameraLookAt, .0f), target.up);
	}
}
