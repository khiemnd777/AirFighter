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

#include "AssemblyU2DCSharp_Saitama_Updater4201465179.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.Weapon
struct  Weapon_t3400916716  : public Updater_t4201465179
{
public:
	// System.Action Saitama.Weapons.Weapon::OnTriggerHold
	Action_t3226471752 * ___OnTriggerHold_14;
	// System.Action Saitama.Weapons.Weapon::OnTriggerRelease
	Action_t3226471752 * ___OnTriggerRelease_15;
	// UnityEngine.LayerMask Saitama.Weapons.Weapon::_targets
	LayerMask_t3188175821  ____targets_16;
	// System.Int32 Saitama.Weapons.Weapon::_level
	int32_t ____level_17;
	// System.Int32 Saitama.Weapons.Weapon::_damage
	int32_t ____damage_18;

public:
	inline static int32_t get_offset_of_OnTriggerHold_14() { return static_cast<int32_t>(offsetof(Weapon_t3400916716, ___OnTriggerHold_14)); }
	inline Action_t3226471752 * get_OnTriggerHold_14() const { return ___OnTriggerHold_14; }
	inline Action_t3226471752 ** get_address_of_OnTriggerHold_14() { return &___OnTriggerHold_14; }
	inline void set_OnTriggerHold_14(Action_t3226471752 * value)
	{
		___OnTriggerHold_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnTriggerHold_14, value);
	}

	inline static int32_t get_offset_of_OnTriggerRelease_15() { return static_cast<int32_t>(offsetof(Weapon_t3400916716, ___OnTriggerRelease_15)); }
	inline Action_t3226471752 * get_OnTriggerRelease_15() const { return ___OnTriggerRelease_15; }
	inline Action_t3226471752 ** get_address_of_OnTriggerRelease_15() { return &___OnTriggerRelease_15; }
	inline void set_OnTriggerRelease_15(Action_t3226471752 * value)
	{
		___OnTriggerRelease_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnTriggerRelease_15, value);
	}

	inline static int32_t get_offset_of__targets_16() { return static_cast<int32_t>(offsetof(Weapon_t3400916716, ____targets_16)); }
	inline LayerMask_t3188175821  get__targets_16() const { return ____targets_16; }
	inline LayerMask_t3188175821 * get_address_of__targets_16() { return &____targets_16; }
	inline void set__targets_16(LayerMask_t3188175821  value)
	{
		____targets_16 = value;
	}

	inline static int32_t get_offset_of__level_17() { return static_cast<int32_t>(offsetof(Weapon_t3400916716, ____level_17)); }
	inline int32_t get__level_17() const { return ____level_17; }
	inline int32_t* get_address_of__level_17() { return &____level_17; }
	inline void set__level_17(int32_t value)
	{
		____level_17 = value;
	}

	inline static int32_t get_offset_of__damage_18() { return static_cast<int32_t>(offsetof(Weapon_t3400916716, ____damage_18)); }
	inline int32_t get__damage_18() const { return ____damage_18; }
	inline int32_t* get_address_of__damage_18() { return &____damage_18; }
	inline void set__damage_18(int32_t value)
	{
		____damage_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
