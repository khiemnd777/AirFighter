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

// AccessoryController
struct AccessoryController_t2234104886;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void AccessoryController::.ctor()
extern "C"  void AccessoryController__ctor_m1314451551 (AccessoryController_t2234104886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AccessoryController::get_Horizontal()
extern "C"  float AccessoryController_get_Horizontal_m2282201646 (AccessoryController_t2234104886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AccessoryController::get_Vertical()
extern "C"  float AccessoryController_get_Vertical_m1266151792 (AccessoryController_t2234104886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AccessoryController::get_TimeHoldDown()
extern "C"  float AccessoryController_get_TimeHoldDown_m3033256898 (AccessoryController_t2234104886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccessoryController::Setup()
extern "C"  void AccessoryController_Setup_m4194474364 (AccessoryController_t2234104886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccessoryController::TwoPunch()
extern "C"  void AccessoryController_TwoPunch_m3772325055 (AccessoryController_t2234104886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccessoryController::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void AccessoryController_OnDrag_m3753657066 (AccessoryController_t2234104886 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccessoryController::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void AccessoryController_OnPointerUp_m1514836674 (AccessoryController_t2234104886 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccessoryController::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void AccessoryController_OnPointerDown_m2750203091 (AccessoryController_t2234104886 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 AccessoryController::GetSwipedPosition(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  AccessoryController_GetSwipedPosition_m298706939 (AccessoryController_t2234104886 * __this, Vector2_t2243707579  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 AccessoryController::GetRealPosition(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  AccessoryController_GetRealPosition_m2749093637 (AccessoryController_t2234104886 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
