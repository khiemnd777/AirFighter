#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.ScoreManager
struct ScoreManager_t4141729111;
// Saitama.Ships.StandardShip
struct StandardShip_t631944049;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Ships.StandardShip/<Die>c__AnonStorey1
struct  U3CDieU3Ec__AnonStorey1_t3676906367  : public Il2CppObject
{
public:
	// Saitama.ScoreManager Saitama.Ships.StandardShip/<Die>c__AnonStorey1::score
	ScoreManager_t4141729111 * ___score_0;
	// Saitama.Ships.StandardShip Saitama.Ships.StandardShip/<Die>c__AnonStorey1::$this
	StandardShip_t631944049 * ___U24this_1;

public:
	inline static int32_t get_offset_of_score_0() { return static_cast<int32_t>(offsetof(U3CDieU3Ec__AnonStorey1_t3676906367, ___score_0)); }
	inline ScoreManager_t4141729111 * get_score_0() const { return ___score_0; }
	inline ScoreManager_t4141729111 ** get_address_of_score_0() { return &___score_0; }
	inline void set_score_0(ScoreManager_t4141729111 * value)
	{
		___score_0 = value;
		Il2CppCodeGenWriteBarrier(&___score_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDieU3Ec__AnonStorey1_t3676906367, ___U24this_1)); }
	inline StandardShip_t631944049 * get_U24this_1() const { return ___U24this_1; }
	inline StandardShip_t631944049 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(StandardShip_t631944049 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
