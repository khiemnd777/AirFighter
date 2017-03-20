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
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// Saitama.Ships.Ship
struct Ship_t4047683708;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Saitama.FlyableControls.ShipControls.ShipControl
struct ShipControl_t2738676427;
// Saitama.Weapons.TargetLockerSystem
struct TargetLockerSystem_t1714526130;
// Saitama.Weapons.GunPivotTrackerSystem
struct GunPivotTrackerSystem_t2625016341;
// Saitama.Weapons.MachineGun.MachineGun
struct MachineGun_t2861834475;
// Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler
struct AirToAirMissleHandler_t2456836188;
// Saitama.LevelManager
struct LevelManager_t4146676661;
// System.Action
struct Action_t3226471752;
// System.Action`2<Saitama.InputState,Saitama.Ships.Ship>
struct Action_2_t800392020;
// System.Action`3<Saitama.InputState,Saitama.Ships.Ship,System.Single>
struct Action_3_t2414724281;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipController
struct  ShipController_t3277973446  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ShipController::ambientSpeed
	float ___ambientSpeed_2;
	// System.Single ShipController::ambientMaxSpeed
	float ___ambientMaxSpeed_3;
	// System.Single ShipController::ambientMinSpeed
	float ___ambientMinSpeed_4;
	// System.Single ShipController::rotationSpeed
	float ___rotationSpeed_5;
	// System.Single ShipController::shiftedRotationExtraSpeed
	float ___shiftedRotationExtraSpeed_6;
	// System.Single ShipController::rollSpeed
	float ___rollSpeed_7;
	// System.Single ShipController::smoothZToZero
	float ___smoothZToZero_8;
	// System.Single ShipController::shiftDistance
	float ___shiftDistance_9;
	// System.Single ShipController::shiftAngleLeft
	float ___shiftAngleLeft_10;
	// System.Single ShipController::shiftAngleRight
	float ___shiftAngleRight_11;
	// UnityEngine.Transform ShipController::gunLeft
	Transform_t3275118058 * ___gunLeft_12;
	// UnityEngine.Transform ShipController::gunRight
	Transform_t3275118058 * ___gunRight_13;
	// UnityEngine.Transform ShipController::bullet
	Transform_t3275118058 * ___bullet_14;
	// UnityEngine.LayerMask ShipController::bulletTargets
	LayerMask_t3188175821  ___bulletTargets_15;
	// System.Single ShipController::bulletSpeed
	float ___bulletSpeed_16;
	// System.Single ShipController::bulletLifeTime
	float ___bulletLifeTime_17;
	// System.Single ShipController::bulletTimeBetweenExecute
	float ___bulletTimeBetweenExecute_18;
	// UnityEngine.Transform ShipController::missleHandlerLeft
	Transform_t3275118058 * ___missleHandlerLeft_19;
	// UnityEngine.Transform ShipController::missleHandlerRight
	Transform_t3275118058 * ___missleHandlerRight_20;
	// UnityEngine.Transform ShipController::missle
	Transform_t3275118058 * ___missle_21;
	// UnityEngine.LayerMask ShipController::missleTargets
	LayerMask_t3188175821  ___missleTargets_22;
	// System.Single ShipController::missleSpeed
	float ___missleSpeed_23;
	// System.Single ShipController::missleLifeTime
	float ___missleLifeTime_24;
	// System.Single ShipController::missleTimeBetweenExecute
	float ___missleTimeBetweenExecute_25;
	// UnityEngine.Camera ShipController::screenCamera
	Camera_t189460977 * ___screenCamera_26;
	// UnityEngine.Transform ShipController::shipComponent
	Transform_t3275118058 * ___shipComponent_27;
	// UnityEngine.RectTransform ShipController::canvasUI
	RectTransform_t3349966182 * ___canvasUI_28;
	// UnityEngine.RectTransform ShipController::crosshairUI
	RectTransform_t3349966182 * ___crosshairUI_29;
	// UnityEngine.RectTransform ShipController::targetLockerUI
	RectTransform_t3349966182 * ___targetLockerUI_30;
	// UnityEngine.RectTransform ShipController::targetTrackerUI
	RectTransform_t3349966182 * ___targetTrackerUI_31;
	// Saitama.Ships.Ship ShipController::ship
	Ship_t4047683708 * ___ship_32;
	// UnityEngine.Vector3 ShipController::crosshairMinBound
	Vector3_t2243707580  ___crosshairMinBound_33;
	// UnityEngine.Vector3 ShipController::crosshairMaxBound
	Vector3_t2243707580  ___crosshairMaxBound_34;
	// UnityEngine.Rigidbody ShipController::rigid
	Rigidbody_t4233889191 * ___rigid_35;
	// UnityEngine.Vector3 ShipController::mousePosition
	Vector3_t2243707580  ___mousePosition_36;
	// Saitama.FlyableControls.ShipControls.ShipControl ShipController::_shipControl
	ShipControl_t2738676427 * ____shipControl_37;
	// Saitama.Weapons.TargetLockerSystem ShipController::_targetLocker
	TargetLockerSystem_t1714526130 * ____targetLocker_38;
	// Saitama.Weapons.GunPivotTrackerSystem ShipController::_gunPivotTracker
	GunPivotTrackerSystem_t2625016341 * ____gunPivotTracker_39;
	// Saitama.Weapons.MachineGun.MachineGun ShipController::_leftGun
	MachineGun_t2861834475 * ____leftGun_40;
	// Saitama.Weapons.MachineGun.MachineGun ShipController::_rightGun
	MachineGun_t2861834475 * ____rightGun_41;
	// Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler ShipController::_leftMissleHandler
	AirToAirMissleHandler_t2456836188 * ____leftMissleHandler_42;
	// Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler ShipController::_rightMissleHandler
	AirToAirMissleHandler_t2456836188 * ____rightMissleHandler_43;
	// Saitama.LevelManager ShipController::_levelManager
	LevelManager_t4146676661 * ____levelManager_44;

