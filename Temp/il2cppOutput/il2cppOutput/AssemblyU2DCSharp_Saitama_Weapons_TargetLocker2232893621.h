#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.TargetLocker
struct  TargetLocker_t2232893621  : public Il2CppObject
{
public:
	// UnityEngine.RectTransform Saitama.Weapons.TargetLocker::<UI>k__BackingField
	RectTransform_t3349966182 * ___U3CUIU3Ek__BackingField_0;
	// UnityEngine.GameObject Saitama.Weapons.TargetLocker::<Target>k__BackingField
	GameObject_t1756533147 * ___U3CTargetU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUIU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TargetLocker_t2232893621, ___U3CUIU3Ek__BackingField_0)); }
	inline RectTransform_t3349966182 * get_U3CUIU3Ek__BackingField_0() const { return ___U3CUIU3Ek__BackingField_0; }
	inline RectTransform_t3349966182 ** get_address_of_U3CUIU3Ek__BackingField_0() { return &___U3CUIU3Ek__BackingField_0; }
	inline void set_U3CUIU3Ek__BackingField_0(RectTransform_t3349966182 * value)
	{
		___U3CUIU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUIU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TargetLocker_t2232893621, ___U3CTargetU3Ek__BackingField_1)); }
	inline GameObject_t1756533147 * get_U3CTargetU3Ek__BackingField_1() const { return ___U3CTargetU3Ek__BackingField_1; }
	inline GameObject_t1756533147 ** get_address_of_U3CTargetU3Ek__BackingField_1() { return &___U3CTargetU3Ek__BackingField_1; }
	inline void set_U3CTargetU3Ek__BackingField_1(GameObject_t1756533147 * value)
	{
		___U3CTargetU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
