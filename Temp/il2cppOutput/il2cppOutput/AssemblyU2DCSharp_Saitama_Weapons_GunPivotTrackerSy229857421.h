#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// Saitama.Weapons.GunPivotTrackerSystem
struct GunPivotTrackerSystem_t2625016341;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.GunPivotTrackerSystem/<RotateGunPivot>c__AnonStorey2
struct  U3CRotateGunPivotU3Ec__AnonStorey2_t229857421  : public Il2CppObject
{
public:
	// UnityEngine.GameObject[] Saitama.Weapons.GunPivotTrackerSystem/<RotateGunPivot>c__AnonStorey2::lockedTargets
	GameObjectU5BU5D_t3057952154* ___lockedTargets_0;
	// Saitama.Weapons.GunPivotTrackerSystem Saitama.Weapons.GunPivotTrackerSystem/<RotateGunPivot>c__AnonStorey2::$this
	GunPivotTrackerSystem_t2625016341 * ___U24this_1;

public:
	inline static int32_t get_offset_of_lockedTargets_0() { return static_cast<int32_t>(offsetof(U3CRotateGunPivotU3Ec__AnonStorey2_t229857421, ___lockedTargets_0)); }
	inline GameObjectU5BU5D_t3057952154* get_lockedTargets_0() const { return ___lockedTargets_0; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_lockedTargets_0() { return &___lockedTargets_0; }
	inline void set_lockedTargets_0(GameObjectU5BU5D_t3057952154* value)
	{
		___lockedTargets_0 = value;
		Il2CppCodeGenWriteBarrier(&___lockedTargets_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRotateGunPivotU3Ec__AnonStorey2_t229857421, ___U24this_1)); }
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
