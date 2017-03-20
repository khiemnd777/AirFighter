#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.AttackerIdentifier/<Identify>c__AnonStorey0
struct  U3CIdentifyU3Ec__AnonStorey0_t3826750279  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Saitama.Weapons.AttackerIdentifier/<Identify>c__AnonStorey0::attacker
	GameObject_t1756533147 * ___attacker_0;

public:
	inline static int32_t get_offset_of_attacker_0() { return static_cast<int32_t>(offsetof(U3CIdentifyU3Ec__AnonStorey0_t3826750279, ___attacker_0)); }
	inline GameObject_t1756533147 * get_attacker_0() const { return ___attacker_0; }
	inline GameObject_t1756533147 ** get_address_of_attacker_0() { return &___attacker_0; }
	inline void set_attacker_0(GameObject_t1756533147 * value)
	{
		___attacker_0 = value;
		Il2CppCodeGenWriteBarrier(&___attacker_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
