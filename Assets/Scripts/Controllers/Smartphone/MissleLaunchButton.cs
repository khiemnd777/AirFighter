using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Saitama;

public class MissleLaunchButton : MonoController, IPointerDownHandler, IPointerUpHandler
{
    private RectTransform _smartphoneController;
    private RectTransform _btn;
    
    public bool isTriggered;

    void Setup(){
        _smartphoneController = GetMonoComponent<RectTransform>("SmartphoneController");
        _btn = GetComponent<RectTransform>();
        var posX = _smartphoneController.rect.width / 2f - _btn.rect.width / 2f - 25f;
        var posY = _smartphoneController.rect.height / 2f - _btn.rect.height / 2f - 25f;
        _btn.localPosition = new Vector3(posX, -posY, 0f);
    }

    public virtual void OnPointerDown(PointerEventData eventData)
    {
        isTriggered = true;
        StartCoroutine(DisableTrigger());
    }

    IEnumerator DisableTrigger(){
        var waitTime = Time.time + 0.5f;
        while (Time.time <= waitTime && isTriggered)
        {
            yield return null;
        }
        isTriggered = false;
        yield return null;
    }

    public virtual void OnPointerUp(PointerEventData eventData)
    {
        isTriggered = false;
    }
}