#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Saitama.Weapons.Gun>
struct List_1_t1301503350;

#include "AssemblyU2DCSharp_Saitama_Updater4201465179.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.GunPivotTrackerSystem
struct  GunPivotTrackerSystem_t2625016341  : public Updater_t4201465179
{
public:
	// System.Collections.Generic.List`1<Saitama.Weapons.Gun> Saitama.Weapons.GunPivotTrackerSystem::_guns
	List_1_t1301503350 * ____guns_14;

public:
	inline static int32_t get_offset_of__guns_14() { return static_cast<int32_t>(offsetof(GunPivotTrackerSystem_t2625016341, ____guns_14)); }
	inline List_1_t1301503350 * get__guns_14() const { return ____guns_14; }
	inline List_1_t1301503350 ** get_address_of__guns_14() { return &____guns_14; }
	inline void set__guns_14(List_1_t1301503350 * value)
	{
		____guns_14 = value;
		Il2CppCodeGenWriteBarrier(&____guns_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
