#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<UnityEngine.Component,UnityEngine.Collider[]>
struct Action_2_t867783683;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.CollisionChecker
struct  CollisionChecker_t3062960551  : public Il2CppObject
{
public:
	// System.Action`2<UnityEngine.Component,UnityEngine.Collider[]> Saitama.Weapons.CollisionChecker::OnHit
	Action_2_t867783683 * ___OnHit_0;
	// UnityEngine.LayerMask Saitama.Weapons.CollisionChecker::_targets
	LayerMask_t3188175821  ____targets_1;

public:
	inline static int32_t get_offset_of_OnHit_0() { return static_cast<int32_t>(offsetof(CollisionChecker_t3062960551, ___OnHit_0)); }
	inline Action_2_t867783683 * get_OnHit_0() const { return ___OnHit_0; }
	inline Action_2_t867783683 ** get_address_of_OnHit_0() { return &___OnHit_0; }
	inline void set_OnHit_0(Action_2_t867783683 * value)
	{
		___OnHit_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnHit_0, value);
	}

	inline static int32_t get_offset_of__targets_1() { return static_cast<int32_t>(offsetof(CollisionChecker_t3062960551, ____targets_1)); }
	inline LayerMask_t3188175821  get__targets_1() const { return ____targets_1; }
	inline LayerMask_t3188175821 * get_address_of__targets_1() { return &____targets_1; }
	inline void set__targets_1(LayerMask_t3188175821  value)
	{
		____targets_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
