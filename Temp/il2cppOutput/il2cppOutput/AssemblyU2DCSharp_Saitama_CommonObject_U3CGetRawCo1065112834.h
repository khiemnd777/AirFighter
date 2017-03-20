#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.CommonObject/<GetRawComponent>c__AnonStoreyC
struct  U3CGetRawComponentU3Ec__AnonStoreyC_t1065112834  : public Il2CppObject
{
public:
	// System.Type Saitama.CommonObject/<GetRawComponent>c__AnonStoreyC::type
	Type_t * ___type_0;
	// System.String Saitama.CommonObject/<GetRawComponent>c__AnonStoreyC::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CGetRawComponentU3Ec__AnonStoreyC_t1065112834, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(U3CGetRawComponentU3Ec__AnonStoreyC_t1065112834, ___name_1)); }
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
