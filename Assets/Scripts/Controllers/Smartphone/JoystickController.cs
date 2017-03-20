using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Saitama;

public class JoystickController : MonoController, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    private Vector2 _inputVector;
    private Vector2 _anchorVector;
    private Quaternion _angle;
    private RectTransform _joystickController;
    private RectTransform _smartphoneController;

    public float ratio = 2.0f;
    public float sensitive = .5f;
    public bool isDragging;
    public bool isPressUp;
    public bool isPressDown;

    public float Horizontal
    {
        get
        {
            return _inputVector.x;
        }
    }

    public float Vertical
    {
        get
        {
            return _inputVector.y;
        }
    }

    public Quaternion Angle 
    {
        get
        {
            return _angle;
        }
    }

    void Setup(){
        _smartphoneController = GetMonoComponent<RectTransform>("SmartphoneController");
        _joystickController = GetComponent<RectTransform>();
        var width = _smartphoneController.rect.width / ratio;
        var height = _smartphoneController.rect.height;
        _joystickController.sizeDelta = new Vector2(width, height);
        // posX = (w-(w/ratio)/2);
        var posX = (_smartphoneController.rect.width - width) / 2.0f;
        _joystickController.localPosition = new Vector3(-posX, .0f, .0f);
    }

    public void OnDrag(PointerEventData eventData)
    {
        isDragging = true;
        isPressUp = false;
        isPressDown = false;
        if (eventData.dragging)
        {
            Vector2 pos;
            if (RectTransformUtility.ScreenPointToLocalPointInRectangle(_joystickController
                , eventData.position
                , eventData.pressEventCamera
                , out pos))
            {
                pos = GetRealPosition(pos);
                var dir = pos - _anchorVector;
                _inputVector = dir / sensitive;
                _inputVector = _inputVector.magnitude > 1.0f ? _inputVector.normalized : _inputVector;

                _angle = Quaternion.LookRotation(dir, Vector3.back);
                _angle.x = .0f;
                _angle.y = .0f;
            }
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isDragging = false;
        isPressUp = true;
        isPressDown = false;
        _anchorVector = Vector2.zero;

        StartCoroutine(OnLoadingPercent((percent) => {
            _inputVector = Vector2.Lerp(_inputVector, Vector2.zero, percent);
        }, () => _inputVector = Vector2.zero, () => !isDragging, .5f));
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        isDragging = false;
        isPressUp = false;
        isPressDown = true;
        Vector2 pos;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(_joystickController
            , eventData.position
            , eventData.pressEventCamera
            , out pos))
        {
            pos = GetRealPosition(pos);
            _anchorVector = pos;
            _inputVector = Vector2.zero;
        }
    }

    private Vector2 GetRealPosition(Vector2 position){
        return new Vector2 (position.x / _joystickController.sizeDelta.x, position.y / _joystickController.sizeDelta.y);
    }
}
