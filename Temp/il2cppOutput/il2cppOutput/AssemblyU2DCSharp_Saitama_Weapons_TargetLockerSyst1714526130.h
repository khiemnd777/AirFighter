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
// System.Collections.Generic.List`1<Saitama.Weapons.TargetLocker>
struct List_1_t1602014753;

#include "AssemblyU2DCSharp_Saitama_Updater4201465179.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.TargetLockerSystem
struct  TargetLockerSystem_t1714526130  : public Updater_t4201465179
{
public:
	// UnityEngine.RectTransform Saitama.Weapons.TargetLockerSystem::_targetLockerUI
	RectTransform_t3349966182 * ____targetLockerUI_14;
	// UnityEngine.RectTransform Saitama.Weapons.TargetLockerSystem::_canvasUI
	RectTransform_t3349966182 * ____canvasUI_15;
	// UnityEngine.RectTransform Saitama.Weapons.TargetLockerSystem::_crosshair
	RectTransform_t3349966182 * ____crosshair_16;
	// System.Int32 Saitama.Weapons.TargetLockerSystem::_missleSlot
	int32_t ____missleSlot_17;
	// System.Collections.Generic.List`1<Saitama.Weapons.TargetLocker> Saitama.Weapons.TargetLockerSystem::_lockers
	List_1_t1602014753 * ____lockers_18;
	// System.Boolean Saitama.Weapons.TargetLockerSystem::_useLockerUI
	bool ____useLockerUI_19;

public:
	inline static int32_t get_offset_of__targetLockerUI_14() { return static_cast<int32_t>(offsetof(TargetLockerSystem_t1714526130, ____targetLockerUI_14)); }
	inline RectTransform_t3349966182 * get__targetLockerUI_14() const { return ____targetLockerUI_14; }
	inline RectTransform_t3349966182 ** get_address_of__targetLockerUI_14() { return &____targetLockerUI_14; }
	inline void set__targetLockerUI_14(RectTransform_t3349966182 * value)
	{
		____targetLockerUI_14 = value;
		Il2CppCodeGenWriteBarrier(&____targetLockerUI_14, value);
	}

	inline static int32_t get_offset_of__canvasUI_15() { return static_cast<int32_t>(offsetof(TargetLockerSystem_t1714526130, ____canvasUI_15)); }
	inline RectTransform_t3349966182 * get__canvasUI_15() const { return ____canvasUI_15; }
	inline RectTransform_t3349966182 ** get_address_of__canvasUI_15() { return &____canvasUI_15; }
	inline void set__canvasUI_15(RectTransform_t3349966182 * value)
	{
		____canvasUI_15 = value;
		Il2CppCodeGenWriteBarrier(&____canvasUI_15, value);
	}

	inline static int32_t get_offset_of__crosshair_16() { return static_cast<int32_t>(offsetof(TargetLockerSystem_t1714526130, ____crosshair_16)); }
	inline RectTransform_t3349966182 * get__crosshair_16() const { return ____crosshair_16; }
	inline RectTransform_t3349966182 ** get_address_of__crosshair_16() { return &____crosshair_16; }
	inline void set__crosshair_16(RectTransform_t3349966182 * value)
	{
		____crosshair_16 = value;
		Il2CppCodeGenWriteBarrier(&____crosshair_16, value);
	}

	inline static int32_t get_offset_of__missleSlot_17() { return static_cast<int32_t>(offsetof(TargetLockerSystem_t1714526130, ____missleSlot_17)); }
	inline int32_t get__missleSlot_17() const { return ____missleSlot_17; }
	inline int32_t* get_address_of__missleSlot_17() { return &____missleSlot_17; }
	inline void set__missleSlot_17(int32_t value)
	{
		____missleSlot_17 = value;
	}

	inline static int32_t get_offset_of__lockers_18() { return static_cast<int32_t>(offsetof(TargetLockerSystem_t1714526130, ____lockers_18)); }
	inline List_1_t1602014753 * get__lockers_18() const { return ____lockers_18; }
	inline List_1_t1602014753 ** get_address_of__lockers_18() { return &____lockers_18; }
	inline void set__lockers_18(List_1_t1602014753 * value)
	{
		____lockers_18 = value;
		Il2CppCodeGenWriteBarrier(&____lockers_18, value);
	}

	inline static int32_t get_offset_of__useLockerUI_19() { return static_cast<int32_t>(offsetof(TargetLockerSystem_t1714526130, ____useLockerUI_19)); }
	inline bool get__useLockerUI_19() const { return ____useLockerUI_19; }
	inline bool* get_address_of__useLockerUI_19() { return &____useLockerUI_19; }
	inline void set__useLockerUI_19(bool value)
	{
		____useLockerUI_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
