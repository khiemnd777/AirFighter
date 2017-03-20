#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Saitama.Weapons.CollisionChecker
struct CollisionChecker_t3062960551;

#include "AssemblyU2DCSharp_Saitama_Weapons_Bullet322807300.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.MachineGun.MachineGunBullet
struct  MachineGunBullet_t3841945121  : public Bullet_t322807300
{
public:
	// Saitama.Weapons.CollisionChecker Saitama.Weapons.MachineGun.MachineGunBullet::_collisionChecker
	CollisionChecker_t3062960551 * ____collisionChecker_11;

public:
	inline static int32_t get_offset_of__collisionChecker_11() { return static_cast<int32_t>(offsetof(MachineGunBullet_t3841945121, ____collisionChecker_11)); }
	inline CollisionChecker_t3062960551 * get__collisionChecker_11() const { return ____collisionChecker_11; }
	inline CollisionChecker_t3062960551 ** get_address_of__collisionChecker_11() { return &____collisionChecker_11; }
	inline void set__collisionChecker_11(CollisionChecker_t3062960551 * value)
	{
		____collisionChecker_11 = value;
		Il2CppCodeGenWriteBarrier(&____collisionChecker_11, value);
	}
};

struct MachineGunBullet_t3841945121_StaticFields
{
public:
	// System.String Saitama.Weapons.MachineGun.MachineGunBullet::Prefab
	String_t* ___Prefab_10;

public:
	inline static int32_t get_offset_of_Prefab_10() { return static_cast<int32_t>(offsetof(MachineGunBullet_t3841945121_StaticFields, ___Prefab_10)); }
	inline String_t* get_Prefab_10() const { return ___Prefab_10; }
	inline String_t** get_address_of_Prefab_10() { return &___Prefab_10; }
	inline void set_Prefab_10(String_t* value)
	{
		___Prefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
