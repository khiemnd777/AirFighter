using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Saitama;

public class InfiniteStarfield : MonoController 
{
    public int starsMax = 100;
    public float starSize = 1;
    public float starDistance = 10;
    public float starClipDistance = 1;

    private Transform _anchor;
    private ParticleSystem.Particle[] _stars;
    private float _starDistanceSqr;
    private float _starClipDistanceSqr;
    private ParticleSystem _ps;
       
	void Begin(){
        _anchor = transform;
        _starDistanceSqr = starDistance * starDistance;
        _starClipDistanceSqr = starClipDistance * starClipDistance;
        _ps = GetComponent<ParticleSystem>();
	}	

    void TwoPunch(){
        if (_stars == null)
            CreateStars();
        
        for (var i = 0; i < starsMax; i++)
        {
            if ((_stars[i].position - _anchor.position).sqrMagnitude > _starDistanceSqr)
            {
                _stars[i].position = Random.insideUnitSphere.normalized * starDistance + _anchor.position;
            }
            if ((_stars[i].position - _anchor.position).sqrMagnitude <= _starClipDistanceSqr)
            {   
                var percent = (_stars[i].position - _anchor.position).sqrMagnitude / _starClipDistanceSqr;
                _stars[i].startColor = new Color(1, 1, 1, percent);
                _stars[i].startSize = percent * starSize;
            }
        }

        _ps.SetParticles(_stars, _stars.Length);
    }

    private void CreateStars(){
        _stars = new ParticleSystem.Particle[starsMax];
        for (var i = 0; i < starsMax; i++)
        {
            _stars[i].position = Random.insideUnitSphere * starDistance + _anchor.position;
            _stars[i].startColor = new Color32(1, 1, 1, 1);
            _stars[i].startSize = starSize;
        }
    }
}
