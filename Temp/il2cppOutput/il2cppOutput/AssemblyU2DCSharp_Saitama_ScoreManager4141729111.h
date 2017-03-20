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
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_Saitama_CommonObject2416616580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.ScoreManager
struct  ScoreManager_t4141729111  : public CommonObject_t2416616580
{
public:
	// System.Action Saitama.ScoreManager::OnDecreasing
	Action_t3226471752 * ___OnDecreasing_14;
	// System.Action Saitama.ScoreManager::OnIncreasing
	Action_t3226471752 * ___OnIncreasing_15;
	// System.Int32 Saitama.ScoreManager::_score
	int32_t ____score_16;
	// System.Int32 Saitama.ScoreManager::_originalScore
	int32_t ____originalScore_17;

public:
	inline static int32_t get_offset_of_OnDecreasing_14() { return static_cast<int32_t>(offsetof(ScoreManager_t4141729111, ___OnDecreasing_14)); }
	inline Action_t3226471752 * get_OnDecreasing_14() const { return ___OnDecreasing_14; }
	inline Action_t3226471752 ** get_address_of_OnDecreasing_14() { return &___OnDecreasing_14; }
	inline void set_OnDecreasing_14(Action_t3226471752 * value)
	{
		___OnDecreasing_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnDecreasing_14, value);
	}

	inline static int32_t get_offset_of_OnIncreasing_15() { return static_cast<int32_t>(offsetof(ScoreManager_t4141729111, ___OnIncreasing_15)); }
	inline Action_t3226471752 * get_OnIncreasing_15() const { return ___OnIncreasing_15; }
	inline Action_t3226471752 ** get_address_of_OnIncreasing_15() { return &___OnIncreasing_15; }
	inline void set_OnIncreasing_15(Action_t3226471752 * value)
	{
		___OnIncreasing_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnIncreasing_15, value);
	}

	inline static int32_t get_offset_of__score_16() { return static_cast<int32_t>(offsetof(ScoreManager_t4141729111, ____score_16)); }
	inline int32_t get__score_16() const { return ____score_16; }
	inline int32_t* get_address_of__score_16() { return &____score_16; }
	inline void set__score_16(int32_t value)
	{
		____score_16 = value;
	}

	inline static int32_t get_offset_of__originalScore_17() { return static_cast<int32_t>(offsetof(ScoreManager_t4141729111, ____originalScore_17)); }
	inline int32_t get__originalScore_17() const { return ____originalScore_17; }
	inline int32_t* get_address_of__originalScore_17() { return &____originalScore_17; }
	inline void set__originalScore_17(int32_t value)
	{
		____originalScore_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
