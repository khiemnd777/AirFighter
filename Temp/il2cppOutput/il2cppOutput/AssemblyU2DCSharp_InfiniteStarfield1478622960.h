#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "AssemblyU2DCSharp_Saitama_MonoController2943651575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniteStarfield
struct  InfiniteStarfield_t1478622960  : public MonoController_t2943651575
{
public:
	// System.Int32 InfiniteStarfield::starsMax
	int32_t ___starsMax_3;
	// System.Single InfiniteStarfield::starSize
	float ___starSize_4;
	// System.Single InfiniteStarfield::starDistance
	float ___starDistance_5;
	// System.Single InfiniteStarfield::starClipDistance
	float ___starClipDistance_6;
	// UnityEngine.Transform InfiniteStarfield::_anchor
	Transform_t3275118058 * ____anchor_7;
	// UnityEngine.ParticleSystem/Particle[] InfiniteStarfield::_stars
	ParticleU5BU5D_t574222242* ____stars_8;
	// System.Single InfiniteStarfield::_starDistanceSqr
	float ____starDistanceSqr_9;
	// System.Single InfiniteStarfield::_starClipDistanceSqr
	float ____starClipDistanceSqr_10;
	// UnityEngine.ParticleSystem InfiniteStarfield::_ps
	ParticleSystem_t3394631041 * ____ps_11;

public:
	inline static int32_t get_offset_of_starsMax_3() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ___starsMax_3)); }
	inline int32_t get_starsMax_3() const { return ___starsMax_3; }
	inline int32_t* get_address_of_starsMax_3() { return &___starsMax_3; }
	inline void set_starsMax_3(int32_t value)
	{
		___starsMax_3 = value;
	}

	inline static int32_t get_offset_of_starSize_4() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ___starSize_4)); }
	inline float get_starSize_4() const { return ___starSize_4; }
	inline float* get_address_of_starSize_4() { return &___starSize_4; }
	inline void set_starSize_4(float value)
	{
		___starSize_4 = value;
	}

	inline static int32_t get_offset_of_starDistance_5() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ___starDistance_5)); }
	inline float get_starDistance_5() const { return ___starDistance_5; }
	inline float* get_address_of_starDistance_5() { return &___starDistance_5; }
	inline void set_starDistance_5(float value)
	{
		___starDistance_5 = value;
	}

	inline static int32_t get_offset_of_starClipDistance_6() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ___starClipDistance_6)); }
	inline float get_starClipDistance_6() const { return ___starClipDistance_6; }
	inline float* get_address_of_starClipDistance_6() { return &___starClipDistance_6; }
	inline void set_starClipDistance_6(float value)
	{
		___starClipDistance_6 = value;
	}

	inline static int32_t get_offset_of__anchor_7() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ____anchor_7)); }
	inline Transform_t3275118058 * get__anchor_7() const { return ____anchor_7; }
	inline Transform_t3275118058 ** get_address_of__anchor_7() { return &____anchor_7; }
	inline void set__anchor_7(Transform_t3275118058 * value)
	{
		____anchor_7 = value;
		Il2CppCodeGenWriteBarrier(&____anchor_7, value);
	}

	inline static int32_t get_offset_of__stars_8() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ____stars_8)); }
	inline ParticleU5BU5D_t574222242* get__stars_8() const { return ____stars_8; }
	inline ParticleU5BU5D_t574222242** get_address_of__stars_8() { return &____stars_8; }
	inline void set__stars_8(ParticleU5BU5D_t574222242* value)
	{
		____stars_8 = value;
		Il2CppCodeGenWriteBarrier(&____stars_8, value);
	}

	inline static int32_t get_offset_of__starDistanceSqr_9() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ____starDistanceSqr_9)); }
	inline float get__starDistanceSqr_9() const { return ____starDistanceSqr_9; }
	inline float* get_address_of__starDistanceSqr_9() { return &____starDistanceSqr_9; }
	inline void set__starDistanceSqr_9(float value)
	{
		____starDistanceSqr_9 = value;
	}

	inline static int32_t get_offset_of__starClipDistanceSqr_10() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ____starClipDistanceSqr_10)); }
	inline float get__starClipDistanceSqr_10() const { return ____starClipDistanceSqr_10; }
	inline float* get_address_of__starClipDistanceSqr_10() { return &____starClipDistanceSqr_10; }
	inline void set__starClipDistanceSqr_10(float value)
	{
		____starClipDistanceSqr_10 = value;
	}

	inline static int32_t get_offset_of__ps_11() { return static_cast<int32_t>(offsetof(InfiniteStarfield_t1478622960, ____ps_11)); }
	inline ParticleSystem_t3394631041 * get__ps_11() const { return ____ps_11; }
	inline ParticleSystem_t3394631041 ** get_address_of__ps_11() { return &____ps_11; }
	inline void set__ps_11(ParticleSystem_t3394631041 * value)
	{
		____ps_11 = value;
		Il2CppCodeGenWriteBarrier(&____ps_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
