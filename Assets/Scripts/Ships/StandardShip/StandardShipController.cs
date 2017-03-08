using UnityEngine;
using System;
using Saitama.Ships;

namespace Saitama.Ships
{
    public class StandardShipController : MonoController
    {
        public static string Prefab = "Prefabs/Flight";

        [Header("Ambient speed")]
        public float ambientSpeed = 90.0f;
        public float ambientMaxSpeed = 250.0f;
        public float ambientMinSpeed = 45.0f;
        [Header("Rotation")]
        public float rotationSpeed = Constants.RotationSpeed;
        public float shiftedRotationExtraSpeed = 1.5f;
        public float rollSpeed = 25.0f;
        public float smoothZToZero = 100f;
        [Header("Shifting")]
        public float shiftDistance = 10f;
        public float shiftAngleLeft = 70f;
        public float shiftAngleRight = 290f;
        [Header("Gun controller")]
        public float bulletSpeed = 3000f;
        public float bulletLifeTime = 3f;
        public float bulletTimeBetweenExecute = 100f;
        [Header("Missle controller")]
        public float missleSpeed = 15000f;
        public float missleLifeTime = 10f;
        public float missleTimeBetweenExecute = 1000f;

        void Begin(){
            InstantiateCommonObject<StandardShip>(ss =>
                {
                    ss.AmbientSpeed = ambientSpeed;
                    ss.AmbientMaxSpeed = ambientMaxSpeed;
                    ss.AmbientMinSpeed = ambientMinSpeed;
                    ss.RotationSpeed = rotationSpeed;
                    ss.RollSpeed = rollSpeed;
                    ss.ShiftedRotationExtraSpeed = shiftedRotationExtraSpeed;
                    ss.ShiftDistance = shiftDistance;
                    ss.ShiftAngleLeft = shiftAngleLeft;
                    ss.ShiftAngleRight = shiftAngleRight;
                });
            // assign specific target for main camera
            GetMonoComponent<CameraController>("Main Camera").target = transform;
        }
    }
}

