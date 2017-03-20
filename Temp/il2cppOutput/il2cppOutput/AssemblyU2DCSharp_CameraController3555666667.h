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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// JoystickController
struct JoystickController_t3035899094;

#include "AssemblyU2DCSharp_Saitama_MonoController2943651575.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoController_t2943651575
{
public:
	// UnityEngine.Ray CameraController::ray
	Ray_t2469606224  ___ray_3;
	// UnityEngine.Transform CameraController::target
	Transform_t3275118058 * ___target_4;
	// System.Single CameraController::cameraDistance
	float ___cameraDistance_5;
	// System.Single CameraController::cameraHeight
	float ___cameraHeight_6;
	// System.Single CameraController::cameraLookAt
	float ___cameraLookAt_7;
	// System.Single CameraController::damping
	float ___damping_8;
	// System.Single CameraController::rotationDamping
	float ___rotationDamping_9;
	// System.Single CameraController::rotationSpeed
	float ___rotationSpeed_10;
	// UnityEngine.Vector3 CameraController::mousePosition
	Vector3_t2243707580  ___mousePosition_11;
	// UnityEngine.Vector3 CameraController::wantedPosition
	Vector3_t2243707580  ___wantedPosition_12;
	// UnityEngine.Quaternion CameraController::wantedRotation
	Quaternion_t4030073918  ___wantedRotation_13;
	// UnityEngine.Rigidbody CameraController::rigid
	Rigidbody_t4233889191 * ___rigid_14;
	// JoystickController CameraController::_joystickController
	JoystickController_t3035899094 * ____joystickController_15;
	// UnityEngine.Transform CameraController::_cachedTranform
	Transform_t3275118058 * ____cachedTranform_16;

public:
	inline static int32_t get_offset_of_ray_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___ray_3)); }
	inline Ray_t2469606224  get_ray_3() const { return ___ray_3; }
	inline Ray_t2469606224 * get_address_of_ray_3() { return &___ray_3; }
	inline void set_ray_3(Ray_t2469606224  value)
	{
		___ray_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___target_4)); }
	inline Transform_t3275118058 * get_target_4() const { return ___target_4; }
	inline Transform_t3275118058 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3275118058 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_cameraDistance_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___cameraDistance_5)); }
	inline float get_cameraDistance_5() const { return ___cameraDistance_5; }
	inline float* get_address_of_cameraDistance_5() { return &___cameraDistance_5; }
	inline void set_cameraDistance_5(float value)
	{
		___cameraDistance_5 = value;
	}

	inline static int32_t get_offset_of_cameraHeight_6() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___cameraHeight_6)); }
	inline float get_cameraHeight_6() const { return ___cameraHeight_6; }
	inline float* get_address_of_cameraHeight_6() { return &___cameraHeight_6; }
	inline void set_cameraHeight_6(float value)
	{
		___cameraHeight_6 = value;
	}

	inline static int32_t get_offset_of_cameraLookAt_7() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___cameraLookAt_7)); }
	inline float get_cameraLookAt_7() const { return ___cameraLookAt_7; }
	inline float* get_address_of_cameraLookAt_7() { return &___cameraLookAt_7; }
	inline void set_cameraLookAt_7(float value)
	{
		___cameraLookAt_7 = value;
	}

	inline static int32_t get_offset_of_damping_8() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___damping_8)); }
	inline float get_damping_8() const { return ___damping_8; }
	inline float* get_address_of_damping_8() { return &___damping_8; }
	inline void set_damping_8(float value)
	{
		___damping_8 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_9() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___rotationDamping_9)); }
	inline float get_rotationDamping_9() const { return ___rotationDamping_9; }
	inline float* get_address_of_rotationDamping_9() { return &___rotationDamping_9; }
	inline void set_rotationDamping_9(float value)
	{
		___rotationDamping_9 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_10() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___rotationSpeed_10)); }
	inline float get_rotationSpeed_10() const { return ___rotationSpeed_10; }
	inline float* get_address_of_rotationSpeed_10() { return &___rotationSpeed_10; }
	inline void set_rotationSpeed_10(float value)
	{
		___rotationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_mousePosition_11() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___mousePosition_11)); }
	inline Vector3_t2243707580  get_mousePosition_11() const { return ___mousePosition_11; }
	inline Vector3_t2243707580 * get_address_of_mousePosition_11() { return &___mousePosition_11; }
	inline void set_mousePosition_11(Vector3_t2243707580  value)
	{
		___mousePosition_11 = value;
	}

	inline static int32_t get_offset_of_wantedPosition_12() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___wantedPosition_12)); }
	inline Vector3_t2243707580  get_wantedPosition_12() const { return ___wantedPosition_12; }
	inline Vector3_t2243707580 * get_address_of_wantedPosition_12() { return &___wantedPosition_12; }
	inline void set_wantedPosition_12(Vector3_t2243707580  value)
	{
		___wantedPosition_12 = value;
	}

	inline static int32_t get_offset_of_wantedRotation_13() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___wantedRotation_13)); }
	inline Quaternion_t4030073918  get_wantedRotation_13() const { return ___wantedRotation_13; }
	inline Quaternion_t4030073918 * get_address_of_wantedRotation_13() { return &___wantedRotation_13; }
	inline void set_wantedRotation_13(Quaternion_t4030073918  value)
	{
		___wantedRotation_13 = value;
	}

	inline static int32_t get_offset_of_rigid_14() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___rigid_14)); }
	inline Rigidbody_t4233889191 * get_rigid_14() const { return ___rigid_14; }
	inline Rigidbody_t4233889191 ** get_address_of_rigid_14() { return &___rigid_14; }
	inline void set_rigid_14(Rigidbody_t4233889191 * value)
	{
		___rigid_14 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_14, value);
	}

	inline static int32_t get_offset_of__joystickController_15() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ____joystickController_15)); }
	inline JoystickController_t3035899094 * get__joystickController_15() const { return ____joystickController_15; }
	inline JoystickController_t3035899094 ** get_address_of__joystickController_15() { return &____joystickController_15; }
	inline void set__joystickController_15(JoystickController_t3035899094 * value)
	{
		____joystickController_15 = value;
		Il2CppCodeGenWriteBarrier(&____joystickController_15, value);
	}

	inline static int32_t get_offset_of__cachedTranform_16() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ____cachedTranform_16)); }
	inline Transform_t3275118058 * get__cachedTranform_16() const { return ____cachedTranform_16; }
	inline Transform_t3275118058 ** get_address_of__cachedTranform_16() { return &____cachedTranform_16; }
	inline void set__cachedTranform_16(Transform_t3275118058 * value)
	{
		____cachedTranform_16 = value;
		Il2CppCodeGenWriteBarrier(&____cachedTranform_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
