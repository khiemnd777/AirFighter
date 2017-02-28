using System;
using System.Collections;
using Saitama.Ships;

namespace Saitama.FlyableControls.ShipControls
{
	public interface IShipControl: IFlyableControl
	{
		void Accelerate(float delta);
		IEnumerator AccelerateLinear(float timer);
		void Break(float delta);
		IEnumerator BreakLinear(float timer);
		void ShiftToNormalSpeed (float delta);
		IEnumerator ShiftToNormalSpeedLinear (float timer);
		IEnumerator BalanceRollingLinear(float timer);
		IEnumerator ShiftLeftLinear (float timer);
		IEnumerator ShiftRightLinear (float timer);
		IEnumerator ShiftToNormalPositionLinear (float timer);
	}
}