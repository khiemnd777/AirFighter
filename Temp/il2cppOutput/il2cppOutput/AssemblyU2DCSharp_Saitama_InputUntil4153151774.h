#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.InputUntil
struct  InputUntil_t4153151774  : public Il2CppObject
{
public:
	// System.Boolean Saitama.InputUntil::_input
	bool ____input_0;
	// System.Action Saitama.InputUntil::_predicate
	Action_t3226471752 * ____predicate_1;

public:
	inline static int32_t get_offset_of__input_0() { return static_cast<int32_t>(offsetof(InputUntil_t4153151774, ____input_0)); }
	inline bool get__input_0() const { return ____input_0; }
	inline bool* get_address_of__input_0() { return &____input_0; }
	inline void set__input_0(bool value)
	{
		____input_0 = value;
	}

	inline static int32_t get_offset_of__predicate_1() { return static_cast<int32_t>(offsetof(InputUntil_t4153151774, ____predicate_1)); }
	inline Action_t3226471752 * get__predicate_1() const { return ____predicate_1; }
	inline Action_t3226471752 ** get_address_of__predicate_1() { return &____predicate_1; }
	inline void set__predicate_1(Action_t3226471752 * value)
	{
		____predicate_1 = value;
		Il2CppCodeGenWriteBarrier(&____predicate_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
