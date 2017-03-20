#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Saitama.Ships.Ship
struct Ship_t4047683708;
// UnityEngine.Transform
struct Transform_t3275118058;
// JoystickController
struct JoystickController_t3035899094;
// AccessoryController
struct AccessoryController_t2234104886;
// System.Action
struct Action_t3226471752;
// System.Action`2<Saitama.InputState,Saitama.Ships.Ship>
struct Action_2_t800392020;
// System.Action`3<Saitama.InputState,Saitama.Ships.Ship,System.Single>
struct Action_3_t2414724281;

#include "AssemblyU2DCSharp_Saitama_FlyableControls_FlyableC3234970564.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_Saitama_SpeedControllerState2221340442.h"
#include "AssemblyU2DCSharp_Saitama_ShiftingState625855831.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.FlyableControls.ShipControls.ShipControl
struct  ShipControl_t2738676427  : public FlyableControl_t3234970564
{
public:
	// UnityEngine.Rigidbody Saitama.FlyableControls.ShipControls.ShipControl::_rigidbody
	Rigidbody_t4233889191 * ____rigidbody_14;
	// Saitama.Ships.Ship Saitama.FlyableControls.ShipControls.ShipControl::_ship
	Ship_t4047683708 * ____ship_15;
	// UnityEngine.Transform Saitama.FlyableControls.ShipControls.ShipControl::_shipModel
	Transform_t3275118058 * ____shipModel_16;
	// JoystickController Saitama.FlyableControls.ShipControls.ShipControl::_joystickController
	JoystickController_t3035899094 * ____joystickController_17;
	// AccessoryController Saitama.FlyableControls.ShipControls.ShipControl::_accessoryController
	AccessoryController_t2234104886 * ____accessoryController_18;
	// System.Single Saitama.FlyableControls.ShipControls.ShipControl::keepAmbientSpeed
	float ___keepAmbientSpeed_19;
	// System.Single Saitama.FlyableControls.ShipControls.ShipControl::keepAmbientMaxSpeed
	float ___keepAmbientMaxSpeed_20;
	// System.Single Saitama.FlyableControls.ShipControls.ShipControl::keepAmbientMinSpeed
	float ___keepAmbientMinSpeed_21;
	// System.Single Saitama.FlyableControls.ShipControls.ShipControl::keepRotationSpeed
	float ___keepRotationSpeed_22;
	// System.Single Saitama.FlyableControls.ShipControls.ShipControl::smoothZToZero
	float ___smoothZToZero_23;
	// System.Single Saitama.FlyableControls.ShipControls.ShipControl::rollAngle
	float ___rollAngle_24;
	// UnityEngine.Vector3 Saitama.FlyableControls.ShipControls.ShipControl::shipAnchorPosition
	Vector3_t2243707580  ___shipAnchorPosition_25;
	// UnityEngine.Quaternion Saitama.FlyableControls.ShipControls.ShipControl::shipAnchorRotation
	Quaternion_t4030073918  ___shipAnchorRotation_26;
	// Saitama.SpeedControllerState Saitama.FlyableControls.ShipControls.ShipControl::speedControllerState
	int32_t ___speedControllerState_27;
	// Saitama.ShiftingState Saitama.FlyableControls.ShipControls.ShipControl::shiftingState
	int32_t ___shiftingState_28;
	// System.Boolean Saitama.FlyableControls.ShipControls.ShipControl::isKeptLeftShifting
	bool ___isKeptLeftShifting_29;
	// System.Boolean Saitama.FlyableControls.ShipControls.ShipControl::isKeptRightShifting
	bool ___isKeptRightShifting_30;
	// System.Boolean Saitama.FlyableControls.ShipControls.ShipControl::isSwitchToZero
	bool ___isSwitchToZero_31;
	// System.Boolean Saitama.FlyableControls.ShipControls.ShipControl::isAccelerating
	bool ___isAccelerating_32;
	// System.Boolean Saitama.FlyableControls.ShipControls.ShipControl::isAccelrated
	bool ___isAccelrated_33;
	// System.Boolean Saitama.FlyableControls.ShipControls.ShipControl::isBreaking
	bool ___isBreaking_34;
	// System.Boolean Saitama.FlyableControls.ShipControls.ShipControl::isBroke
	bool ___isBroke_35;
	// System.Action Saitama.FlyableControls.ShipControls.ShipControl::BalancedRollingInput
	Action_t3226471752 * ___BalancedRollingInput_36;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> Saitama.FlyableControls.ShipControls.ShipControl::AcceleratingInput
	Action_2_t800392020 * ___AcceleratingInput_37;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> Saitama.FlyableControls.ShipControls.ShipControl::BreakingInput
	Action_2_t800392020 * ___BreakingInput_38;
	// System.Action`3<Saitama.InputState,Saitama.Ships.Ship,System.Single> Saitama.FlyableControls.ShipControls.ShipControl::LeftRollingInput
	Action_3_t2414724281 * ___LeftRollingInput_39;
	// System.Action`3<Saitama.InputState,Saitama.Ships.Ship,System.Single> Saitama.FlyableControls.ShipControls.ShipControl::RightRollingInput
	Action_3_t2414724281 * ___RightRollingInput_40;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> Saitama.FlyableControls.ShipControls.ShipControl::LeftShiftingInput
	Action_2_t800392020 * ___LeftShiftingInput_41;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> Saitama.FlyableControls.ShipControls.ShipControl::RightShiftingInput
	Action_2_t800392020 * ___RightShiftingInput_42;

public:
	inline static int32_t get_offset_of__rigidbody_14() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ____rigidbody_14)); }
	inline Rigidbody_t4233889191 * get__rigidbody_14() const { return ____rigidbody_14; }
	inline Rigidbody_t4233889191 ** get_address_of__rigidbody_14() { return &____rigidbody_14; }
	inline void set__rigidbody_14(Rigidbody_t4233889191 * value)
	{
		____rigidbody_14 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_14, value);
	}

	inline static int32_t get_offset_of__ship_15() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ____ship_15)); }
	inline Ship_t4047683708 * get__ship_15() const { return ____ship_15; }
	inline Ship_t4047683708 ** get_address_of__ship_15() { return &____ship_15; }
	inline void set__ship_15(Ship_t4047683708 * value)
	{
		____ship_15 = value;
		Il2CppCodeGenWriteBarrier(&____ship_15, value);
	}

	inline static int32_t get_offset_of__shipModel_16() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ____shipModel_16)); }
	inline Transform_t3275118058 * get__shipModel_16() const { return ____shipModel_16; }
	inline Transform_t3275118058 ** get_address_of__shipModel_16() { return &____shipModel_16; }
	inline void set__shipModel_16(Transform_t3275118058 * value)
	{
		____shipModel_16 = value;
		Il2CppCodeGenWriteBarrier(&____shipModel_16, value);
	}

	inline static int32_t get_offset_of__joystickController_17() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ____joystickController_17)); }
	inline JoystickController_t3035899094 * get__joystickController_17() const { return ____joystickController_17; }
	inline JoystickController_t3035899094 ** get_address_of__joystickController_17() { return &____joystickController_17; }
	inline void set__joystickController_17(JoystickController_t3035899094 * value)
	{
		____joystickController_17 = value;
		Il2CppCodeGenWriteBarrier(&____joystickController_17, value);
	}

	inline static int32_t get_offset_of__accessoryController_18() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ____accessoryController_18)); }
	inline AccessoryController_t2234104886 * get__accessoryController_18() const { return ____accessoryController_18; }
	inline AccessoryController_t2234104886 ** get_address_of__accessoryController_18() { return &____accessoryController_18; }
	inline void set__accessoryController_18(AccessoryController_t2234104886 * value)
	{
		____accessoryController_18 = value;
		Il2CppCodeGenWriteBarrier(&____accessoryController_18, value);
	}

	inline static int32_t get_offset_of_keepAmbientSpeed_19() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___keepAmbientSpeed_19)); }
	inline float get_keepAmbientSpeed_19() const { return ___keepAmbientSpeed_19; }
	inline float* get_address_of_keepAmbientSpeed_19() { return &___keepAmbientSpeed_19; }
	inline void set_keepAmbientSpeed_19(float value)
	{
		___keepAmbientSpeed_19 = value;
	}

	inline static int32_t get_offset_of_keepAmbientMaxSpeed_20() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___keepAmbientMaxSpeed_20)); }
	inline float get_keepAmbientMaxSpeed_20() const { return ___keepAmbientMaxSpeed_20; }
	inline float* get_address_of_keepAmbientMaxSpeed_20() { return &___keepAmbientMaxSpeed_20; }
	inline void set_keepAmbientMaxSpeed_20(float value)
	{
		___keepAmbientMaxSpeed_20 = value;
	}

	inline static int32_t get_offset_of_keepAmbientMinSpeed_21() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___keepAmbientMinSpeed_21)); }
	inline float get_keepAmbientMinSpeed_21() const { return ___keepAmbientMinSpeed_21; }
	inline float* get_address_of_keepAmbientMinSpeed_21() { return &___keepAmbientMinSpeed_21; }
	inline void set_keepAmbientMinSpeed_21(float value)
	{
		___keepAmbientMinSpeed_21 = value;
	}

	inline static int32_t get_offset_of_keepRotationSpeed_22() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___keepRotationSpeed_22)); }
	inline float get_keepRotationSpeed_22() const { return ___keepRotationSpeed_22; }
	inline float* get_address_of_keepRotationSpeed_22() { return &___keepRotationSpeed_22; }
	inline void set_keepRotationSpeed_22(float value)
	{
		___keepRotationSpeed_22 = value;
	}

	inline static int32_t get_offset_of_smoothZToZero_23() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___smoothZToZero_23)); }
	inline float get_smoothZToZero_23() const { return ___smoothZToZero_23; }
	inline float* get_address_of_smoothZToZero_23() { return &___smoothZToZero_23; }
	inline void set_smoothZToZero_23(float value)
	{
		___smoothZToZero_23 = value;
	}

	inline static int32_t get_offset_of_rollAngle_24() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___rollAngle_24)); }
	inline float get_rollAngle_24() const { return ___rollAngle_24; }
	inline float* get_address_of_rollAngle_24() { return &___rollAngle_24; }
	inline void set_rollAngle_24(float value)
	{
		___rollAngle_24 = value;
	}

	inline static int32_t get_offset_of_shipAnchorPosition_25() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___shipAnchorPosition_25)); }
	inline Vector3_t2243707580  get_shipAnchorPosition_25() const { return ___shipAnchorPosition_25; }
	inline Vector3_t2243707580 * get_address_of_shipAnchorPosition_25() { return &___shipAnchorPosition_25; }
	inline void set_shipAnchorPosition_25(Vector3_t2243707580  value)
	{
		___shipAnchorPosition_25 = value;
	}

	inline static int32_t get_offset_of_shipAnchorRotation_26() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___shipAnchorRotation_26)); }
	inline Quaternion_t4030073918  get_shipAnchorRotation_26() const { return ___shipAnchorRotation_26; }
	inline Quaternion_t4030073918 * get_address_of_shipAnchorRotation_26() { return &___shipAnchorRotation_26; }
	inline void set_shipAnchorRotation_26(Quaternion_t4030073918  value)
	{
		___shipAnchorRotation_26 = value;
	}

	inline static int32_t get_offset_of_speedControllerState_27() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___speedControllerState_27)); }
	inline int32_t get_speedControllerState_27() const { return ___speedControllerState_27; }
	inline int32_t* get_address_of_speedControllerState_27() { return &___speedControllerState_27; }
	inline void set_speedControllerState_27(int32_t value)
	{
		___speedControllerState_27 = value;
	}

	inline static int32_t get_offset_of_shiftingState_28() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___shiftingState_28)); }
	inline int32_t get_shiftingState_28() const { return ___shiftingState_28; }
	inline int32_t* get_address_of_shiftingState_28() { return &___shiftingState_28; }
	inline void set_shiftingState_28(int32_t value)
	{
		___shiftingState_28 = value;
	}

	inline static int32_t get_offset_of_isKeptLeftShifting_29() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___isKeptLeftShifting_29)); }
	inline bool get_isKeptLeftShifting_29() const { return ___isKeptLeftShifting_29; }
	inline bool* get_address_of_isKeptLeftShifting_29() { return &___isKeptLeftShifting_29; }
	inline void set_isKeptLeftShifting_29(bool value)
	{
		___isKeptLeftShifting_29 = value;
	}

	inline static int32_t get_offset_of_isKeptRightShifting_30() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___isKeptRightShifting_30)); }
	inline bool get_isKeptRightShifting_30() const { return ___isKeptRightShifting_30; }
	inline bool* get_address_of_isKeptRightShifting_30() { return &___isKeptRightShifting_30; }
	inline void set_isKeptRightShifting_30(bool value)
	{
		___isKeptRightShifting_30 = value;
	}

	inline static int32_t get_offset_of_isSwitchToZero_31() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___isSwitchToZero_31)); }
	inline bool get_isSwitchToZero_31() const { return ___isSwitchToZero_31; }
	inline bool* get_address_of_isSwitchToZero_31() { return &___isSwitchToZero_31; }
	inline void set_isSwitchToZero_31(bool value)
	{
		___isSwitchToZero_31 = value;
	}

	inline static int32_t get_offset_of_isAccelerating_32() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___isAccelerating_32)); }
	inline bool get_isAccelerating_32() const { return ___isAccelerating_32; }
	inline bool* get_address_of_isAccelerating_32() { return &___isAccelerating_32; }
	inline void set_isAccelerating_32(bool value)
	{
		___isAccelerating_32 = value;
	}

	inline static int32_t get_offset_of_isAccelrated_33() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___isAccelrated_33)); }
	inline bool get_isAccelrated_33() const { return ___isAccelrated_33; }
	inline bool* get_address_of_isAccelrated_33() { return &___isAccelrated_33; }
	inline void set_isAccelrated_33(bool value)
	{
		___isAccelrated_33 = value;
	}

	inline static int32_t get_offset_of_isBreaking_34() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___isBreaking_34)); }
	inline bool get_isBreaking_34() const { return ___isBreaking_34; }
	inline bool* get_address_of_isBreaking_34() { return &___isBreaking_34; }
	inline void set_isBreaking_34(bool value)
	{
		___isBreaking_34 = value;
	}

	inline static int32_t get_offset_of_isBroke_35() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___isBroke_35)); }
	inline bool get_isBroke_35() const { return ___isBroke_35; }
	inline bool* get_address_of_isBroke_35() { return &___isBroke_35; }
	inline void set_isBroke_35(bool value)
	{
		___isBroke_35 = value;
	}

	inline static int32_t get_offset_of_BalancedRollingInput_36() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___BalancedRollingInput_36)); }
	inline Action_t3226471752 * get_BalancedRollingInput_36() const { return ___BalancedRollingInput_36; }
	inline Action_t3226471752 ** get_address_of_BalancedRollingInput_36() { return &___BalancedRollingInput_36; }
	inline void set_BalancedRollingInput_36(Action_t3226471752 * value)
	{
		___BalancedRollingInput_36 = value;
		Il2CppCodeGenWriteBarrier(&___BalancedRollingInput_36, value);
	}

	inline static int32_t get_offset_of_AcceleratingInput_37() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___AcceleratingInput_37)); }
	inline Action_2_t800392020 * get_AcceleratingInput_37() const { return ___AcceleratingInput_37; }
	inline Action_2_t800392020 ** get_address_of_AcceleratingInput_37() { return &___AcceleratingInput_37; }
	inline void set_AcceleratingInput_37(Action_2_t800392020 * value)
	{
		___AcceleratingInput_37 = value;
		Il2CppCodeGenWriteBarrier(&___AcceleratingInput_37, value);
	}

	inline static int32_t get_offset_of_BreakingInput_38() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___BreakingInput_38)); }
	inline Action_2_t800392020 * get_BreakingInput_38() const { return ___BreakingInput_38; }
	inline Action_2_t800392020 ** get_address_of_BreakingInput_38() { return &___BreakingInput_38; }
	inline void set_BreakingInput_38(Action_2_t800392020 * value)
	{
		___BreakingInput_38 = value;
		Il2CppCodeGenWriteBarrier(&___BreakingInput_38, value);
	}

	inline static int32_t get_offset_of_LeftRollingInput_39() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___LeftRollingInput_39)); }
	inline Action_3_t2414724281 * get_LeftRollingInput_39() const { return ___LeftRollingInput_39; }
	inline Action_3_t2414724281 ** get_address_of_LeftRollingInput_39() { return &___LeftRollingInput_39; }
	inline void set_LeftRollingInput_39(Action_3_t2414724281 * value)
	{
		___LeftRollingInput_39 = value;
		Il2CppCodeGenWriteBarrier(&___LeftRollingInput_39, value);
	}

	inline static int32_t get_offset_of_RightRollingInput_40() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___RightRollingInput_40)); }
	inline Action_3_t2414724281 * get_RightRollingInput_40() const { return ___RightRollingInput_40; }
	inline Action_3_t2414724281 ** get_address_of_RightRollingInput_40() { return &___RightRollingInput_40; }
	inline void set_RightRollingInput_40(Action_3_t2414724281 * value)
	{
		___RightRollingInput_40 = value;
		Il2CppCodeGenWriteBarrier(&___RightRollingInput_40, value);
	}

	inline static int32_t get_offset_of_LeftShiftingInput_41() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___LeftShiftingInput_41)); }
	inline Action_2_t800392020 * get_LeftShiftingInput_41() const { return ___LeftShiftingInput_41; }
	inline Action_2_t800392020 ** get_address_of_LeftShiftingInput_41() { return &___LeftShiftingInput_41; }
	inline void set_LeftShiftingInput_41(Action_2_t800392020 * value)
	{
		___LeftShiftingInput_41 = value;
		Il2CppCodeGenWriteBarrier(&___LeftShiftingInput_41, value);
	}

	inline static int32_t get_offset_of_RightShiftingInput_42() { return static_cast<int32_t>(offsetof(ShipControl_t2738676427, ___RightShiftingInput_42)); }
	inline Action_2_t800392020 * get_RightShiftingInput_42() const { return ___RightShiftingInput_42; }
	inline Action_2_t800392020 ** get_address_of_RightShiftingInput_42() { return &___RightShiftingInput_42; }
	inline void set_RightShiftingInput_42(Action_2_t800392020 * value)
	{
		___RightShiftingInput_42 = value;
		Il2CppCodeGenWriteBarrier(&___RightShiftingInput_42, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
