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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseController
struct  MouseController_t67316327  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform MouseController::cursor
	RectTransform_t3349966182 * ___cursor_2;
	// UnityEngine.RectTransform MouseController::crosshair
	RectTransform_t3349966182 * ___crosshair_3;
	// System.Single MouseController::cursorRotationSpeed
	float ___cursorRotationSpeed_4;

public:
	inline static int32_t get_offset_of_cursor_2() { return static_cast<int32_t>(offsetof(MouseController_t67316327, ___cursor_2)); }
	inline RectTransform_t3349966182 * get_cursor_2() const { return ___cursor_2; }
	inline RectTransform_t3349966182 ** get_address_of_cursor_2() { return &___cursor_2; }
	inline void set_cursor_2(RectTransform_t3349966182 * value)
	{
		___cursor_2 = value;
		Il2CppCodeGenWriteBarrier(&___cursor_2, value);
	}

	inline static int32_t get_offset_of_crosshair_3() { return static_cast<int32_t>(offsetof(MouseController_t67316327, ___crosshair_3)); }
	inline RectTransform_t3349966182 * get_crosshair_3() const { return ___crosshair_3; }
	inline RectTransform_t3349966182 ** get_address_of_crosshair_3() { return &___crosshair_3; }
	inline void set_crosshair_3(RectTransform_t3349966182 * value)
	{
		___crosshair_3 = value;
		Il2CppCodeGenWriteBarrier(&___crosshair_3, value);
	}

	inline static int32_t get_offset_of_cursorRotationSpeed_4() { return static_cast<int32_t>(offsetof(MouseController_t67316327, ___cursorRotationSpeed_4)); }
	inline float get_cursorRotationSpeed_4() const { return ___cursorRotationSpeed_4; }
	inline float* get_address_of_cursorRotationSpeed_4() { return &___cursorRotationSpeed_4; }
	inline void set_cursorRotationSpeed_4(float value)
	{
		___cursorRotationSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
