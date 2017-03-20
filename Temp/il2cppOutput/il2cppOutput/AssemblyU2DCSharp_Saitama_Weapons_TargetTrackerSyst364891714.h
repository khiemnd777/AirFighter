#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "AssemblyU2DCSharp_Saitama_Updater4201465179.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.TargetTrackerSystem
struct  TargetTrackerSystem_t364891714  : public Updater_t4201465179
{
public:
	// UnityEngine.RectTransform Saitama.Weapons.TargetTrackerSystem::_canvasUI
	RectTransform_t3349966182 * ____canvasUI_14;

public:
	inline static int32_t get_offset_of__canvasUI_14() { return static_cast<int32_t>(offsetof(TargetTrackerSystem_t364891714, ____canvasUI_14)); }
	inline RectTransform_t3349966182 * get__canvasUI_14() const { return ____canvasUI_14; }
	inline RectTransform_t3349966182 ** get_address_of__canvasUI_14() { return &____canvasUI_14; }
	inline void set__canvasUI_14(RectTransform_t3349966182 * value)
	{
		____canvasUI_14 = value;
		Il2CppCodeGenWriteBarrier(&____canvasUI_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
