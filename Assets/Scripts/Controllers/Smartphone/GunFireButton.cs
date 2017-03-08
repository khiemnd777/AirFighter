using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Saitama;

public class GunFireButton : MonoController, IPointerDownHandler, IPointerUpHandler
{
    private RectTransform _smartphoneController;
    private RectTransform _btn;
    
    public bool isTriggered;

    void Setup(){
        _smartphoneController = GetMonoComponent<RectTransform>("SmartphoneController");
        _btn = GetComponent<RectTransform>();
        var posX = _smartphoneController.rect.width / 2f - _btn.rect.width / 2f - 135f;
        var posY = _smartphoneController.rect.height / 2f - _btn.rect.height / 2f - 25f;
        _btn.localPosition = new Vector3(posX, -posY, 0f);
    }

    public virtual void OnPointerDown(PointerEventData eventData)
    {
        isTriggered = true;
    }

    public virtual void OnPointerUp(PointerEventData eventData)
    {
        isTriggered = false;
    }
}