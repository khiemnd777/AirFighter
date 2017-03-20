#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// JoystickController
struct JoystickController_t3035899094;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void JoystickController::.ctor()
extern "C"  void JoystickController__ctor_m2124729941 (JoystickController_t3035899094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JoystickController::get_Horizontal()
extern "C"  float JoystickController_get_Horizontal_m1371940770 (JoystickController_t3035899094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JoystickController::get_Vertical()
extern "C"  float JoystickController_get_Vertical_m871316004 (JoystickController_t3035899094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion JoystickController::get_Angle()
extern "C"  Quaternion_t4030073918  JoystickController_get_Angle_m1832139313 (JoystickController_t3035899094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoystickController::Setup()
extern "C"  void JoystickController_Setup_m1831246240 (JoystickController_t3035899094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoystickController::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void JoystickController_OnDrag_m3766841866 (JoystickController_t3035899094 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoystickController::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void JoystickController_OnPointerUp_m3338722814 (JoystickController_t3035899094 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoystickController::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void JoystickController_OnPointerDown_m3520034489 (JoystickController_t3035899094 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 JoystickController::GetRealPosition(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  JoystickController_GetRealPosition_m751961347 (JoystickController_t3035899094 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoystickController::<OnPointerUp>m__0(System.Single)
extern "C"  void JoystickController_U3COnPointerUpU3Em__0_m451969190 (JoystickController_t3035899094 * __this, float ___percent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoystickController::<OnPointerUp>m__1()
extern "C"  void JoystickController_U3COnPointerUpU3Em__1_m3741405670 (JoystickController_t3035899094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JoystickController::<OnPointerUp>m__2()
extern "C"  bool JoystickController_U3COnPointerUpU3Em__2_m2652666003 (JoystickController_t3035899094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
