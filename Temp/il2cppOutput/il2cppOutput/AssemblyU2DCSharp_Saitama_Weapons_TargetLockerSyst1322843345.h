#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.TargetLockerSystem/<FindTargetsInCrosshair>c__AnonStorey2
struct  U3CFindTargetsInCrosshairU3Ec__AnonStorey2_t1322843345  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 Saitama.Weapons.TargetLockerSystem/<FindTargetsInCrosshair>c__AnonStorey2::crosshairMinBound
	Vector2_t2243707579  ___crosshairMinBound_0;
	// System.Single Saitama.Weapons.TargetLockerSystem/<FindTargetsInCrosshair>c__AnonStorey2::border
	float ___border_1;
	// UnityEngine.Vector2 Saitama.Weapons.TargetLockerSystem/<FindTargetsInCrosshair>c__AnonStorey2::crosshairMaxBound
	Vector2_t2243707579  ___crosshairMaxBound_2;

public:
	inline static int32_t get_offset_of_crosshairMinBound_0() { return static_cast<int32_t>(offsetof(U3CFindTargetsInCrosshairU3Ec__AnonStorey2_t1322843345, ___crosshairMinBound_0)); }
	inline Vector2_t2243707579  get_crosshairMinBound_0() const { return ___crosshairMinBound_0; }
	inline Vector2_t2243707579 * get_address_of_crosshairMinBound_0() { return &___crosshairMinBound_0; }
	inline void set_crosshairMinBound_0(Vector2_t2243707579  value)
	{
		___crosshairMinBound_0 = value;
	}

	inline static int32_t get_offset_of_border_1() { return static_cast<int32_t>(offsetof(U3CFindTargetsInCrosshairU3Ec__AnonStorey2_t1322843345, ___border_1)); }
	inline float get_border_1() const { return ___border_1; }
	inline float* get_address_of_border_1() { return &___border_1; }
	inline void set_border_1(float value)
	{
		___border_1 = value;
	}

	inline static int32_t get_offset_of_crosshairMaxBound_2() { return static_cast<int32_t>(offsetof(U3CFindTargetsInCrosshairU3Ec__AnonStorey2_t1322843345, ___crosshairMaxBound_2)); }
	inline Vector2_t2243707579  get_crosshairMaxBound_2() const { return ___crosshairMaxBound_2; }
	inline Vector2_t2243707579 * get_address_of_crosshairMaxBound_2() { return &___crosshairMaxBound_2; }
	inline void set_crosshairMaxBound_2(Vector2_t2243707579  value)
	{
		___crosshairMaxBound_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
