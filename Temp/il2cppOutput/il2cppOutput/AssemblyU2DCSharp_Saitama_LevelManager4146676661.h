#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Int32>
struct Action_1_t1873676830;

#include "AssemblyU2DCSharp_Saitama_Updater4201465179.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.LevelManager
struct  LevelManager_t4146676661  : public Updater_t4201465179
{
public:
	// System.Action`1<System.Int32> Saitama.LevelManager::OnIncreased
	Action_1_t1873676830 * ___OnIncreased_14;
	// System.Int32 Saitama.LevelManager::_level
	int32_t ____level_15;

public:
	inline static int32_t get_offset_of_OnIncreased_14() { return static_cast<int32_t>(offsetof(LevelManager_t4146676661, ___OnIncreased_14)); }
	inline Action_1_t1873676830 * get_OnIncreased_14() const { return ___OnIncreased_14; }
	inline Action_1_t1873676830 ** get_address_of_OnIncreased_14() { return &___OnIncreased_14; }
	inline void set_OnIncreased_14(Action_1_t1873676830 * value)
	{
		___OnIncreased_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnIncreased_14, value);
	}

	inline static int32_t get_offset_of__level_15() { return static_cast<int32_t>(offsetof(LevelManager_t4146676661, ____level_15)); }
	inline int32_t get__level_15() const { return ____level_15; }
	inline int32_t* get_address_of__level_15() { return &____level_15; }
	inline void set__level_15(int32_t value)
	{
		____level_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
