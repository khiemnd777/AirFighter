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
                .Where(target => HasShipComponent(target))
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

        public static bool HasShipComponent(this GameObject gameObject){
            return gameObject.GetComponent<ShipController> () != null;
        }

        public static bool HasShipComponent(this MonoBehaviour mono){
            return mono.gameObject.GetComponent<ShipController> () != null;
        }

        public static Ship[] ExtractShipComponent(this GameObject[] gameObjects){
            var ships = gameObjects
                .Where(target => HasShipComponent(target))
                .Select(target => target.GetComponent<ShipController>())
                .Select(target => target.ship);
            return ships.ToArray();
        }
    }
}

