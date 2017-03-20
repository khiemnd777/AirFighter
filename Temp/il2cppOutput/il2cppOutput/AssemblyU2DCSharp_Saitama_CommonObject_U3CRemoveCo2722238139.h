#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.ICommonObject
struct ICommonObject_t1240491325;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.CommonObject/<RemoveComponent>c__AnonStoreyB
struct  U3CRemoveComponentU3Ec__AnonStoreyB_t2722238139  : public Il2CppObject
{
public:
	// Saitama.ICommonObject Saitama.CommonObject/<RemoveComponent>c__AnonStoreyB::component
	Il2CppObject * ___component_0;
	// System.String Saitama.CommonObject/<RemoveComponent>c__AnonStoreyB::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_component_0() { return static_cast<int32_t>(offsetof(U3CRemoveComponentU3Ec__AnonStoreyB_t2722238139, ___component_0)); }
	inline Il2CppObject * get_component_0() const { return ___component_0; }
	inline Il2CppObject ** get_address_of_component_0() { return &___component_0; }
	inline void set_component_0(Il2CppObject * value)
	{
		___component_0 = value;
		Il2CppCodeGenWriteBarrier(&___component_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(U3CRemoveComponentU3Ec__AnonStoreyB_t2722238139, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
