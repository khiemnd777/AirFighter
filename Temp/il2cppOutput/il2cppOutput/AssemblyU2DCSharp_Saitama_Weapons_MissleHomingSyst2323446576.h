#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_Saitama_MonoController2943651575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.MissleHomingSystem
struct  MissleHomingSystem_t2323446576  : public MonoController_t2943651575
{
public:
	// UnityEngine.Rigidbody Saitama.Weapons.MissleHomingSystem::_rigidbody
	Rigidbody_t4233889191 * ____rigidbody_3;
	// System.Single Saitama.Weapons.MissleHomingSystem::_maxDegreesDelta
	float ____maxDegreesDelta_4;
	// UnityEngine.GameObject Saitama.Weapons.MissleHomingSystem::_target
	GameObject_t1756533147 * ____target_5;

public:
	inline static int32_t get_offset_of__rigidbody_3() { return static_cast<int32_t>(offsetof(MissleHomingSystem_t2323446576, ____rigidbody_3)); }
	inline Rigidbody_t4233889191 * get__rigidbody_3() const { return ____rigidbody_3; }
	inline Rigidbody_t4233889191 ** get_address_of__rigidbody_3() { return &____rigidbody_3; }
	inline void set__rigidbody_3(Rigidbody_t4233889191 * value)
	{
		____rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_3, value);
	}

	inline static int32_t get_offset_of__maxDegreesDelta_4() { return static_cast<int32_t>(offsetof(MissleHomingSystem_t2323446576, ____maxDegreesDelta_4)); }
	inline float get__maxDegreesDelta_4() const { return ____maxDegreesDelta_4; }
	inline float* get_address_of__maxDegreesDelta_4() { return &____maxDegreesDelta_4; }
	inline void set__maxDegreesDelta_4(float value)
	{
		____maxDegreesDelta_4 = value;
	}

	inline static int32_t get_offset_of__target_5() { return static_cast<int32_t>(offsetof(MissleHomingSystem_t2323446576, ____target_5)); }
	inline GameObject_t1756533147 * get__target_5() const { return ____target_5; }
	inline GameObject_t1756533147 ** get_address_of__target_5() { return &____target_5; }
	inline void set__target_5(GameObject_t1756533147 * value)
	{
		____target_5 = value;
		Il2CppCodeGenWriteBarrier(&____target_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
