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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Saitama.Weapons.CollisionChecker
struct CollisionChecker_t3062960551;

#include "AssemblyU2DCSharp_Saitama_Weapons_Missle2713853427.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.AirToAirMissle.AirToAirMissle
struct  AirToAirMissle_t2181273124  : public Missle_t2713853427
{
public:
	// UnityEngine.Rigidbody Saitama.Weapons.AirToAirMissle.AirToAirMissle::_rigidbody
	Rigidbody_t4233889191 * ____rigidbody_12;
	// System.Single Saitama.Weapons.AirToAirMissle.AirToAirMissle::_speedUpTime
	float ____speedUpTime_13;
	// System.Single Saitama.Weapons.AirToAirMissle.AirToAirMissle::_missleSpeedOnExecute
	float ____missleSpeedOnExecute_14;
	// System.Single Saitama.Weapons.AirToAirMissle.AirToAirMissle::_timeSpeedUp
	float ____timeSpeedUp_15;
	// Saitama.Weapons.CollisionChecker Saitama.Weapons.AirToAirMissle.AirToAirMissle::_collisionChecker
	CollisionChecker_t3062960551 * ____collisionChecker_16;

public:
	inline static int32_t get_offset_of__rigidbody_12() { return static_cast<int32_t>(offsetof(AirToAirMissle_t2181273124, ____rigidbody_12)); }
	inline Rigidbody_t4233889191 * get__rigidbody_12() const { return ____rigidbody_12; }
	inline Rigidbody_t4233889191 ** get_address_of__rigidbody_12() { return &____rigidbody_12; }
	inline void set__rigidbody_12(Rigidbody_t4233889191 * value)
	{
		____rigidbody_12 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_12, value);
	}

	inline static int32_t get_offset_of__speedUpTime_13() { return static_cast<int32_t>(offsetof(AirToAirMissle_t2181273124, ____speedUpTime_13)); }
	inline float get__speedUpTime_13() const { return ____speedUpTime_13; }
	inline float* get_address_of__speedUpTime_13() { return &____speedUpTime_13; }
	inline void set__speedUpTime_13(float value)
	{
		____speedUpTime_13 = value;
	}

	inline static int32_t get_offset_of__missleSpeedOnExecute_14() { return static_cast<int32_t>(offsetof(AirToAirMissle_t2181273124, ____missleSpeedOnExecute_14)); }
	inline float get__missleSpeedOnExecute_14() const { return ____missleSpeedOnExecute_14; }
	inline float* get_address_of__missleSpeedOnExecute_14() { return &____missleSpeedOnExecute_14; }
	inline void set__missleSpeedOnExecute_14(float value)
	{
		____missleSpeedOnExecute_14 = value;
	}

	inline static int32_t get_offset_of__timeSpeedUp_15() { return static_cast<int32_t>(offsetof(AirToAirMissle_t2181273124, ____timeSpeedUp_15)); }
	inline float get__timeSpeedUp_15() const { return ____timeSpeedUp_15; }
	inline float* get_address_of__timeSpeedUp_15() { return &____timeSpeedUp_15; }
	inline void set__timeSpeedUp_15(float value)
	{
		____timeSpeedUp_15 = value;
	}

	inline static int32_t get_offset_of__collisionChecker_16() { return static_cast<int32_t>(offsetof(AirToAirMissle_t2181273124, ____collisionChecker_16)); }
	inline CollisionChecker_t3062960551 * get__collisionChecker_16() const { return ____collisionChecker_16; }
	inline CollisionChecker_t3062960551 ** get_address_of__collisionChecker_16() { return &____collisionChecker_16; }
	inline void set__collisionChecker_16(CollisionChecker_t3062960551 * value)
	{
		____collisionChecker_16 = value;
		Il2CppCodeGenWriteBarrier(&____collisionChecker_16, value);
	}
};

struct AirToAirMissle_t2181273124_StaticFields
{
public:
	// System.String Saitama.Weapons.AirToAirMissle.AirToAirMissle::Prefab
	String_t* ___Prefab_11;

public:
	inline static int32_t get_offset_of_Prefab_11() { return static_cast<int32_t>(offsetof(AirToAirMissle_t2181273124_StaticFields, ___Prefab_11)); }
	inline String_t* get_Prefab_11() const { return ___Prefab_11; }
	inline String_t** get_address_of_Prefab_11() { return &___Prefab_11; }
	inline void set_Prefab_11(String_t* value)
	{
		___Prefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
