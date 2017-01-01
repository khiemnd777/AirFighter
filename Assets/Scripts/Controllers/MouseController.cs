using UnityEngine;
using System.Collections;

public class MouseController : MonoBehaviour {
	public RectTransform cursor;
	public RectTransform crosshair;
	public float cursorRotationSpeed = 100f;

	void Start () {
		Cursor.visible = false;
	}

	void Update () {
		cursor.position = new Vector3(Input.mousePosition.x, Input.mousePosition.y, .0f);
		cursor.Rotate (new Vector3 (.0f, .0f, cursorRotationSpeed * Time.deltaTime));
	}
}
	