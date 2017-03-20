#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Saitama_MonoController2943651575.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.Projectile
struct  Projectile_t796869787  : public MonoController_t2943651575
{
public:
	// System.Int32 Saitama.Weapons.Projectile::_damage
	int32_t ____damage_3;
	// System.Int32 Saitama.Weapons.Projectile::_level
	int32_t ____level_4;
	// UnityEngine.Vector3 Saitama.Weapons.Projectile::_startPosition
	Vector3_t2243707580  ____startPosition_5;
	// UnityEngine.Quaternion Saitama.Weapons.Projectile::_startRotation
	Quaternion_t4030073918  ____startRotation_6;

public:
	inline static int32_t get_offset_of__damage_3() { return static_cast<int32_t>(offsetof(Projectile_t796869787, ____damage_3)); }
	inline int32_t get__damage_3() const { return ____damage_3; }
	inline int32_t* get_address_of__damage_3() { return &____damage_3; }
	inline void set__damage_3(int32_t value)
	{
		____damage_3 = value;
	}

	inline static int32_t get_offset_of__level_4() { return static_cast<int32_t>(offsetof(Projectile_t796869787, ____level_4)); }
	inline int32_t get__level_4() const { return ____level_4; }
	inline int32_t* get_address_of__level_4() { return &____level_4; }
	inline void set__level_4(int32_t value)
	{
		____level_4 = value;
	}

	inline static int32_t get_offset_of__startPosition_5() { return static_cast<int32_t>(offsetof(Projectile_t796869787, ____startPosition_5)); }
	inline Vector3_t2243707580  get__startPosition_5() const { return ____startPosition_5; }
	inline Vector3_t2243707580 * get_address_of__startPosition_5() { return &____startPosition_5; }
	inline void set__startPosition_5(Vector3_t2243707580  value)
	{
		____startPosition_5 = value;
	}

	inline static int32_t get_offset_of__startRotation_6() { return static_cast<int32_t>(offsetof(Projectile_t796869787, ____startRotation_6)); }
	inline Quaternion_t4030073918  get__startRotation_6() const { return ____startRotation_6; }
	inline Quaternion_t4030073918 * get_address_of__startRotation_6() { return &____startRotation_6; }
	inline void set__startRotation_6(Quaternion_t4030073918  value)
	{
		____startRotation_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
