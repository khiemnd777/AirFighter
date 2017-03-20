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
// GunFireButton
struct GunFireButton_t2860530794;

#include "AssemblyU2DCSharp_Saitama_Weapons_Gun1932382218.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.MachineGun.MachineGun
struct  MachineGun_t2861834475  : public Gun_t1932382218
{
public:
	// GunFireButton Saitama.Weapons.MachineGun.MachineGun::_gunFireBtn
	GunFireButton_t2860530794 * ____gunFireBtn_24;
	// System.Single Saitama.Weapons.MachineGun.MachineGun::nextShotTime
	float ___nextShotTime_25;

public:
	inline static int32_t get_offset_of__gunFireBtn_24() { return static_cast<int32_t>(offsetof(MachineGun_t2861834475, ____gunFireBtn_24)); }
	inline GunFireButton_t2860530794 * get__gunFireBtn_24() const { return ____gunFireBtn_24; }
	inline GunFireButton_t2860530794 ** get_address_of__gunFireBtn_24() { return &____gunFireBtn_24; }
	inline void set__gunFireBtn_24(GunFireButton_t2860530794 * value)
	{
		____gunFireBtn_24 = value;
		Il2CppCodeGenWriteBarrier(&____gunFireBtn_24, value);
	}

	inline static int32_t get_offset_of_nextShotTime_25() { return static_cast<int32_t>(offsetof(MachineGun_t2861834475, ___nextShotTime_25)); }
	inline float get_nextShotTime_25() const { return ___nextShotTime_25; }
	inline float* get_address_of_nextShotTime_25() { return &___nextShotTime_25; }
	inline void set_nextShotTime_25(float value)
	{
		___nextShotTime_25 = value;
	}
};

struct MachineGun_t2861834475_StaticFields
{
public:
	// System.String Saitama.Weapons.MachineGun.MachineGun::Prefab
	String_t* ___Prefab_23;

public:
	inline static int32_t get_offset_of_Prefab_23() { return static_cast<int32_t>(offsetof(MachineGun_t2861834475_StaticFields, ___Prefab_23)); }
	inline String_t* get_Prefab_23() const { return ___Prefab_23; }
	inline String_t** get_address_of_Prefab_23() { return &___Prefab_23; }
	inline void set_Prefab_23(String_t* value)
	{
		___Prefab_23 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
