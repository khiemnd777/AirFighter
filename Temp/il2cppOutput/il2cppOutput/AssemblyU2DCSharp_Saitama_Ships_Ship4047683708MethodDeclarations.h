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

// Saitama.Ships.Ship
struct Ship_t4047683708;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Saitama.EventEmitter
struct EventEmitter_t724165420;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Void Saitama.Ships.Ship::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void Ship__ctor_m1033507291 (Ship_t4047683708 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.EventEmitter Saitama.Ships.Ship::get_EventEmitter()
extern "C"  EventEmitter_t724165420 * Ship_get_EventEmitter_m1514064776 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.Ships.Ship::get_IsDead()
extern "C"  bool Ship_get_IsDead_m1117298337 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_AmbientSpeed()
extern "C"  float Ship_get_AmbientSpeed_m3212822914 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_AmbientSpeed(System.Single)
extern "C"  void Ship_set_AmbientSpeed_m3545306961 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_AmbientMaxSpeed()
extern "C"  float Ship_get_AmbientMaxSpeed_m1227282940 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_AmbientMaxSpeed(System.Single)
extern "C"  void Ship_set_AmbientMaxSpeed_m104342393 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_AmbientMinSpeed()
extern "C"  float Ship_get_AmbientMinSpeed_m3491358246 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_AmbientMinSpeed(System.Single)
extern "C"  void Ship_set_AmbientMinSpeed_m4184170639 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_RotationSpeed()
extern "C"  float Ship_get_RotationSpeed_m4259082636 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_RotationSpeed(System.Single)
extern "C"  void Ship_set_RotationSpeed_m726410221 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_ShiftedRotationExtraSpeed()
extern "C"  float Ship_get_ShiftedRotationExtraSpeed_m3572836441 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_ShiftedRotationExtraSpeed(System.Single)
extern "C"  void Ship_set_ShiftedRotationExtraSpeed_m624531846 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_RollSpeed()
extern "C"  float Ship_get_RollSpeed_m3517637467 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_RollSpeed(System.Single)
extern "C"  void Ship_set_RollSpeed_m1324065130 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_ShiftDistance()
extern "C"  float Ship_get_ShiftDistance_m1440384334 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_ShiftDistance(System.Single)
extern "C"  void Ship_set_ShiftDistance_m4211291197 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_ShiftAngleLeft()
extern "C"  float Ship_get_ShiftAngleLeft_m130159887 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_ShiftAngleLeft(System.Single)
extern "C"  void Ship_set_ShiftAngleLeft_m1265155622 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Ships.Ship::get_ShiftAngleRight()
extern "C"  float Ship_get_ShiftAngleRight_m568840730 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::set_ShiftAngleRight(System.Single)
extern "C"  void Ship_set_ShiftAngleRight_m4105171483 (Ship_t4047683708 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Ships.Ship::Die()
extern "C"  void Ship_Die_m272111834 (Ship_t4047683708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
