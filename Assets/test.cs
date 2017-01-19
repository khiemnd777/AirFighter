using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {
	// Update is called once per frame
	void Update () {
        transform.Translate(Vector3.forward * Time.fixedDeltaTime * 100);
	}
}
