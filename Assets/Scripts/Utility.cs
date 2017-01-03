using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Saitama;

public class Utility
{
	public static bool IsInRange(float value, float min, float max){
		return value >= min && value <= max;
	}

	public static bool IsFrontOfCamera(Vector3 position, Camera camera){
		var positionScrPt = camera.WorldToScreenPoint(position);
		return positionScrPt.z > 0;
	}

	public static Vector3 ScreenToWorldPoint(Camera camera, float zIndex = .1f){
		var mousePosition = camera.ScreenToWorldPoint (new Vector3(Input.mousePosition.x, Input.mousePosition.y, zIndex));
		var realX = mousePosition.x * (Screen.width < Screen.height ? ((float)Screen.height / (float)Screen.width) : 1.0f);
		var realY = mousePosition.y * (Screen.width < Screen.height ? 1.0f : ((float)Screen.width / (float)Screen.height));

		return new Vector3 (realX, realY, mousePosition.z);
	}

	public static T GetShipComponent<T>(GameObject gameObject) where T : ICommonObject{
		var shipController = gameObject.GetComponent<ShipController> ();
		return shipController.ship.GetComponent<T> ();
	}

	public static bool HasShipComponent(GameObject gameObject){
		return gameObject.GetComponent<ShipController> () != null;
	}

	public static Quaternion RotatePrincipalAxes(Vector2 mousePosition, float rotationSpeed, float deltaTime){
		var yaw = mousePosition.x * deltaTime * rotationSpeed;
		var pitch = mousePosition.y * deltaTime * rotationSpeed;
		var rot = Quaternion.identity;
		rot.eulerAngles = new Vector3 (-pitch, yaw, .0f);
		return rot;
	}

	public static Quaternion CalculateYaw(Vector2 mousePosition, float rotationSpeed, float deltaTime){
		var yaw = mousePosition.x * deltaTime * rotationSpeed;
		var rot = Quaternion.identity;
		rot.eulerAngles = new Vector3 (.0f, yaw, .0f);
		return rot;
	}

	public static Quaternion CalculatePitch(Vector2 mousePosition, float rotationSpeed, float deltaTime){
		var pitch = mousePosition.y * deltaTime * rotationSpeed;
		var rot = Quaternion.identity;
		rot.eulerAngles = new Vector3 (-pitch, .0f, .0f);
		return rot;
	}

	public static Vector3 CalculateVelocity(Quaternion rotation, float ambientSpeed, float deltaTime){
		var forward = Vector3.forward;
		forward = rotation * forward;
		var velocity = forward * deltaTime * ambientSpeed;
		return velocity;
	}

	public static Quaternion CalculateRoll(float angle){
		var angleAroundZ = Quaternion.identity;
		angleAroundZ.eulerAngles = new Vector3 (.0f, .0f, angle);
		return angleAroundZ;
	}

	public static Quaternion BalanceRolling(Quaternion currentAngle, Quaternion zeroAngle, float timer = .0f){
		return Quaternion.Lerp (currentAngle, zeroAngle, timer);
	}

	public static IEnumerable<Quaternion> BalanceRollingLinear(Quaternion currentAngle, Quaternion zeroAngle, float timer){
		var percent = .0f;
		while (percent <= 1f) {
			percent += Time.fixedDeltaTime * timer;
			yield return BalanceRolling (currentAngle, zeroAngle, percent);
		}
		yield return zeroAngle;
	}

	public static bool CheckCollision(Component component, float maxDistance, int collisionMask){
		var transform = component.transform;
		var ray = new Ray (transform.position, transform.forward);
		return Physics.Raycast (ray, maxDistance, collisionMask, QueryTriggerInteraction.Collide);
	}

	public static void CheckCollision(Component component, float maxDistance, int collisionMask, Action<RaycastHit> action){
		var transform = component.transform;
		var ray = new Ray (transform.position, transform.forward);
		RaycastHit hit;

		if (Physics.Raycast (ray, out hit, maxDistance, collisionMask, QueryTriggerInteraction.Collide)) {
			action.Invoke (hit);
		}
	}
}

