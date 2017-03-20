#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Saitama_Weapons_Projectile796869787.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.Missle
struct  Missle_t2713853427  : public Projectile_t796869787
{
public:
	// System.Single Saitama.Weapons.Missle::_speed
	float ____speed_7;
	// System.Single Saitama.Weapons.Missle::_lifeTime
	float ____lifeTime_8;
	// System.Boolean Saitama.Weapons.Missle::_isExecuted
	bool ____isExecuted_9;
	// UnityEngine.LayerMask Saitama.Weapons.Missle::_targets
	LayerMask_t3188175821  ____targets_10;

public:
	inline static int32_t get_offset_of__speed_7() { return static_cast<int32_t>(offsetof(Missle_t2713853427, ____speed_7)); }
	inline float get__speed_7() const { return ____speed_7; }
	inline float* get_address_of__speed_7() { return &____speed_7; }
	inline void set__speed_7(float value)
	{
		____speed_7 = value;
	}

	inline static int32_t get_offset_of__lifeTime_8() { return static_cast<int32_t>(offsetof(Missle_t2713853427, ____lifeTime_8)); }
	inline float get__lifeTime_8() const { return ____lifeTime_8; }
	inline float* get_address_of__lifeTime_8() { return &____lifeTime_8; }
	inline void set__lifeTime_8(float value)
	{
		____lifeTime_8 = value;
	}

	inline static int32_t get_offset_of__isExecuted_9() { return static_cast<int32_t>(offsetof(Missle_t2713853427, ____isExecuted_9)); }
	inline bool get__isExecuted_9() const { return ____isExecuted_9; }
	inline bool* get_address_of__isExecuted_9() { return &____isExecuted_9; }
	inline void set__isExecuted_9(bool value)
	{
		____isExecuted_9 = value;
	}

	inline static int32_t get_offset_of__targets_10() { return static_cast<int32_t>(offsetof(Missle_t2713853427, ____targets_10)); }
	inline LayerMask_t3188175821  get__targets_10() const { return ____targets_10; }
	inline LayerMask_t3188175821 * get_address_of__targets_10() { return &____targets_10; }
	inline void set__targets_10(LayerMask_t3188175821  value)
	{
		____targets_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