public:
	inline static int32_t get_offset_of_ambientSpeed_2() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___ambientSpeed_2)); }
	inline float get_ambientSpeed_2() const { return ___ambientSpeed_2; }
	inline float* get_address_of_ambientSpeed_2() { return &___ambientSpeed_2; }
	inline void set_ambientSpeed_2(float value)
	{
		___ambientSpeed_2 = value;
	}

	inline static int32_t get_offset_of_ambientMaxSpeed_3() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___ambientMaxSpeed_3)); }
	inline float get_ambientMaxSpeed_3() const { return ___ambientMaxSpeed_3; }
	inline float* get_address_of_ambientMaxSpeed_3() { return &___ambientMaxSpeed_3; }
	inline void set_ambientMaxSpeed_3(float value)
	{
		___ambientMaxSpeed_3 = value;
	}

	inline static int32_t get_offset_of_ambientMinSpeed_4() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___ambientMinSpeed_4)); }
	inline float get_ambientMinSpeed_4() const { return ___ambientMinSpeed_4; }
	inline float* get_address_of_ambientMinSpeed_4() { return &___ambientMinSpeed_4; }
	inline void set_ambientMinSpeed_4(float value)
	{
		___ambientMinSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_5() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___rotationSpeed_5)); }
	inline float get_rotationSpeed_5() const { return ___rotationSpeed_5; }
	inline float* get_address_of_rotationSpeed_5() { return &___rotationSpeed_5; }
	inline void set_rotationSpeed_5(float value)
	{
		___rotationSpeed_5 = value;
	}

	inline static int32_t get_offset_of_shiftedRotationExtraSpeed_6() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___shiftedRotationExtraSpeed_6)); }
	inline float get_shiftedRotationExtraSpeed_6() const { return ___shiftedRotationExtraSpeed_6; }
	inline float* get_address_of_shiftedRotationExtraSpeed_6() { return &___shiftedRotationExtraSpeed_6; }
	inline void set_shiftedRotationExtraSpeed_6(float value)
	{
		___shiftedRotationExtraSpeed_6 = value;
	}

	inline static int32_t get_offset_of_rollSpeed_7() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___rollSpeed_7)); }
	inline float get_rollSpeed_7() const { return ___rollSpeed_7; }
	inline float* get_address_of_rollSpeed_7() { return &___rollSpeed_7; }
	inline void set_rollSpeed_7(float value)
	{
		___rollSpeed_7 = value;
	}

	inline static int32_t get_offset_of_smoothZToZero_8() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___smoothZToZero_8)); }
	inline float get_smoothZToZero_8() const { return ___smoothZToZero_8; }
	inline float* get_address_of_smoothZToZero_8() { return &___smoothZToZero_8; }
	inline void set_smoothZToZero_8(float value)
	{
		___smoothZToZero_8 = value;
	}

	inline static int32_t get_offset_of_shiftDistance_9() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___shiftDistance_9)); }
	inline float get_shiftDistance_9() const { return ___shiftDistance_9; }
	inline float* get_address_of_shiftDistance_9() { return &___shiftDistance_9; }
	inline void set_shiftDistance_9(float value)
	{
		___shiftDistance_9 = value;
	}

	inline static int32_t get_offset_of_shiftAngleLeft_10() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___shiftAngleLeft_10)); }
	inline float get_shiftAngleLeft_10() const { return ___shiftAngleLeft_10; }
	inline float* get_address_of_shiftAngleLeft_10() { return &___shiftAngleLeft_10; }
	inline void set_shiftAngleLeft_10(float value)
	{
		___shiftAngleLeft_10 = value;
	}

	inline static int32_t get_offset_of_shiftAngleRight_11() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___shiftAngleRight_11)); }
	inline float get_shiftAngleRight_11() const { return ___shiftAngleRight_11; }
	inline float* get_address_of_shiftAngleRight_11() { return &___shiftAngleRight_11; }
	inline void set_shiftAngleRight_11(float value)
	{
		___shiftAngleRight_11 = value;
	}

	inline static int32_t get_offset_of_gunLeft_12() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___gunLeft_12)); }
	inline Transform_t3275118058 * get_gunLeft_12() const { return ___gunLeft_12; }
	inline Transform_t3275118058 ** get_address_of_gunLeft_12() { return &___gunLeft_12; }
	inline void set_gunLeft_12(Transform_t3275118058 * value)
	{
		___gunLeft_12 = value;
		Il2CppCodeGenWriteBarrier(&___gunLeft_12, value);
	}

	inline static int32_t get_offset_of_gunRight_13() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___gunRight_13)); }
	inline Transform_t3275118058 * get_gunRight_13() const { return ___gunRight_13; }
	inline Transform_t3275118058 ** get_address_of_gunRight_13() { return &___gunRight_13; }
	inline void set_gunRight_13(Transform_t3275118058 * value)
	{
		___gunRight_13 = value;
		Il2CppCodeGenWriteBarrier(&___gunRight_13, value);
	}

	inline static int32_t get_offset_of_bullet_14() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___bullet_14)); }
	inline Transform_t3275118058 * get_bullet_14() const { return ___bullet_14; }
	inline Transform_t3275118058 ** get_address_of_bullet_14() { return &___bullet_14; }
	inline void set_bullet_14(Transform_t3275118058 * value)
	{
		___bullet_14 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_14, value);
	}

	inline static int32_t get_offset_of_bulletTargets_15() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___bulletTargets_15)); }
	inline LayerMask_t3188175821  get_bulletTargets_15() const { return ___bulletTargets_15; }
	inline LayerMask_t3188175821 * get_address_of_bulletTargets_15() { return &___bulletTargets_15; }
	inline void set_bulletTargets_15(LayerMask_t3188175821  value)
	{
		___bulletTargets_15 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_16() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___bulletSpeed_16)); }
	inline float get_bulletSpeed_16() const { return ___bulletSpeed_16; }
	inline float* get_address_of_bulletSpeed_16() { return &___bulletSpeed_16; }
	inline void set_bulletSpeed_16(float value)
	{
		___bulletSpeed_16 = value;
	}

	inline static int32_t get_offset_of_bulletLifeTime_17() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___bulletLifeTime_17)); }
	inline float get_bulletLifeTime_17() const { return ___bulletLifeTime_17; }
	inline float* get_address_of_bulletLifeTime_17() { return &___bulletLifeTime_17; }
	inline void set_bulletLifeTime_17(float value)
	{
		___bulletLifeTime_17 = value;
	}

	inline static int32_t get_offset_of_bulletTimeBetweenExecute_18() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___bulletTimeBetweenExecute_18)); }
	inline float get_bulletTimeBetweenExecute_18() const { return ___bulletTimeBetweenExecute_18; }
	inline float* get_address_of_bulletTimeBetweenExecute_18() { return &___bulletTimeBetweenExecute_18; }
	inline void set_bulletTimeBetweenExecute_18(float value)
	{
		___bulletTimeBetweenExecute_18 = value;
	}

	inline static int32_t get_offset_of_missleHandlerLeft_19() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___missleHandlerLeft_19)); }
	inline Transform_t3275118058 * get_missleHandlerLeft_19() const { return ___missleHandlerLeft_19; }
	inline Transform_t3275118058 ** get_address_of_missleHandlerLeft_19() { return &___missleHandlerLeft_19; }
	inline void set_missleHandlerLeft_19(Transform_t3275118058 * value)
	{
		___missleHandlerLeft_19 = value;
		Il2CppCodeGenWriteBarrier(&___missleHandlerLeft_19, value);
	}

	inline static int32_t get_offset_of_missleHandlerRight_20() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___missleHandlerRight_20)); }
	inline Transform_t3275118058 * get_missleHandlerRight_20() const { return ___missleHandlerRight_20; }
	inline Transform_t3275118058 ** get_address_of_missleHandlerRight_20() { return &___missleHandlerRight_20; }
	inline void set_missleHandlerRight_20(Transform_t3275118058 * value)
	{
		___missleHandlerRight_20 = value;
		Il2CppCodeGenWriteBarrier(&___missleHandlerRight_20, value);
	}

	inline static int32_t get_offset_of_missle_21() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___missle_21)); }
	inline Transform_t3275118058 * get_missle_21() const { return ___missle_21; }
	inline Transform_t3275118058 ** get_address_of_missle_21() { return &___missle_21; }
	inline void set_missle_21(Transform_t3275118058 * value)
	{
		___missle_21 = value;
		Il2CppCodeGenWriteBarrier(&___missle_21, value);
	}

	inline static int32_t get_offset_of_missleTargets_22() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___missleTargets_22)); }
	inline LayerMask_t3188175821  get_missleTargets_22() const { return ___missleTargets_22; }
	inline LayerMask_t3188175821 * get_address_of_missleTargets_22() { return &___missleTargets_22; }
	inline void set_missleTargets_22(LayerMask_t3188175821  value)
	{
		___missleTargets_22 = value;
	}

	inline static int32_t get_offset_of_missleSpeed_23() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___missleSpeed_23)); }
	inline float get_missleSpeed_23() const { return ___missleSpeed_23; }
	inline float* get_address_of_missleSpeed_23() { return &___missleSpeed_23; }
	inline void set_missleSpeed_23(float value)
	{
		___missleSpeed_23 = value;
	}

	inline static int32_t get_offset_of_missleLifeTime_24() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___missleLifeTime_24)); }
	inline float get_missleLifeTime_24() const { return ___missleLifeTime_24; }
	inline float* get_address_of_missleLifeTime_24() { return &___missleLifeTime_24; }
	inline void set_missleLifeTime_24(float value)
	{
		___missleLifeTime_24 = value;
	}

	inline static int32_t get_offset_of_missleTimeBetweenExecute_25() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___missleTimeBetweenExecute_25)); }
	inline float get_missleTimeBetweenExecute_25() const { return ___missleTimeBetweenExecute_25; }
	inline float* get_address_of_missleTimeBetweenExecute_25() { return &___missleTimeBetweenExecute_25; }
	inline void set_missleTimeBetweenExecute_25(float value)
	{
		___missleTimeBetweenExecute_25 = value;
	}

	inline static int32_t get_offset_of_screenCamera_26() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___screenCamera_26)); }
	inline Camera_t189460977 * get_screenCamera_26() const { return ___screenCamera_26; }
	inline Camera_t189460977 ** get_address_of_screenCamera_26() { return &___screenCamera_26; }
	inline void set_screenCamera_26(Camera_t189460977 * value)
	{
		___screenCamera_26 = value;
		Il2CppCodeGenWriteBarrier(&___screenCamera_26, value);
	}

	inline static int32_t get_offset_of_shipComponent_27() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___shipComponent_27)); }
	inline Transform_t3275118058 * get_shipComponent_27() const { return ___shipComponent_27; }
	inline Transform_t3275118058 ** get_address_of_shipComponent_27() { return &___shipComponent_27; }
	inline void set_shipComponent_27(Transform_t3275118058 * value)
	{
		___shipComponent_27 = value;
		Il2CppCodeGenWriteBarrier(&___shipComponent_27, value);
	}

	inline static int32_t get_offset_of_canvasUI_28() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___canvasUI_28)); }
	inline RectTransform_t3349966182 * get_canvasUI_28() const { return ___canvasUI_28; }
	inline RectTransform_t3349966182 ** get_address_of_canvasUI_28() { return &___canvasUI_28; }
	inline void set_canvasUI_28(RectTransform_t3349966182 * value)
	{
		___canvasUI_28 = value;
		Il2CppCodeGenWriteBarrier(&___canvasUI_28, value);
	}

	inline static int32_t get_offset_of_crosshairUI_29() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___crosshairUI_29)); }
	inline RectTransform_t3349966182 * get_crosshairUI_29() const { return ___crosshairUI_29; }
	inline RectTransform_t3349966182 ** get_address_of_crosshairUI_29() { return &___crosshairUI_29; }
	inline void set_crosshairUI_29(RectTransform_t3349966182 * value)
	{
		___crosshairUI_29 = value;
		Il2CppCodeGenWriteBarrier(&___crosshairUI_29, value);
	}

	inline static int32_t get_offset_of_targetLockerUI_30() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___targetLockerUI_30)); }
	inline RectTransform_t3349966182 * get_targetLockerUI_30() const { return ___targetLockerUI_30; }
	inline RectTransform_t3349966182 ** get_address_of_targetLockerUI_30() { return &___targetLockerUI_30; }
	inline void set_targetLockerUI_30(RectTransform_t3349966182 * value)
	{
		___targetLockerUI_30 = value;
		Il2CppCodeGenWriteBarrier(&___targetLockerUI_30, value);
	}

	inline static int32_t get_offset_of_targetTrackerUI_31() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___targetTrackerUI_31)); }
	inline RectTransform_t3349966182 * get_targetTrackerUI_31() const { return ___targetTrackerUI_31; }
	inline RectTransform_t3349966182 ** get_address_of_targetTrackerUI_31() { return &___targetTrackerUI_31; }
	inline void set_targetTrackerUI_31(RectTransform_t3349966182 * value)
	{
		___targetTrackerUI_31 = value;
		Il2CppCodeGenWriteBarrier(&___targetTrackerUI_31, value);
	}

	inline static int32_t get_offset_of_ship_32() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___ship_32)); }
	inline Ship_t4047683708 * get_ship_32() const { return ___ship_32; }
	inline Ship_t4047683708 ** get_address_of_ship_32() { return &___ship_32; }
	inline void set_ship_32(Ship_t4047683708 * value)
	{
		___ship_32 = value;
		Il2CppCodeGenWriteBarrier(&___ship_32, value);
	}

	inline static int32_t get_offset_of_crosshairMinBound_33() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___crosshairMinBound_33)); }
	inline Vector3_t2243707580  get_crosshairMinBound_33() const { return ___crosshairMinBound_33; }
	inline Vector3_t2243707580 * get_address_of_crosshairMinBound_33() { return &___crosshairMinBound_33; }
	inline void set_crosshairMinBound_33(Vector3_t2243707580  value)
	{
		___crosshairMinBound_33 = value;
	}

	inline static int32_t get_offset_of_crosshairMaxBound_34() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___crosshairMaxBound_34)); }
	inline Vector3_t2243707580  get_crosshairMaxBound_34() const { return ___crosshairMaxBound_34; }
	inline Vector3_t2243707580 * get_address_of_crosshairMaxBound_34() { return &___crosshairMaxBound_34; }
	inline void set_crosshairMaxBound_34(Vector3_t2243707580  value)
	{
		___crosshairMaxBound_34 = value;
	}

	inline static int32_t get_offset_of_rigid_35() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___rigid_35)); }
	inline Rigidbody_t4233889191 * get_rigid_35() const { return ___rigid_35; }
	inline Rigidbody_t4233889191 ** get_address_of_rigid_35() { return &___rigid_35; }
	inline void set_rigid_35(Rigidbody_t4233889191 * value)
	{
		___rigid_35 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_35, value);
	}

	inline static int32_t get_offset_of_mousePosition_36() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___mousePosition_36)); }
	inline Vector3_t2243707580  get_mousePosition_36() const { return ___mousePosition_36; }
	inline Vector3_t2243707580 * get_address_of_mousePosition_36() { return &___mousePosition_36; }
	inline void set_mousePosition_36(Vector3_t2243707580  value)
	{
		___mousePosition_36 = value;
	}

	inline static int32_t get_offset_of__shipControl_37() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____shipControl_37)); }
	inline ShipControl_t2738676427 * get__shipControl_37() const { return ____shipControl_37; }
	inline ShipControl_t2738676427 ** get_address_of__shipControl_37() { return &____shipControl_37; }
	inline void set__shipControl_37(ShipControl_t2738676427 * value)
	{
		____shipControl_37 = value;
		Il2CppCodeGenWriteBarrier(&____shipControl_37, value);
	}

	inline static int32_t get_offset_of__targetLocker_38() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____targetLocker_38)); }
	inline TargetLockerSystem_t1714526130 * get__targetLocker_38() const { return ____targetLocker_38; }
	inline TargetLockerSystem_t1714526130 ** get_address_of__targetLocker_38() { return &____targetLocker_38; }
	inline void set__targetLocker_38(TargetLockerSystem_t1714526130 * value)
	{
		____targetLocker_38 = value;
		Il2CppCodeGenWriteBarrier(&____targetLocker_38, value);
	}

	inline static int32_t get_offset_of__gunPivotTracker_39() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____gunPivotTracker_39)); }
	inline GunPivotTrackerSystem_t2625016341 * get__gunPivotTracker_39() const { return ____gunPivotTracker_39; }
	inline GunPivotTrackerSystem_t2625016341 ** get_address_of__gunPivotTracker_39() { return &____gunPivotTracker_39; }
	inline void set__gunPivotTracker_39(GunPivotTrackerSystem_t2625016341 * value)
	{
		____gunPivotTracker_39 = value;
		Il2CppCodeGenWriteBarrier(&____gunPivotTracker_39, value);
	}

	inline static int32_t get_offset_of__leftGun_40() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____leftGun_40)); }
	inline MachineGun_t2861834475 * get__leftGun_40() const { return ____leftGun_40; }
	inline MachineGun_t2861834475 ** get_address_of__leftGun_40() { return &____leftGun_40; }
	inline void set__leftGun_40(MachineGun_t2861834475 * value)
	{
		____leftGun_40 = value;
		Il2CppCodeGenWriteBarrier(&____leftGun_40, value);
	}

	inline static int32_t get_offset_of__rightGun_41() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____rightGun_41)); }
	inline MachineGun_t2861834475 * get__rightGun_41() const { return ____rightGun_41; }
	inline MachineGun_t2861834475 ** get_address_of__rightGun_41() { return &____rightGun_41; }
	inline void set__rightGun_41(MachineGun_t2861834475 * value)
	{
		____rightGun_41 = value;
		Il2CppCodeGenWriteBarrier(&____rightGun_41, value);
	}

	inline static int32_t get_offset_of__leftMissleHandler_42() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____leftMissleHandler_42)); }
	inline AirToAirMissleHandler_t2456836188 * get__leftMissleHandler_42() const { return ____leftMissleHandler_42; }
	inline AirToAirMissleHandler_t2456836188 ** get_address_of__leftMissleHandler_42() { return &____leftMissleHandler_42; }
	inline void set__leftMissleHandler_42(AirToAirMissleHandler_t2456836188 * value)
	{
		____leftMissleHandler_42 = value;
		Il2CppCodeGenWriteBarrier(&____leftMissleHandler_42, value);
	}

	inline static int32_t get_offset_of__rightMissleHandler_43() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____rightMissleHandler_43)); }
	inline AirToAirMissleHandler_t2456836188 * get__rightMissleHandler_43() const { return ____rightMissleHandler_43; }
	inline AirToAirMissleHandler_t2456836188 ** get_address_of__rightMissleHandler_43() { return &____rightMissleHandler_43; }
	inline void set__rightMissleHandler_43(AirToAirMissleHandler_t2456836188 * value)
	{
		____rightMissleHandler_43 = value;
		Il2CppCodeGenWriteBarrier(&____rightMissleHandler_43, value);
	}

	inline static int32_t get_offset_of__levelManager_44() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ____levelManager_44)); }
	inline LevelManager_t4146676661 * get__levelManager_44() const { return ____levelManager_44; }
	inline LevelManager_t4146676661 ** get_address_of__levelManager_44() { return &____levelManager_44; }
	inline void set__levelManager_44(LevelManager_t4146676661 * value)
	{
		____levelManager_44 = value;
		Il2CppCodeGenWriteBarrier(&____levelManager_44, value);
	}
};

