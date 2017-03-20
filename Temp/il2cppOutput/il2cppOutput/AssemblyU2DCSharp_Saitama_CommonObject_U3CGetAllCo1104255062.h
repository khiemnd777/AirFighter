#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<Saitama.ICommonObject,System.Boolean>
struct Func_2_t4277661758;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.CommonObject/<GetAllComponents>c__AnonStorey7
struct  U3CGetAllComponentsU3Ec__AnonStorey7_t1104255062  : public Il2CppObject
{
public:
	// System.Func`2<Saitama.ICommonObject,System.Boolean> Saitama.CommonObject/<GetAllComponents>c__AnonStorey7::predicate
	Func_2_t4277661758 * ___predicate_0;

public:
	inline static int32_t get_offset_of_predicate_0() { return static_cast<int32_t>(offsetof(U3CGetAllComponentsU3Ec__AnonStorey7_t1104255062, ___predicate_0)); }
	inline Func_2_t4277661758 * get_predicate_0() const { return ___predicate_0; }
	inline Func_2_t4277661758 ** get_address_of_predicate_0() { return &___predicate_0; }
	inline void set_predicate_0(Func_2_t4277661758 * value)
	{
		___predicate_0 = value;
		Il2CppCodeGenWriteBarrier(&___predicate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
