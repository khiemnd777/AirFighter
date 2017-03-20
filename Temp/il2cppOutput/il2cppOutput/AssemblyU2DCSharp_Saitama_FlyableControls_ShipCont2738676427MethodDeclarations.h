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

// Saitama.FlyableControls.ShipControls.ShipControl
struct ShipControl_t2738676427;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void Saitama.FlyableControls.ShipControls.ShipControl::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void ShipControl__ctor_m4186835360 (ShipControl_t2738676427 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.FlyableControls.ShipControls.ShipControl::get_SmoothZToZero()
extern "C"  float ShipControl_get_SmoothZToZero_m2519584259 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::set_SmoothZToZero(System.Single)
extern "C"  void ShipControl_set_SmoothZToZero_m1243124802 (ShipControl_t2738676427 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Init()
extern "C"  void ShipControl_Init_m2174268043 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::InitKeptValues()
extern "C"  void ShipControl_InitKeptValues_m1460113177 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::OnePunch()
extern "C"  void ShipControl_OnePunch_m2423678469 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::TwoPunch()
extern "C"  void ShipControl_TwoPunch_m3986273489 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::HandleInputEvents()
extern "C"  void ShipControl_HandleInputEvents_m1512413978 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Thrust()
extern "C"  void ShipControl_Thrust_m947599233 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Yaw(UnityEngine.Vector2)
extern "C"  void ShipControl_Yaw_m1760053098 (ShipControl_t2738676427 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Pitch(UnityEngine.Vector2)
extern "C"  void ShipControl_Pitch_m64413055 (ShipControl_t2738676427 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Roll()
extern "C"  void ShipControl_Roll_m1509392654 (ShipControl_t2738676427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Roll(System.Single)
extern "C"  void ShipControl_Roll_m3364462105 (ShipControl_t2738676427 * __this, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Accelerate(System.Single)
extern "C"  void ShipControl_Accelerate_m1000689751 (ShipControl_t2738676427 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.FlyableControls.ShipControls.ShipControl::AccelerateLinear(System.Single)
extern "C"  Il2CppObject * ShipControl_AccelerateLinear_m2670086354 (ShipControl_t2738676427 * __this, float ___timer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::Break(System.Single)
extern "C"  void ShipControl_Break_m4020941751 (ShipControl_t2738676427 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.FlyableControls.ShipControls.ShipControl::BreakLinear(System.Single)
extern "C"  Il2CppObject * ShipControl_BreakLinear_m1676984700 (ShipControl_t2738676427 * __this, float ___timer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.FlyableControls.ShipControls.ShipControl::ShiftToNormalSpeed(System.Single)
extern "C"  void ShipControl_ShiftToNormalSpeed_m2007874127 (ShipControl_t2738676427 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.FlyableControls.ShipControls.ShipControl::ShiftToNormalSpeedLinear(System.Single)
extern "C"  Il2CppObject * ShipControl_ShiftToNormalSpeedLinear_m721457286 (ShipControl_t2738676427 * __this, float ___timer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.FlyableControls.ShipControls.ShipControl::BalanceRollingLinear(System.Single)
extern "C"  Il2CppObject * ShipControl_BalanceRollingLinear_m1476616862 (ShipControl_t2738676427 * __this, float ___timer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.FlyableControls.ShipControls.ShipControl::ShiftLeftLinear(System.Single)
extern "C"  Il2CppObject * ShipControl_ShiftLeftLinear_m262512562 (ShipControl_t2738676427 * __this, float ___timer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.FlyableControls.ShipControls.ShipControl::ShiftRightLinear(System.Single)
extern "C"  Il2CppObject * ShipControl_ShiftRightLinear_m1826603543 (ShipControl_t2738676427 * __this, float ___timer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.FlyableControls.ShipControls.ShipControl::ShiftToNormalPositionLinear(System.Single)
extern "C"  Il2CppObject * ShipControl_ShiftToNormalPositionLinear_m2865302086 (ShipControl_t2738676427 * __this, float ___timer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
