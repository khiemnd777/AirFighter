namespace Saitama
{
	public enum SpeedControllerState{
		Accelerating,
		ReleaseAccelerating,
		Normal,
		Breaking,
		ReleaseBreaking
	}

	public enum ShiftingState{
		Left, ReleaseLeft, Normal, Right, ReleaseRight
	}

	public enum InputState{
		On, Off, HoldOn
	}
}

