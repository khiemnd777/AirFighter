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

#include "AssemblyU2DCSharp_Saitama_MonoController2943651575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissleLaunchButton
struct  MissleLaunchButton_t4064247000  : public MonoController_t2943651575
{
public:
	// UnityEngine.RectTransform MissleLaunchButton::_smartphoneController
	RectTransform_t3349966182 * ____smartphoneController_3;
	// UnityEngine.RectTransform MissleLaunchButton::_btn
	RectTransform_t3349966182 * ____btn_4;
	// System.Boolean MissleLaunchButton::isTriggered
	bool ___isTriggered_5;

public:
	inline static int32_t get_offset_of__smartphoneController_3() { return static_cast<int32_t>(offsetof(MissleLaunchButton_t4064247000, ____smartphoneController_3)); }
	inline RectTransform_t3349966182 * get__smartphoneController_3() const { return ____smartphoneController_3; }
	inline RectTransform_t3349966182 ** get_address_of__smartphoneController_3() { return &____smartphoneController_3; }
	inline void set__smartphoneController_3(RectTransform_t3349966182 * value)
	{
		____smartphoneController_3 = value;
		Il2CppCodeGenWriteBarrier(&____smartphoneController_3, value);
	}

	inline static int32_t get_offset_of__btn_4() { return static_cast<int32_t>(offsetof(MissleLaunchButton_t4064247000, ____btn_4)); }
	inline RectTransform_t3349966182 * get__btn_4() const { return ____btn_4; }
	inline RectTransform_t3349966182 ** get_address_of__btn_4() { return &____btn_4; }
	inline void set__btn_4(RectTransform_t3349966182 * value)
	{
		____btn_4 = value;
		Il2CppCodeGenWriteBarrier(&____btn_4, value);
	}

	inline static int32_t get_offset_of_isTriggered_5() { return static_cast<int32_t>(offsetof(MissleLaunchButton_t4064247000, ___isTriggered_5)); }
	inline bool get_isTriggered_5() const { return ___isTriggered_5; }
	inline bool* get_address_of_isTriggered_5() { return &___isTriggered_5; }
	inline void set_isTriggered_5(bool value)
	{
		___isTriggered_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
