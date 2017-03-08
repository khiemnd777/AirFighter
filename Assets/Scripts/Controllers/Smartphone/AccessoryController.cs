using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Saitama;

public class AccessoryController : MonoController, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    private Vector2 _inputVector;
    private Vector2 _anchorVector;
    private RectTransform _joystickController;
    private RectTransform _smartphoneController;
    private float _timeHoldDown;
    private bool _isSwiped;

    public float ratio = 2.0f;
    public float sensitive = .5f;
    public bool isSwipingUp;
    public bool isSwipingDown;
    public bool isSwipingLeft;
    public bool isSwipingRight;

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

    public float TimeHoldDown{
        get{
            return _timeHoldDown;
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
        _joystickController.localPosition = new Vector3(posX, .0f, .0f);
    }

    void TwoPunch(){
//        if (Input.GetMouseButton(0))
//        {
//            _timeHoldDown += Time.deltaTime;
//        }
//        if (Input.GetMouseButtonUp(0))
//        {
//            _timeHoldDown = .0f;
//        }
        if (Input.touchCount > 0)
        {
            foreach (var t in Input.touches)
            {
                var p = t.position;
                if (p.x >= _joystickController.position.x - _joystickController.sizeDelta.x / 2)
                {
                    if (t.phase == TouchPhase.Stationary && !_isSwiped)
                    {
                        _timeHoldDown += Time.deltaTime;
                    }
                }
            }
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.dragging)
        {
            Vector2 pos;
            if (RectTransformUtility.ScreenPointToLocalPointInRectangle(_joystickController
                , eventData.position
                , eventData.pressEventCamera
                , out pos))
            {
                _inputVector = GetSwipedPosition(pos);
                if (_inputVector.y > 0.9f && _inputVector.x > -.5f && _inputVector.x < .5f)
                {
                    isSwipingUp = true;
                    isSwipingDown = false;
                }
                if (_inputVector.y < -0.9f && _inputVector.x > -.5f && _inputVector.x < .5f)
                {
                    isSwipingUp = false;
                    isSwipingDown = true;
                }
                if (_inputVector.x > 0.9f && _inputVector.y > -.5f && _inputVector.y < .5f)
                {
                    isSwipingRight = true;
                    isSwipingLeft = false;
                }
                if (_inputVector.x < -0.9f && _inputVector.y > -.5f && _inputVector.y < .5f)
                {
                    isSwipingRight = false;
                    isSwipingLeft = true;
                }
                if (_inputVector.magnitude >= 0.2f)
                {
                    _isSwiped = true;
                    _timeHoldDown = .0f;
                }
            }
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        _anchorVector = Vector2.zero;
        _inputVector = Vector2.zero;
        isSwipingUp = false;
        isSwipingDown = false;
        isSwipingLeft = false;
        isSwipingRight = false;
//        StartCoroutine(OnLoadingPercent((percent) => {
//            _inputVector = Vector2.Lerp(_inputVector, Vector2.zero, percent);
//        }, () => _inputVector = Vector2.zero));
    }

    public void OnPointerDown(PointerEventData eventData)
    {
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
        _isSwiped = false;
        _timeHoldDown = .0f;
    }

    private Vector2 GetSwipedPosition(Vector2 pos){
        var p = GetRealPosition(pos);
        var iv = (p - _anchorVector) / sensitive;
        iv = iv.magnitude > 1.0f ? iv.normalized : iv;
        return iv;
    }

    private Vector2 GetRealPosition(Vector2 position){
        return new Vector2 (position.x / _joystickController.sizeDelta.x, position.y / _joystickController.sizeDelta.y);
    }
}
