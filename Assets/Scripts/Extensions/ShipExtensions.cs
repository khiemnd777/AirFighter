using UnityEngine;
using System;
using System.Linq;
using Saitama.Ships;

namespace Saitama.Extensions
{
    public static class ShipExtensions
    {
        public static Ship ToShip(this GameObject gameObject){
            var shipController = gameObject.GetComponent<ShipController> ();
            return shipController.ship;
        }

        public static Ship ToShip (this MonoBehaviour mono){
            return ToShip(mono.gameObject);
        }

        public static T GetShipComponent<T>(this GameObject gameObject) where T : ICommonObject{
            var shipController = gameObject.GetComponent<ShipController> ();
            return shipController.ship.GetComponent<T> ();
        }

        public static T[] GetShipComponents<T>(this GameObject[] gameObjects) where T : ICommonObject{
            var ts = gameObjects
                .Where(target => IsShip(target))
                .Select(target => target.GetComponent<ShipController>())
                .Select(target => target.ship)
                .Select(target => target.GetComponent<T>());
            return ts.ToArray();
        }

        public static T GetShipComponent<T>(this MonoBehaviour mono) where T : ICommonObject{
            return GetShipComponent<T>(mono.gameObject);
        }

        public static T[] GetShipComponents<T>(this MonoBehaviour[] monos) where T : ICommonObject{
            return GetShipComponents<T>(monos
                .Select(mono => mono.gameObject)
                .ToArray());
        }

        public static bool IsShip(this GameObject gameObject){
            return gameObject.GetComponent<ShipController> () != null;
        }

        public static bool IsShip(this MonoBehaviour mono){
            return IsShip(mono.gameObject);
        }

        public static bool IsBoss(this GameObject gameObject){
            return gameObject.GetComponent<BossController> () != null;
        }

        public static bool IsBoss(this MonoBehaviour mono){
            return IsBoss(mono.gameObject);
        }

        public static Ship[] ExtractShipComponent(this GameObject[] gameObjects){
            var ships = gameObjects
                .Where(target => IsShip(target))
                .Select(target => target.GetComponent<ShipController>())
                .Select(target => target.ship);
            return ships.ToArray();
        }

        public static int GetScore(this GameObject gameObject){
            var scoreManager = GetShipComponent<ScoreManager>(gameObject);
            return scoreManager.Score;
        }

        public static int GetScore(this MonoBehaviour mono){
            return GetScore(mono.gameObject);
        }

        public static int GetOriginalScore(this GameObject gameObject){
            var scoreManager = GetShipComponent<ScoreManager>(gameObject);
            return scoreManager.OriginalScore;
        }

        public static int GetOriginalScore(this MonoBehaviour mono){
            return GetOriginalScore(mono.gameObject);
        }
    }
}

