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
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoystickController
struct  JoystickController_t3035899094  : public MonoController_t2943651575
{
public:
	// UnityEngine.Vector2 JoystickController::_inputVector
	Vector2_t2243707579  ____inputVector_3;
	// UnityEngine.Vector2 JoystickController::_anchorVector
	Vector2_t2243707579  ____anchorVector_4;
	// UnityEngine.Quaternion JoystickController::_angle
	Quaternion_t4030073918  ____angle_5;
	// UnityEngine.RectTransform JoystickController::_joystickController
	RectTransform_t3349966182 * ____joystickController_6;
	// UnityEngine.RectTransform JoystickController::_smartphoneController
	RectTransform_t3349966182 * ____smartphoneController_7;
	// System.Single JoystickController::ratio
	float ___ratio_8;
	// System.Single JoystickController::sensitive
	float ___sensitive_9;
	// System.Boolean JoystickController::isDragging
	bool ___isDragging_10;
	// System.Boolean JoystickController::isPressUp
	bool ___isPressUp_11;
	// System.Boolean JoystickController::isPressDown
	bool ___isPressDown_12;

public:
	inline static int32_t get_offset_of__inputVector_3() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ____inputVector_3)); }
	inline Vector2_t2243707579  get__inputVector_3() const { return ____inputVector_3; }
	inline Vector2_t2243707579 * get_address_of__inputVector_3() { return &____inputVector_3; }
	inline void set__inputVector_3(Vector2_t2243707579  value)
	{
		____inputVector_3 = value;
	}

	inline static int32_t get_offset_of__anchorVector_4() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ____anchorVector_4)); }
	inline Vector2_t2243707579  get__anchorVector_4() const { return ____anchorVector_4; }
	inline Vector2_t2243707579 * get_address_of__anchorVector_4() { return &____anchorVector_4; }
	inline void set__anchorVector_4(Vector2_t2243707579  value)
	{
		____anchorVector_4 = value;
	}

	inline static int32_t get_offset_of__angle_5() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ____angle_5)); }
	inline Quaternion_t4030073918  get__angle_5() const { return ____angle_5; }
	inline Quaternion_t4030073918 * get_address_of__angle_5() { return &____angle_5; }
	inline void set__angle_5(Quaternion_t4030073918  value)
	{
		____angle_5 = value;
	}

	inline static int32_t get_offset_of__joystickController_6() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ____joystickController_6)); }
	inline RectTransform_t3349966182 * get__joystickController_6() const { return ____joystickController_6; }
	inline RectTransform_t3349966182 ** get_address_of__joystickController_6() { return &____joystickController_6; }
	inline void set__joystickController_6(RectTransform_t3349966182 * value)
	{
		____joystickController_6 = value;
		Il2CppCodeGenWriteBarrier(&____joystickController_6, value);
	}

	inline static int32_t get_offset_of__smartphoneController_7() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ____smartphoneController_7)); }
	inline RectTransform_t3349966182 * get__smartphoneController_7() const { return ____smartphoneController_7; }
	inline RectTransform_t3349966182 ** get_address_of__smartphoneController_7() { return &____smartphoneController_7; }
	inline void set__smartphoneController_7(RectTransform_t3349966182 * value)
	{
		____smartphoneController_7 = value;
		Il2CppCodeGenWriteBarrier(&____smartphoneController_7, value);
	}

	inline static int32_t get_offset_of_ratio_8() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ___ratio_8)); }
	inline float get_ratio_8() const { return ___ratio_8; }
	inline float* get_address_of_ratio_8() { return &___ratio_8; }
	inline void set_ratio_8(float value)
	{
		___ratio_8 = value;
	}

	inline static int32_t get_offset_of_sensitive_9() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ___sensitive_9)); }
	inline float get_sensitive_9() const { return ___sensitive_9; }
	inline float* get_address_of_sensitive_9() { return &___sensitive_9; }
	inline void set_sensitive_9(float value)
	{
		___sensitive_9 = value;
	}

	inline static int32_t get_offset_of_isDragging_10() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ___isDragging_10)); }
	inline bool get_isDragging_10() const { return ___isDragging_10; }
	inline bool* get_address_of_isDragging_10() { return &___isDragging_10; }
	inline void set_isDragging_10(bool value)
	{
		___isDragging_10 = value;
	}

	inline static int32_t get_offset_of_isPressUp_11() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ___isPressUp_11)); }
	inline bool get_isPressUp_11() const { return ___isPressUp_11; }
	inline bool* get_address_of_isPressUp_11() { return &___isPressUp_11; }
	inline void set_isPressUp_11(bool value)
	{
		___isPressUp_11 = value;
	}

	inline static int32_t get_offset_of_isPressDown_12() { return static_cast<int32_t>(offsetof(JoystickController_t3035899094, ___isPressDown_12)); }
	inline bool get_isPressDown_12() const { return ___isPressDown_12; }
	inline bool* get_address_of_isPressDown_12() { return &___isPressDown_12; }
	inline void set_isPressDown_12(bool value)
	{
		___isPressDown_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
