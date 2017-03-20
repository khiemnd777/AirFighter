#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.IYielder
struct IYielder_t273991011;
// System.Func`1<System.Boolean>
struct Func_1_t1485000104;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.WaitingForFixedUpdate
struct  WaitingForFixedUpdate_t2106190311  : public Il2CppObject
{
public:
	// Saitama.IYielder Saitama.WaitingForFixedUpdate::_yielder
	Il2CppObject * ____yielder_0;

public:
	inline static int32_t get_offset_of__yielder_0() { return static_cast<int32_t>(offsetof(WaitingForFixedUpdate_t2106190311, ____yielder_0)); }
	inline Il2CppObject * get__yielder_0() const { return ____yielder_0; }
	inline Il2CppObject ** get_address_of__yielder_0() { return &____yielder_0; }
	inline void set__yielder_0(Il2CppObject * value)
	{
		____yielder_0 = value;
		Il2CppCodeGenWriteBarrier(&____yielder_0, value);
	}
};

struct WaitingForFixedUpdate_t2106190311_StaticFields
{
public:
	// System.Func`1<System.Boolean> Saitama.WaitingForFixedUpdate::<>f__am$cache0
	Func_1_t1485000104 * ___U3CU3Ef__amU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(WaitingForFixedUpdate_t2106190311_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Func_1_t1485000104 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Func_1_t1485000104 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Func_1_t1485000104 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
