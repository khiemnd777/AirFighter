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
// System.Func`2<Saitama.LevelManager,System.Int32>
struct Func_2_t604955888;
// System.Func`2<Saitama.ScoreManager,System.Int32>
struct Func_2_t1840664198;
// System.Func`2<UnityEngine.GameObject,UnityEngine.Vector3>
struct Func_2_t1823080486;

#include "AssemblyU2DCSharp_Saitama_NPCs_Bosses_Boss3978438125.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.NPCs.Bosses.XFisher
struct  XFisher_t194907223  : public Boss_t3978438125
{
public:
	// System.Int32 Saitama.NPCs.Bosses.XFisher::_runningForLifeHealth
	int32_t ____runningForLifeHealth_27;
	// UnityEngine.Rigidbody Saitama.NPCs.Bosses.XFisher::_rigidbody
	Rigidbody_t4233889191 * ____rigidbody_28;

public:
	inline static int32_t get_offset_of__runningForLifeHealth_27() { return static_cast<int32_t>(offsetof(XFisher_t194907223, ____runningForLifeHealth_27)); }
	inline int32_t get__runningForLifeHealth_27() const { return ____runningForLifeHealth_27; }
	inline int32_t* get_address_of__runningForLifeHealth_27() { return &____runningForLifeHealth_27; }
	inline void set__runningForLifeHealth_27(int32_t value)
	{
		____runningForLifeHealth_27 = value;
	}

	inline static int32_t get_offset_of__rigidbody_28() { return static_cast<int32_t>(offsetof(XFisher_t194907223, ____rigidbody_28)); }
	inline Rigidbody_t4233889191 * get__rigidbody_28() const { return ____rigidbody_28; }
	inline Rigidbody_t4233889191 ** get_address_of__rigidbody_28() { return &____rigidbody_28; }
	inline void set__rigidbody_28(Rigidbody_t4233889191 * value)
	{
		____rigidbody_28 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_28, value);
	}
};

struct XFisher_t194907223_StaticFields
{
public:
	// System.Func`2<Saitama.LevelManager,System.Int32> Saitama.NPCs.Bosses.XFisher::<>f__am$cache0
	Func_2_t604955888 * ___U3CU3Ef__amU24cache0_29;
	// System.Func`2<Saitama.ScoreManager,System.Int32> Saitama.NPCs.Bosses.XFisher::<>f__am$cache1
	Func_2_t1840664198 * ___U3CU3Ef__amU24cache1_30;
	// System.Func`2<UnityEngine.GameObject,UnityEngine.Vector3> Saitama.NPCs.Bosses.XFisher::<>f__am$cache2
	Func_2_t1823080486 * ___U3CU3Ef__amU24cache2_31;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_29() { return static_cast<int32_t>(offsetof(XFisher_t194907223_StaticFields, ___U3CU3Ef__amU24cache0_29)); }
	inline Func_2_t604955888 * get_U3CU3Ef__amU24cache0_29() const { return ___U3CU3Ef__amU24cache0_29; }
	inline Func_2_t604955888 ** get_address_of_U3CU3Ef__amU24cache0_29() { return &___U3CU3Ef__amU24cache0_29; }
	inline void set_U3CU3Ef__amU24cache0_29(Func_2_t604955888 * value)
	{
		___U3CU3Ef__amU24cache0_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_30() { return static_cast<int32_t>(offsetof(XFisher_t194907223_StaticFields, ___U3CU3Ef__amU24cache1_30)); }
	inline Func_2_t1840664198 * get_U3CU3Ef__amU24cache1_30() const { return ___U3CU3Ef__amU24cache1_30; }
	inline Func_2_t1840664198 ** get_address_of_U3CU3Ef__amU24cache1_30() { return &___U3CU3Ef__amU24cache1_30; }
	inline void set_U3CU3Ef__amU24cache1_30(Func_2_t1840664198 * value)
	{
		___U3CU3Ef__amU24cache1_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_31() { return static_cast<int32_t>(offsetof(XFisher_t194907223_StaticFields, ___U3CU3Ef__amU24cache2_31)); }
	inline Func_2_t1823080486 * get_U3CU3Ef__amU24cache2_31() const { return ___U3CU3Ef__amU24cache2_31; }
	inline Func_2_t1823080486 ** get_address_of_U3CU3Ef__amU24cache2_31() { return &___U3CU3Ef__amU24cache2_31; }
	inline void set_U3CU3Ef__amU24cache2_31(Func_2_t1823080486 * value)
	{
		___U3CU3Ef__amU24cache2_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
