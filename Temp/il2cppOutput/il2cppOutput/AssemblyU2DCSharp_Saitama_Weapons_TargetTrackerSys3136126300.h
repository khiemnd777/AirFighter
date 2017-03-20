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
// Saitama.Weapons.Missle
struct Missle_t2713853427;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Saitama.Weapons.TargetTrackerSystem
struct TargetTrackerSystem_t364891714;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0
struct  U3CTrackingU3Ec__Iterator0_t3136126300  : public Il2CppObject
{
public:
	// UnityEngine.RectTransform Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::<_targetTrackerUIResource>__0
	RectTransform_t3349966182 * ___U3C_targetTrackerUIResourceU3E__0_0;
	// UnityEngine.RectTransform Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::<_targetTrackerUI>__1
	RectTransform_t3349966182 * ___U3C_targetTrackerUIU3E__1_1;
	// Saitama.Weapons.Missle Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::missle
	Missle_t2713853427 * ___missle_2;
	// UnityEngine.GameObject Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::target
	GameObject_t1756533147 * ___target_3;
	// UnityEngine.Vector3 Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::<targetScrPt>__2
	Vector3_t2243707580  ___U3CtargetScrPtU3E__2_4;
	// Saitama.Weapons.TargetTrackerSystem Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::$this
	TargetTrackerSystem_t364891714 * ___U24this_5;
	// System.Object Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::$current
	Il2CppObject * ___U24current_6;
	// System.Boolean Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 Saitama.Weapons.TargetTrackerSystem/<Tracking>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3C_targetTrackerUIResourceU3E__0_0() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___U3C_targetTrackerUIResourceU3E__0_0)); }
	inline RectTransform_t3349966182 * get_U3C_targetTrackerUIResourceU3E__0_0() const { return ___U3C_targetTrackerUIResourceU3E__0_0; }
	inline RectTransform_t3349966182 ** get_address_of_U3C_targetTrackerUIResourceU3E__0_0() { return &___U3C_targetTrackerUIResourceU3E__0_0; }
	inline void set_U3C_targetTrackerUIResourceU3E__0_0(RectTransform_t3349966182 * value)
	{
		___U3C_targetTrackerUIResourceU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3C_targetTrackerUIResourceU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3C_targetTrackerUIU3E__1_1() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___U3C_targetTrackerUIU3E__1_1)); }
	inline RectTransform_t3349966182 * get_U3C_targetTrackerUIU3E__1_1() const { return ___U3C_targetTrackerUIU3E__1_1; }
	inline RectTransform_t3349966182 ** get_address_of_U3C_targetTrackerUIU3E__1_1() { return &___U3C_targetTrackerUIU3E__1_1; }
	inline void set_U3C_targetTrackerUIU3E__1_1(RectTransform_t3349966182 * value)
	{
		___U3C_targetTrackerUIU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3C_targetTrackerUIU3E__1_1, value);
	}

	inline static int32_t get_offset_of_missle_2() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___missle_2)); }
	inline Missle_t2713853427 * get_missle_2() const { return ___missle_2; }
	inline Missle_t2713853427 ** get_address_of_missle_2() { return &___missle_2; }
	inline void set_missle_2(Missle_t2713853427 * value)
	{
		___missle_2 = value;
		Il2CppCodeGenWriteBarrier(&___missle_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___target_3)); }
	inline GameObject_t1756533147 * get_target_3() const { return ___target_3; }
	inline GameObject_t1756533147 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(GameObject_t1756533147 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_U3CtargetScrPtU3E__2_4() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___U3CtargetScrPtU3E__2_4)); }
	inline Vector3_t2243707580  get_U3CtargetScrPtU3E__2_4() const { return ___U3CtargetScrPtU3E__2_4; }
	inline Vector3_t2243707580 * get_address_of_U3CtargetScrPtU3E__2_4() { return &___U3CtargetScrPtU3E__2_4; }
	inline void set_U3CtargetScrPtU3E__2_4(Vector3_t2243707580  value)
	{
		___U3CtargetScrPtU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___U24this_5)); }
	inline TargetTrackerSystem_t364891714 * get_U24this_5() const { return ___U24this_5; }
	inline TargetTrackerSystem_t364891714 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(TargetTrackerSystem_t364891714 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_5, value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CTrackingU3Ec__Iterator0_t3136126300, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
