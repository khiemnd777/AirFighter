#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

// Saitama.CommonObject/<OnLoadingPercent>c__Iterator1
struct  U3COnLoadingPercentU3Ec__Iterator1_t4290490351  : public Il2CppObject
{
public:
	// System.Action`1<System.Single> Saitama.CommonObject/<OnLoadingPercent>c__Iterator1::act
	Action_1_t1878309314 * ___act_0;
	// System.Single Saitama.CommonObject/<OnLoadingPercent>c__Iterator1::<percent>__0
	float ___U3CpercentU3E__0_1;
	// System.Single Saitama.CommonObject/<OnLoadingPercent>c__Iterator1::deltaTime
	float ___deltaTime_2;
	// System.Object Saitama.CommonObject/<OnLoadingPercent>c__Iterator1::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean Saitama.CommonObject/<OnLoadingPercent>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Saitama.CommonObject/<OnLoadingPercent>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_act_0() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator1_t4290490351, ___act_0)); }
	inline Action_1_t1878309314 * get_act_0() const { return ___act_0; }
	inline Action_1_t1878309314 ** get_address_of_act_0() { return &___act_0; }
	inline void set_act_0(Action_1_t1878309314 * value)
	{
		___act_0 = value;
		Il2CppCodeGenWriteBarrier(&___act_0, value);
	}

	inline static int32_t get_offset_of_U3CpercentU3E__0_1() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator1_t4290490351, ___U3CpercentU3E__0_1)); }
	inline float get_U3CpercentU3E__0_1() const { return ___U3CpercentU3E__0_1; }
	inline float* get_address_of_U3CpercentU3E__0_1() { return &___U3CpercentU3E__0_1; }
	inline void set_U3CpercentU3E__0_1(float value)
	{
		___U3CpercentU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_deltaTime_2() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator1_t4290490351, ___deltaTime_2)); }
	inline float get_deltaTime_2() const { return ___deltaTime_2; }
	inline float* get_address_of_deltaTime_2() { return &___deltaTime_2; }
	inline void set_deltaTime_2(float value)
	{
		___deltaTime_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator1_t4290490351, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator1_t4290490351, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3COnLoadingPercentU3Ec__Iterator1_t4290490351, ___U24PC_5)); }
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
