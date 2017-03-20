#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.Ships.StandardShip
struct StandardShip_t631944049;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Builders.Builder`2<Saitama.Ships.StandardShip,Saitama.Builders.ShipBuilders.ShipBuilder`1<Saitama.Ships.StandardShip>>
struct  Builder_2_t1714274459  : public Il2CppObject
{
public:
	// T Saitama.Builders.Builder`2::_owner
	StandardShip_t631944049 * ____owner_0;

public:
	inline static int32_t get_offset_of__owner_0() { return static_cast<int32_t>(offsetof(Builder_2_t1714274459, ____owner_0)); }
	inline StandardShip_t631944049 * get__owner_0() const { return ____owner_0; }
	inline StandardShip_t631944049 ** get_address_of__owner_0() { return &____owner_0; }
	inline void set__owner_0(StandardShip_t631944049 * value)
	{
		____owner_0 = value;
		Il2CppCodeGenWriteBarrier(&____owner_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
