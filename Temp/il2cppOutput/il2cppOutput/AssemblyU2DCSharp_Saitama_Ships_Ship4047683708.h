#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.EventEmitter
struct EventEmitter_t724165420;

#include "AssemblyU2DCSharp_Saitama_FlyableObjects_FlyableOb1191804870.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Ships.Ship
struct  Ship_t4047683708  : public FlyableObject_t1191804870
{
public:
	// Saitama.EventEmitter Saitama.Ships.Ship::_eventEmitter
	EventEmitter_t724165420 * ____eventEmitter_14;
	// System.Boolean Saitama.Ships.Ship::_isDead
	bool ____isDead_15;
	// System.Single Saitama.Ships.Ship::<AmbientSpeed>k__BackingField
	float ___U3CAmbientSpeedU3Ek__BackingField_16;
	// System.Single Saitama.Ships.Ship::<AmbientMaxSpeed>k__BackingField
	float ___U3CAmbientMaxSpeedU3Ek__BackingField_17;
	// System.Single Saitama.Ships.Ship::<AmbientMinSpeed>k__BackingField
	float ___U3CAmbientMinSpeedU3Ek__BackingField_18;
	// System.Single Saitama.Ships.Ship::<RotationSpeed>k__BackingField
	float ___U3CRotationSpeedU3Ek__BackingField_19;
	// System.Single Saitama.Ships.Ship::<ShiftedRotationExtraSpeed>k__BackingField
	float ___U3CShiftedRotationExtraSpeedU3Ek__BackingField_20;
	// System.Single Saitama.Ships.Ship::<RollSpeed>k__BackingField
	float ___U3CRollSpeedU3Ek__BackingField_21;
	// System.Single Saitama.Ships.Ship::<ShiftDistance>k__BackingField
	float ___U3CShiftDistanceU3Ek__BackingField_22;
	// System.Single Saitama.Ships.Ship::<ShiftAngleLeft>k__BackingField
	float ___U3CShiftAngleLeftU3Ek__BackingField_23;
	// System.Single Saitama.Ships.Ship::<ShiftAngleRight>k__BackingField
	float ___U3CShiftAngleRightU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of__eventEmitter_14() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ____eventEmitter_14)); }
	inline EventEmitter_t724165420 * get__eventEmitter_14() const { return ____eventEmitter_14; }
	inline EventEmitter_t724165420 ** get_address_of__eventEmitter_14() { return &____eventEmitter_14; }
	inline void set__eventEmitter_14(EventEmitter_t724165420 * value)
	{
		____eventEmitter_14 = value;
		Il2CppCodeGenWriteBarrier(&____eventEmitter_14, value);
	}

	inline static int32_t get_offset_of__isDead_15() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ____isDead_15)); }
	inline bool get__isDead_15() const { return ____isDead_15; }
	inline bool* get_address_of__isDead_15() { return &____isDead_15; }
	inline void set__isDead_15(bool value)
	{
		____isDead_15 = value;
	}

	inline static int32_t get_offset_of_U3CAmbientSpeedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CAmbientSpeedU3Ek__BackingField_16)); }
	inline float get_U3CAmbientSpeedU3Ek__BackingField_16() const { return ___U3CAmbientSpeedU3Ek__BackingField_16; }
	inline float* get_address_of_U3CAmbientSpeedU3Ek__BackingField_16() { return &___U3CAmbientSpeedU3Ek__BackingField_16; }
	inline void set_U3CAmbientSpeedU3Ek__BackingField_16(float value)
	{
		___U3CAmbientSpeedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CAmbientMaxSpeedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CAmbientMaxSpeedU3Ek__BackingField_17)); }
	inline float get_U3CAmbientMaxSpeedU3Ek__BackingField_17() const { return ___U3CAmbientMaxSpeedU3Ek__BackingField_17; }
	inline float* get_address_of_U3CAmbientMaxSpeedU3Ek__BackingField_17() { return &___U3CAmbientMaxSpeedU3Ek__BackingField_17; }
	inline void set_U3CAmbientMaxSpeedU3Ek__BackingField_17(float value)
	{
		___U3CAmbientMaxSpeedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CAmbientMinSpeedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CAmbientMinSpeedU3Ek__BackingField_18)); }
	inline float get_U3CAmbientMinSpeedU3Ek__BackingField_18() const { return ___U3CAmbientMinSpeedU3Ek__BackingField_18; }
	inline float* get_address_of_U3CAmbientMinSpeedU3Ek__BackingField_18() { return &___U3CAmbientMinSpeedU3Ek__BackingField_18; }
	inline void set_U3CAmbientMinSpeedU3Ek__BackingField_18(float value)
	{
		___U3CAmbientMinSpeedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CRotationSpeedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CRotationSpeedU3Ek__BackingField_19)); }
	inline float get_U3CRotationSpeedU3Ek__BackingField_19() const { return ___U3CRotationSpeedU3Ek__BackingField_19; }
	inline float* get_address_of_U3CRotationSpeedU3Ek__BackingField_19() { return &___U3CRotationSpeedU3Ek__BackingField_19; }
	inline void set_U3CRotationSpeedU3Ek__BackingField_19(float value)
	{
		___U3CRotationSpeedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CShiftedRotationExtraSpeedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CShiftedRotationExtraSpeedU3Ek__BackingField_20)); }
	inline float get_U3CShiftedRotationExtraSpeedU3Ek__BackingField_20() const { return ___U3CShiftedRotationExtraSpeedU3Ek__BackingField_20; }
	inline float* get_address_of_U3CShiftedRotationExtraSpeedU3Ek__BackingField_20() { return &___U3CShiftedRotationExtraSpeedU3Ek__BackingField_20; }
	inline void set_U3CShiftedRotationExtraSpeedU3Ek__BackingField_20(float value)
	{
		___U3CShiftedRotationExtraSpeedU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CRollSpeedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CRollSpeedU3Ek__BackingField_21)); }
	inline float get_U3CRollSpeedU3Ek__BackingField_21() const { return ___U3CRollSpeedU3Ek__BackingField_21; }
	inline float* get_address_of_U3CRollSpeedU3Ek__BackingField_21() { return &___U3CRollSpeedU3Ek__BackingField_21; }
	inline void set_U3CRollSpeedU3Ek__BackingField_21(float value)
	{
		___U3CRollSpeedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CShiftDistanceU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CShiftDistanceU3Ek__BackingField_22)); }
	inline float get_U3CShiftDistanceU3Ek__BackingField_22() const { return ___U3CShiftDistanceU3Ek__BackingField_22; }
	inline float* get_address_of_U3CShiftDistanceU3Ek__BackingField_22() { return &___U3CShiftDistanceU3Ek__BackingField_22; }
	inline void set_U3CShiftDistanceU3Ek__BackingField_22(float value)
	{
		___U3CShiftDistanceU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CShiftAngleLeftU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CShiftAngleLeftU3Ek__BackingField_23)); }
	inline float get_U3CShiftAngleLeftU3Ek__BackingField_23() const { return ___U3CShiftAngleLeftU3Ek__BackingField_23; }
	inline float* get_address_of_U3CShiftAngleLeftU3Ek__BackingField_23() { return &___U3CShiftAngleLeftU3Ek__BackingField_23; }
	inline void set_U3CShiftAngleLeftU3Ek__BackingField_23(float value)
	{
		___U3CShiftAngleLeftU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CShiftAngleRightU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Ship_t4047683708, ___U3CShiftAngleRightU3Ek__BackingField_24)); }
	inline float get_U3CShiftAngleRightU3Ek__BackingField_24() const { return ___U3CShiftAngleRightU3Ek__BackingField_24; }
	inline float* get_address_of_U3CShiftAngleRightU3Ek__BackingField_24() { return &___U3CShiftAngleRightU3Ek__BackingField_24; }
	inline void set_U3CShiftAngleRightU3Ek__BackingField_24(float value)
	{
		___U3CShiftAngleRightU3Ek__BackingField_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
