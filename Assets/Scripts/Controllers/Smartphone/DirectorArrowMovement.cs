using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Saitama;

public class DirectorArrowMovement : MonoController
{
    private JoystickController _jc;
    private RectTransform _crosshair;
    private Image _image;

    void Setup(){
        _image = GetComponent<Image>();
        _image.enabled = false;
    }

    void Begin(){
        _jc = GetMonoComponent<JoystickController>("SmartphoneController/JoystickController");
        _crosshair = GetMonoComponent<RectTransform>("Canvas/Crosshair");
    }

    void TwoPunch(){
        transform.localPosition = new Vector3(_jc.Horizontal * 70, _jc.Vertical * 70, .0f);
        transform.localRotation = _jc.Angle;
        _image.enabled = !RectTransformUtility.RectangleContainsScreenPoint(_crosshair, transform.position);
    }
}
