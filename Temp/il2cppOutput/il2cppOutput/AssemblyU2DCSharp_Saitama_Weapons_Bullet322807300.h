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

// Saitama.Weapons.Bullet
struct  Bullet_t322807300  : public Projectile_t796869787
{
public:
	// System.Single Saitama.Weapons.Bullet::_lifeTime
	float ____lifeTime_7;
	// System.Single Saitama.Weapons.Bullet::_speed
	float ____speed_8;
	// UnityEngine.LayerMask Saitama.Weapons.Bullet::_targets
	LayerMask_t3188175821  ____targets_9;

public:
	inline static int32_t get_offset_of__lifeTime_7() { return static_cast<int32_t>(offsetof(Bullet_t322807300, ____lifeTime_7)); }
	inline float get__lifeTime_7() const { return ____lifeTime_7; }
	inline float* get_address_of__lifeTime_7() { return &____lifeTime_7; }
	inline void set__lifeTime_7(float value)
	{
		____lifeTime_7 = value;
	}

	inline static int32_t get_offset_of__speed_8() { return static_cast<int32_t>(offsetof(Bullet_t322807300, ____speed_8)); }
	inline float get__speed_8() const { return ____speed_8; }
	inline float* get_address_of__speed_8() { return &____speed_8; }
	inline void set__speed_8(float value)
	{
		____speed_8 = value;
	}

	inline static int32_t get_offset_of__targets_9() { return static_cast<int32_t>(offsetof(Bullet_t322807300, ____targets_9)); }
	inline LayerMask_t3188175821  get__targets_9() const { return ____targets_9; }
	inline LayerMask_t3188175821 * get_address_of__targets_9() { return &____targets_9; }
	inline void set__targets_9(LayerMask_t3188175821  value)
	{
		____targets_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
