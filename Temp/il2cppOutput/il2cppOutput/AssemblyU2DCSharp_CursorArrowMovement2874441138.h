#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// JoystickController
struct JoystickController_t3035899094;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "AssemblyU2DCSharp_Saitama_MonoController2943651575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CursorArrowMovement
struct  CursorArrowMovement_t2874441138  : public MonoController_t2943651575
{
public:
	// JoystickController CursorArrowMovement::_jc
	JoystickController_t3035899094 * ____jc_3;
	// UnityEngine.RectTransform CursorArrowMovement::_crosshair
	RectTransform_t3349966182 * ____crosshair_4;
	// UnityEngine.UI.Image CursorArrowMovement::_image
	Image_t2042527209 * ____image_5;

public:
	inline static int32_t get_offset_of__jc_3() { return static_cast<int32_t>(offsetof(CursorArrowMovement_t2874441138, ____jc_3)); }
	inline JoystickController_t3035899094 * get__jc_3() const { return ____jc_3; }
	inline JoystickController_t3035899094 ** get_address_of__jc_3() { return &____jc_3; }
	inline void set__jc_3(JoystickController_t3035899094 * value)
	{
		____jc_3 = value;
		Il2CppCodeGenWriteBarrier(&____jc_3, value);
	}

	inline static int32_t get_offset_of__crosshair_4() { return static_cast<int32_t>(offsetof(CursorArrowMovement_t2874441138, ____crosshair_4)); }
	inline RectTransform_t3349966182 * get__crosshair_4() const { return ____crosshair_4; }
	inline RectTransform_t3349966182 ** get_address_of__crosshair_4() { return &____crosshair_4; }
	inline void set__crosshair_4(RectTransform_t3349966182 * value)
	{
		____crosshair_4 = value;
		Il2CppCodeGenWriteBarrier(&____crosshair_4, value);
	}

	inline static int32_t get_offset_of__image_5() { return static_cast<int32_t>(offsetof(CursorArrowMovement_t2874441138, ____image_5)); }
	inline Image_t2042527209 * get__image_5() const { return ____image_5; }
	inline Image_t2042527209 ** get_address_of__image_5() { return &____image_5; }
	inline void set__image_5(Image_t2042527209 * value)
	{
		____image_5 = value;
		Il2CppCodeGenWriteBarrier(&____image_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
