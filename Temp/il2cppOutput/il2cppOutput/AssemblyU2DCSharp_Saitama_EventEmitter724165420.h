#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>>
struct Dictionary_2_t662525977;
// System.Func`2<System.Object,System.Type>
struct Func_2_t1439858112;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.EventEmitter
struct  EventEmitter_t724165420  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>> Saitama.EventEmitter::_events
	Dictionary_2_t662525977 * ____events_0;

public:
	inline static int32_t get_offset_of__events_0() { return static_cast<int32_t>(offsetof(EventEmitter_t724165420, ____events_0)); }
	inline Dictionary_2_t662525977 * get__events_0() const { return ____events_0; }
	inline Dictionary_2_t662525977 ** get_address_of__events_0() { return &____events_0; }
	inline void set__events_0(Dictionary_2_t662525977 * value)
	{
		____events_0 = value;
		Il2CppCodeGenWriteBarrier(&____events_0, value);
	}
};

struct EventEmitter_t724165420_StaticFields
{
public:
	// System.Func`2<System.Object,System.Type> Saitama.EventEmitter::<>f__am$cache0
	Func_2_t1439858112 * ___U3CU3Ef__amU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(EventEmitter_t724165420_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Func_2_t1439858112 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Func_2_t1439858112 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Func_2_t1439858112 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
