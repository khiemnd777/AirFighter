using UnityEngine;
using System;
using System.Collections;
using Saitama.Ships;
using Saitama.FlyableObjects;

namespace Saitama.FlyableControls
{
	public interface IFlyableControl: ICommonObject
	{
		void Thrust();
		void Yaw(Vector2 mousePosition);
		void Pitch(Vector2 mousePosition);
		void Roll();
		void Roll(float angle);

		void HandleInputEvents();
	}
}

