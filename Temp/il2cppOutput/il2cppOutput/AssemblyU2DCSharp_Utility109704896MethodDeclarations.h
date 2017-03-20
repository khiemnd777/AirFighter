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

// Utility
struct Utility_t109704896;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// Saitama.Weapons.AttackerIdentifier
struct AttackerIdentifier_t552666854;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Saitama.Ships.Ship[]
struct ShipU5BU5D_t721494549;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Quaternion>
struct IEnumerable_1_t27233667;
// UnityEngine.Component
struct Component_t3819376471;
// System.Action`1<UnityEngine.RaycastHit>
struct Action_1_t4183946998;
// ShipController
struct ShipController_t3277973446;
// Saitama.Ships.Ship
struct Ship_t4047683708;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Saitama_Weapons_AttackerIdentifie552666854.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_ShipController3277973446.h"

// System.Void Utility::.ctor()
extern "C"  void Utility__ctor_m2866738967 (Utility_t109704896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utility::IsInRange(System.Single,System.Single,System.Single)
extern "C"  bool Utility_IsInRange_m3194211658 (Il2CppObject * __this /* static, unused */, float ___value0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utility::IsFrontOfCamera(UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  bool Utility_IsFrontOfCamera_m3808710703 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___position0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utility::ScreenToWorldPoint(UnityEngine.Camera,System.Single)
extern "C"  Vector3_t2243707580  Utility_ScreenToWorldPoint_m2795861123 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___camera0, float ___zIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] Utility::FindTargetsViaRadar(System.String,UnityEngine.Vector3,System.Single)
extern "C"  GameObjectU5BU5D_t3057952154* Utility_FindTargetsViaRadar_m2149285169 (Il2CppObject * __this /* static, unused */, String_t* ___tag0, Vector3_t2243707580  ___ownPosition1, float ___limit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utility::ComputeAveragePosition(UnityEngine.Vector3[])
extern "C"  Vector3_t2243707580  Utility_ComputeAveragePosition_m633710985 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t1172311765* ___positions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utility::SplitPoints(Saitama.Weapons.AttackerIdentifier,System.Single)
extern "C"  void Utility_SplitPoints_m3514853372 (Il2CppObject * __this /* static, unused */, AttackerIdentifier_t552666854 * ___attackerIdentifier0, float ___originalScore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Utility::Side(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t Utility_Side_m119517544 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___own0, Transform_t3275118058 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utility::HasShipComponent(UnityEngine.GameObject)
extern "C"  bool Utility_HasShipComponent_m548303166 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.Ships.Ship[] Utility::ExtractShipComponent(UnityEngine.GameObject[])
extern "C"  ShipU5BU5D_t721494549* Utility_ExtractShipComponent_m3945298341 (Il2CppObject * __this /* static, unused */, GameObjectU5BU5D_t3057952154* ___gameObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Utility::RotatePrincipalAxes(UnityEngine.Vector2,System.Single)
extern "C"  Quaternion_t4030073918  Utility_RotatePrincipalAxes_m4251348342 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___mousePosition0, float ___rotationSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Utility::CalculateYaw(UnityEngine.Vector2,System.Single)
extern "C"  Quaternion_t4030073918  Utility_CalculateYaw_m3294140525 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___mousePosition0, float ___rotationSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Utility::CalculatePitch(UnityEngine.Vector2,System.Single)
extern "C"  Quaternion_t4030073918  Utility_CalculatePitch_m2393394 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___mousePosition0, float ___rotationSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utility::CalculateVelocity(UnityEngine.Quaternion,System.Single)
extern "C"  Vector3_t2243707580  Utility_CalculateVelocity_m3861436100 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, float ___ambientSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Utility::CalculateRoll(System.Single)
extern "C"  Quaternion_t4030073918  Utility_CalculateRoll_m2828285491 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Utility::BalanceRolling(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t4030073918  Utility_BalanceRolling_m1586138637 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___currentAngle0, Quaternion_t4030073918  ___zeroAngle1, float ___timer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Quaternion> Utility::BalanceRollingLinear(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Il2CppObject* Utility_BalanceRollingLinear_m3142796307 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___currentAngle0, Quaternion_t4030073918  ___zeroAngle1, float ___timer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utility::CheckCollision(UnityEngine.Component,System.Single,System.Int32)
extern "C"  bool Utility_CheckCollision_m2324626307 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___component0, float ___maxDistance1, int32_t ___collisionMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utility::CheckCollision(UnityEngine.Component,System.Single,System.Int32,System.Action`1<UnityEngine.RaycastHit>)
extern "C"  void Utility_CheckCollision_m2834427880 (Il2CppObject * __this /* static, unused */, Component_t3819376471 * ___component0, float ___maxDistance1, int32_t ___collisionMask2, Action_1_t4183946998 * ___action3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShipController Utility::<ExtractShipComponent>m__3(UnityEngine.GameObject)
extern "C"  ShipController_t3277973446 * Utility_U3CExtractShipComponentU3Em__3_m4030018632 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.Ships.Ship Utility::<ExtractShipComponent>m__4(ShipController)
extern "C"  Ship_t4047683708 * Utility_U3CExtractShipComponentU3Em__4_m1844880814 (Il2CppObject * __this /* static, unused */, ShipController_t3277973446 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
