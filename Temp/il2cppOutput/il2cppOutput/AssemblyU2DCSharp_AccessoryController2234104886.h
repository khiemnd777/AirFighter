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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AccessoryController
struct  AccessoryController_t2234104886  : public MonoController_t2943651575
{
public:
	// UnityEngine.Vector2 AccessoryController::_inputVector
	Vector2_t2243707579  ____inputVector_3;
	// UnityEngine.Vector2 AccessoryController::_anchorVector
	Vector2_t2243707579  ____anchorVector_4;
	// UnityEngine.RectTransform AccessoryController::_joystickController
	RectTransform_t3349966182 * ____joystickController_5;
	// UnityEngine.RectTransform AccessoryController::_smartphoneController
	RectTransform_t3349966182 * ____smartphoneController_6;
	// System.Single AccessoryController::_timeHoldDown
	float ____timeHoldDown_7;
	// System.Boolean AccessoryController::_isSwiped
	bool ____isSwiped_8;
	// System.Single AccessoryController::ratio
	float ___ratio_9;
	// System.Single AccessoryController::sensitive
	float ___sensitive_10;
	// System.Boolean AccessoryController::isSwipingUp
	bool ___isSwipingUp_11;
	// System.Boolean AccessoryController::isSwipingDown
	bool ___isSwipingDown_12;
	// System.Boolean AccessoryController::isSwipingLeft
	bool ___isSwipingLeft_13;
	// System.Boolean AccessoryController::isSwipingRight
	bool ___isSwipingRight_14;

public:
	inline static int32_t get_offset_of__inputVector_3() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ____inputVector_3)); }
	inline Vector2_t2243707579  get__inputVector_3() const { return ____inputVector_3; }
	inline Vector2_t2243707579 * get_address_of__inputVector_3() { return &____inputVector_3; }
	inline void set__inputVector_3(Vector2_t2243707579  value)
	{
		____inputVector_3 = value;
	}

	inline static int32_t get_offset_of__anchorVector_4() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ____anchorVector_4)); }
	inline Vector2_t2243707579  get__anchorVector_4() const { return ____anchorVector_4; }
	inline Vector2_t2243707579 * get_address_of__anchorVector_4() { return &____anchorVector_4; }
	inline void set__anchorVector_4(Vector2_t2243707579  value)
	{
		____anchorVector_4 = value;
	}

	inline static int32_t get_offset_of__joystickController_5() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ____joystickController_5)); }
	inline RectTransform_t3349966182 * get__joystickController_5() const { return ____joystickController_5; }
	inline RectTransform_t3349966182 ** get_address_of__joystickController_5() { return &____joystickController_5; }
	inline void set__joystickController_5(RectTransform_t3349966182 * value)
	{
		____joystickController_5 = value;
		Il2CppCodeGenWriteBarrier(&____joystickController_5, value);
	}

	inline static int32_t get_offset_of__smartphoneController_6() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ____smartphoneController_6)); }
	inline RectTransform_t3349966182 * get__smartphoneController_6() const { return ____smartphoneController_6; }
	inline RectTransform_t3349966182 ** get_address_of__smartphoneController_6() { return &____smartphoneController_6; }
	inline void set__smartphoneController_6(RectTransform_t3349966182 * value)
	{
		____smartphoneController_6 = value;
		Il2CppCodeGenWriteBarrier(&____smartphoneController_6, value);
	}

	inline static int32_t get_offset_of__timeHoldDown_7() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ____timeHoldDown_7)); }
	inline float get__timeHoldDown_7() const { return ____timeHoldDown_7; }
	inline float* get_address_of__timeHoldDown_7() { return &____timeHoldDown_7; }
	inline void set__timeHoldDown_7(float value)
	{
		____timeHoldDown_7 = value;
	}

	inline static int32_t get_offset_of__isSwiped_8() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ____isSwiped_8)); }
	inline bool get__isSwiped_8() const { return ____isSwiped_8; }
	inline bool* get_address_of__isSwiped_8() { return &____isSwiped_8; }
	inline void set__isSwiped_8(bool value)
	{
		____isSwiped_8 = value;
	}

	inline static int32_t get_offset_of_ratio_9() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ___ratio_9)); }
	inline float get_ratio_9() const { return ___ratio_9; }
	inline float* get_address_of_ratio_9() { return &___ratio_9; }
	inline void set_ratio_9(float value)
	{
		___ratio_9 = value;
	}

	inline static int32_t get_offset_of_sensitive_10() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ___sensitive_10)); }
	inline float get_sensitive_10() const { return ___sensitive_10; }
	inline float* get_address_of_sensitive_10() { return &___sensitive_10; }
	inline void set_sensitive_10(float value)
	{
		___sensitive_10 = value;
	}

	inline static int32_t get_offset_of_isSwipingUp_11() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ___isSwipingUp_11)); }
	inline bool get_isSwipingUp_11() const { return ___isSwipingUp_11; }
	inline bool* get_address_of_isSwipingUp_11() { return &___isSwipingUp_11; }
	inline void set_isSwipingUp_11(bool value)
	{
		___isSwipingUp_11 = value;
	}

	inline static int32_t get_offset_of_isSwipingDown_12() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ___isSwipingDown_12)); }
	inline bool get_isSwipingDown_12() const { return ___isSwipingDown_12; }
	inline bool* get_address_of_isSwipingDown_12() { return &___isSwipingDown_12; }
	inline void set_isSwipingDown_12(bool value)
	{
		___isSwipingDown_12 = value;
	}

	inline static int32_t get_offset_of_isSwipingLeft_13() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ___isSwipingLeft_13)); }
	inline bool get_isSwipingLeft_13() const { return ___isSwipingLeft_13; }
	inline bool* get_address_of_isSwipingLeft_13() { return &___isSwipingLeft_13; }
	inline void set_isSwipingLeft_13(bool value)
	{
		___isSwipingLeft_13 = value;
	}

	inline static int32_t get_offset_of_isSwipingRight_14() { return static_cast<int32_t>(offsetof(AccessoryController_t2234104886, ___isSwipingRight_14)); }
	inline bool get_isSwipingRight_14() const { return ___isSwipingRight_14; }
	inline bool* get_address_of_isSwipingRight_14() { return &___isSwipingRight_14; }
	inline void set_isSwipingRight_14(bool value)
	{
		___isSwipingRight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
