﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Boolean>
struct Func_1_t1485000104;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.CommonObject/<OnLoadingPercent>c__Iterator2
struct  U3COnLoadingPercentU3Ec__Iterator2_t4290490352  : public Il2CppObject
{
public:
	// System.Func`1<System.Boolean> Saitama.CommonObject/<OnLoadingPercent>c__Iterator2::cond
	Func_1_t1485000104 * ___cond_0;
	// System.Action`1<System.Single> Saitama.CommonObject/<OnLoadingPercent>c__Iterator2::act
	Action_1_t1878309314 * ___act_1;
	// System.Single Saitama.CommonObject/<OnLoadingPercent>c__Iterator2::<percent>__0
	float ___U3CpercentU3E__0_2;
	// System.Single Saitama.CommonObject/<OnLoadingPercent>c__Iterator2::deltaTime
	float ___deltaTime_3;
	// System.Object Saitama.CommonObject/<OnLoadingPercent>c__Iterator2::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean Saitama.CommonObject/<OnLoadingPercent>c__Iterator2::$disposing
	bool ___U24disposing_5;
	// System.Int32 Saitama.CommonObject/<OnLoadingPercent>c__Iterator2::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_cond_0() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator2_t4290490352, ___cond_0)); }
	inline Func_1_t1485000104 * get_cond_0() const { return ___cond_0; }
	inline Func_1_t1485000104 ** get_address_of_cond_0() { return &___cond_0; }
	inline void set_cond_0(Func_1_t1485000104 * value)
	{
		___cond_0 = value;
		Il2CppCodeGenWriteBarrier(&___cond_0, value);
	}

	inline static int32_t get_offset_of_act_1() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator2_t4290490352, ___act_1)); }
	inline Action_1_t1878309314 * get_act_1() const { return ___act_1; }
	inline Action_1_t1878309314 ** get_address_of_act_1() { return &___act_1; }
	inline void set_act_1(Action_1_t1878309314 * value)
	{
		___act_1 = value;
		Il2CppCodeGenWriteBarrier(&___act_1, value);
	}

	inline static int32_t get_offset_of_U3CpercentU3E__0_2() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator2_t4290490352, ___U3CpercentU3E__0_2)); }
	inline float get_U3CpercentU3E__0_2() const { return ___U3CpercentU3E__0_2; }
	inline float* get_address_of_U3CpercentU3E__0_2() { return &___U3CpercentU3E__0_2; }
	inline void set_U3CpercentU3E__0_2(float value)
	{
		___U3CpercentU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_deltaTime_3() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator2_t4290490352, ___deltaTime_3)); }
	inline float get_deltaTime_3() const { return ___deltaTime_3; }
	inline float* get_address_of_deltaTime_3() { return &___deltaTime_3; }
	inline void set_deltaTime_3(float value)
	{
		___deltaTime_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator2_t4290490352, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator2_t4290490352, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator2_t4290490352, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif