#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// Saitama.Weapons.GunPivotTrackerSystem
struct GunPivotTrackerSystem_t2625016341;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.GunPivotTrackerSystem/<RotateGunPivot>c__AnonStorey1
struct  U3CRotateGunPivotU3Ec__AnonStorey1_t2958740776  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Saitama.Weapons.GunPivotTrackerSystem/<RotateGunPivot>c__AnonStorey1::lockedTarget
	GameObject_t1756533147 * ___lockedTarget_0;
	// Saitama.Weapons.GunPivotTrackerSystem Saitama.Weapons.GunPivotTrackerSystem/<RotateGunPivot>c__AnonStorey1::$this
	GunPivotTrackerSystem_t2625016341 * ___U24this_1;

public:
	inline static int32_t get_offset_of_lockedTarget_0() { return static_cast<int32_t>(offsetof(U3CRotateGunPivotU3Ec__AnonStorey1_t2958740776, ___lockedTarget_0)); }
	inline GameObject_t1756533147 * get_lockedTarget_0() const { return ___lockedTarget_0; }
	inline GameObject_t1756533147 ** get_address_of_lockedTarget_0() { return &___lockedTarget_0; }
	inline void set_lockedTarget_0(GameObject_t1756533147 * value)
	{
		___lockedTarget_0 = value;
		Il2CppCodeGenWriteBarrier(&___lockedTarget_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRotateGunPivotU3Ec__AnonStorey1_t2958740776, ___U24this_1)); }
	inline GunPivotTrackerSystem_t2625016341 * get_U24this_1() const { return ___U24this_1; }
	inline GunPivotTrackerSystem_t2625016341 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GunPivotTrackerSystem_t2625016341 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
