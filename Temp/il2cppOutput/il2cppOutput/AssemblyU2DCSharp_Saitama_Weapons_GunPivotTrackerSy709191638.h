﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.Weapons.Gun
struct Gun_t1932382218;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.GunPivotTrackerSystem/<RotatingGunPivot>c__Iterator0
struct  U3CRotatingGunPivotU3Ec__Iterator0_t709191638  : public Il2CppObject
{
public:
	// System.Single Saitama.Weapons.GunPivotTrackerSystem/<RotatingGunPivot>c__Iterator0::<percent>__0
	float ___U3CpercentU3E__0_0;
	// Saitama.Weapons.Gun Saitama.Weapons.GunPivotTrackerSystem/<RotatingGunPivot>c__Iterator0::gun
	Gun_t1932382218 * ___gun_1;
	// UnityEngine.Quaternion Saitama.Weapons.GunPivotTrackerSystem/<RotatingGunPivot>c__Iterator0::wantedRotation
	Quaternion_t4030073918  ___wantedRotation_2;
	// System.Object Saitama.Weapons.GunPivotTrackerSystem/<RotatingGunPivot>c__Iterator0::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean Saitama.Weapons.GunPivotTrackerSystem/<RotatingGunPivot>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Saitama.Weapons.GunPivotTrackerSystem/<RotatingGunPivot>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CpercentU3E__0_0() { return static_cast<int32_t>(offsetof(U3CRotatingGunPivotU3Ec__Iterator0_t709191638, ___U3CpercentU3E__0_0)); }
	inline float get_U3CpercentU3E__0_0() const { return ___U3CpercentU3E__0_0; }
	inline float* get_address_of_U3CpercentU3E__0_0() { return &___U3CpercentU3E__0_0; }
	inline void set_U3CpercentU3E__0_0(float value)
	{
		___U3CpercentU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_gun_1() { return static_cast<int32_t>(offsetof(U3CRotatingGunPivotU3Ec__Iterator0_t709191638, ___gun_1)); }
	inline Gun_t1932382218 * get_gun_1() const { return ___gun_1; }
	inline Gun_t1932382218 ** get_address_of_gun_1() { return &___gun_1; }
	inline void set_gun_1(Gun_t1932382218 * value)
	{
		___gun_1 = value;
		Il2CppCodeGenWriteBarrier(&___gun_1, value);
	}

	inline static int32_t get_offset_of_wantedRotation_2() { return static_cast<int32_t>(offsetof(U3CRotatingGunPivotU3Ec__Iterator0_t709191638, ___wantedRotation_2)); }
	inline Quaternion_t4030073918  get_wantedRotation_2() const { return ___wantedRotation_2; }
	inline Quaternion_t4030073918 * get_address_of_wantedRotation_2() { return &___wantedRotation_2; }
	inline void set_wantedRotation_2(Quaternion_t4030073918  value)
	{
		___wantedRotation_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CRotatingGunPivotU3Ec__Iterator0_t709191638, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CRotatingGunPivotU3Ec__Iterator0_t709191638, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CRotatingGunPivotU3Ec__Iterator0_t709191638, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
