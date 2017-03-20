#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Builders.Builder`2<System.Object,Saitama.Builders.ShipBuilders.ShipBuilder`1<System.Object>>
struct  Builder_2_t3780425571  : public Il2CppObject
{
public:
	// T Saitama.Builders.Builder`2::_owner
	Il2CppObject * ____owner_0;

public:
	inline static int32_t get_offset_of__owner_0() { return static_cast<int32_t>(offsetof(Builder_2_t3780425571, ____owner_0)); }
	inline Il2CppObject * get__owner_0() const { return ____owner_0; }
	inline Il2CppObject ** get_address_of__owner_0() { return &____owner_0; }
	inline void set__owner_0(Il2CppObject * value)
	{
		____owner_0 = value;
		Il2CppCodeGenWriteBarrier(&____owner_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