struct ShipController_t3277973446_StaticFields
{
public:
	// System.Action ShipController::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_45;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> ShipController::<>f__am$cache1
	Action_2_t800392020 * ___U3CU3Ef__amU24cache1_46;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> ShipController::<>f__am$cache2
	Action_2_t800392020 * ___U3CU3Ef__amU24cache2_47;
	// System.Action`3<Saitama.InputState,Saitama.Ships.Ship,System.Single> ShipController::<>f__am$cache3
	Action_3_t2414724281 * ___U3CU3Ef__amU24cache3_48;
	// System.Action`3<Saitama.InputState,Saitama.Ships.Ship,System.Single> ShipController::<>f__am$cache4
	Action_3_t2414724281 * ___U3CU3Ef__amU24cache4_49;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> ShipController::<>f__am$cache5
	Action_2_t800392020 * ___U3CU3Ef__amU24cache5_50;
	// System.Action`2<Saitama.InputState,Saitama.Ships.Ship> ShipController::<>f__am$cache6
	Action_2_t800392020 * ___U3CU3Ef__amU24cache6_51;
	// System.Action ShipController::<>f__am$cache7
	Action_t3226471752 * ___U3CU3Ef__amU24cache7_52;
	// System.Action ShipController::<>f__am$cache8
	Action_t3226471752 * ___U3CU3Ef__amU24cache8_53;
	// System.Action ShipController::<>f__am$cache9
	Action_t3226471752 * ___U3CU3Ef__amU24cache9_54;
	// System.Action ShipController::<>f__am$cacheA
	Action_t3226471752 * ___U3CU3Ef__amU24cacheA_55;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_45() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache0_45)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_45() const { return ___U3CU3Ef__amU24cache0_45; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_45() { return &___U3CU3Ef__amU24cache0_45; }
	inline void set_U3CU3Ef__amU24cache0_45(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_45 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_45, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_46() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache1_46)); }
	inline Action_2_t800392020 * get_U3CU3Ef__amU24cache1_46() const { return ___U3CU3Ef__amU24cache1_46; }
	inline Action_2_t800392020 ** get_address_of_U3CU3Ef__amU24cache1_46() { return &___U3CU3Ef__amU24cache1_46; }
	inline void set_U3CU3Ef__amU24cache1_46(Action_2_t800392020 * value)
	{
		___U3CU3Ef__amU24cache1_46 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_46, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_47() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache2_47)); }
	inline Action_2_t800392020 * get_U3CU3Ef__amU24cache2_47() const { return ___U3CU3Ef__amU24cache2_47; }
	inline Action_2_t800392020 ** get_address_of_U3CU3Ef__amU24cache2_47() { return &___U3CU3Ef__amU24cache2_47; }
	inline void set_U3CU3Ef__amU24cache2_47(Action_2_t800392020 * value)
	{
		___U3CU3Ef__amU24cache2_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_47, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_48() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache3_48)); }
	inline Action_3_t2414724281 * get_U3CU3Ef__amU24cache3_48() const { return ___U3CU3Ef__amU24cache3_48; }
	inline Action_3_t2414724281 ** get_address_of_U3CU3Ef__amU24cache3_48() { return &___U3CU3Ef__amU24cache3_48; }
	inline void set_U3CU3Ef__amU24cache3_48(Action_3_t2414724281 * value)
	{
		___U3CU3Ef__amU24cache3_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_48, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_49() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache4_49)); }
	inline Action_3_t2414724281 * get_U3CU3Ef__amU24cache4_49() const { return ___U3CU3Ef__amU24cache4_49; }
	inline Action_3_t2414724281 ** get_address_of_U3CU3Ef__amU24cache4_49() { return &___U3CU3Ef__amU24cache4_49; }
	inline void set_U3CU3Ef__amU24cache4_49(Action_3_t2414724281 * value)
	{
		___U3CU3Ef__amU24cache4_49 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_49, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_50() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache5_50)); }
	inline Action_2_t800392020 * get_U3CU3Ef__amU24cache5_50() const { return ___U3CU3Ef__amU24cache5_50; }
	inline Action_2_t800392020 ** get_address_of_U3CU3Ef__amU24cache5_50() { return &___U3CU3Ef__amU24cache5_50; }
	inline void set_U3CU3Ef__amU24cache5_50(Action_2_t800392020 * value)
	{
		___U3CU3Ef__amU24cache5_50 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_50, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_51() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache6_51)); }
	inline Action_2_t800392020 * get_U3CU3Ef__amU24cache6_51() const { return ___U3CU3Ef__amU24cache6_51; }
	inline Action_2_t800392020 ** get_address_of_U3CU3Ef__amU24cache6_51() { return &___U3CU3Ef__amU24cache6_51; }
	inline void set_U3CU3Ef__amU24cache6_51(Action_2_t800392020 * value)
	{
		___U3CU3Ef__amU24cache6_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_51, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_52() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache7_52)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache7_52() const { return ___U3CU3Ef__amU24cache7_52; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache7_52() { return &___U3CU3Ef__amU24cache7_52; }
	inline void set_U3CU3Ef__amU24cache7_52(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache7_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_52, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_53() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache8_53)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache8_53() const { return ___U3CU3Ef__amU24cache8_53; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache8_53() { return &___U3CU3Ef__amU24cache8_53; }
	inline void set_U3CU3Ef__amU24cache8_53(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache8_53 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_53, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_54() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cache9_54)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache9_54() const { return ___U3CU3Ef__amU24cache9_54; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache9_54() { return &___U3CU3Ef__amU24cache9_54; }
	inline void set_U3CU3Ef__amU24cache9_54(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache9_54 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_54, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_55() { return static_cast<int32_t>(offsetof(ShipController_t3277973446_StaticFields, ___U3CU3Ef__amU24cacheA_55)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cacheA_55() const { return ___U3CU3Ef__amU24cacheA_55; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cacheA_55() { return &___U3CU3Ef__amU24cacheA_55; }
	inline void set_U3CU3Ef__amU24cacheA_55(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cacheA_55 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_55, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
