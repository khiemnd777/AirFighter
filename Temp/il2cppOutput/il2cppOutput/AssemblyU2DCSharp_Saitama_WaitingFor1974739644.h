#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Boolean>
struct Func_1_t1485000104;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.WaitingFor
struct  WaitingFor_t1974739644  : public Il2CppObject
{
public:
	// System.Func`1<System.Boolean> Saitama.WaitingFor::_predicate
	Func_1_t1485000104 * ____predicate_0;

public:
	inline static int32_t get_offset_of__predicate_0() { return static_cast<int32_t>(offsetof(WaitingFor_t1974739644, ____predicate_0)); }
	inline Func_1_t1485000104 * get__predicate_0() const { return ____predicate_0; }
	inline Func_1_t1485000104 ** get_address_of__predicate_0() { return &____predicate_0; }
	inline void set__predicate_0(Func_1_t1485000104 * value)
	{
		____predicate_0 = value;
		Il2CppCodeGenWriteBarrier(&____predicate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
