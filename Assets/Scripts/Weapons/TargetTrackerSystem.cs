using UnityEngine;
using System;
using System.Collections;

namespace Saitama.Weapons
{
    public class TargetTrackerSystem : Updater
    {
        RectTransform _canvasUI;

        public TargetTrackerSystem(MonoController mono)
            : base (mono)
        {
            
        }

        public override void Init()
        {
            _canvasUI = GetMonoComponent<RectTransform>("Canvas");
        }

        public void Track(Missle missle, GameObject target){
            StartCoroutine(Tracking(missle, target));
        }

        IEnumerator Tracking(Missle missle, GameObject target){
            var _targetTrackerUIResource = GetMonoResource<RectTransform>("Prefabs/Target tracker");
            var _targetTrackerUI = Instantiate(_targetTrackerUIResource) as RectTransform;
            _targetTrackerUI.gameObject.SetActive(false);
            _targetTrackerUI.SetParent(_canvasUI.transform);
            while (missle != null && target != null)
            {
                var targetScrPt = Camera.main.WorldToScreenPoint(target.transform.position);
                _targetTrackerUI.transform.position = new Vector3 (targetScrPt.x, targetScrPt.y, .0f);
                _targetTrackerUI.gameObject.SetActive (targetScrPt.z > 0);
                yield return new WaitForFixedUpdate();
            }
            DestroyImmediate(_targetTrackerUI.gameObject);
            yield return null;
        }
    }
}

