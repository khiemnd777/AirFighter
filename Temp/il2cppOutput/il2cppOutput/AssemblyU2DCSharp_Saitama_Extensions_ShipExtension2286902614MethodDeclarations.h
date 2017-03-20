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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Saitama.Ships.Ship[]
struct ShipU5BU5D_t721494549;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// ShipController
struct ShipController_t3277973446;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ShipController3277973446.h"

// Saitama.Ships.Ship Saitama.Extensions.ShipExtensions::ToShip(UnityEngine.GameObject)
extern "C"  Ship_t4047683708 * ShipExtensions_ToShip_m1370490526 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.Ships.Ship Saitama.Extensions.ShipExtensions::ToShip(UnityEngine.MonoBehaviour)
extern "C"  Ship_t4047683708 * ShipExtensions_ToShip_m270545901 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.Extensions.ShipExtensions::IsShip(UnityEngine.GameObject)
extern "C"  bool ShipExtensions_IsShip_m1980394123 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.Extensions.ShipExtensions::IsShip(UnityEngine.MonoBehaviour)
extern "C"  bool ShipExtensions_IsShip_m744506574 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.Extensions.ShipExtensions::IsBoss(UnityEngine.GameObject)
extern "C"  bool ShipExtensions_IsBoss_m3707111682 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.Extensions.ShipExtensions::IsBoss(UnityEngine.MonoBehaviour)
extern "C"  bool ShipExtensions_IsBoss_m212183785 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.Ships.Ship[] Saitama.Extensions.ShipExtensions::ExtractShipComponent(UnityEngine.GameObject[])
extern "C"  ShipU5BU5D_t721494549* ShipExtensions_ExtractShipComponent_m1543820305 (Il2CppObject * __this /* static, unused */, GameObjectU5BU5D_t3057952154* ___gameObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.Extensions.ShipExtensions::GetScore(UnityEngine.GameObject)
extern "C"  int32_t ShipExtensions_GetScore_m3460052035 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.Extensions.ShipExtensions::GetScore(UnityEngine.MonoBehaviour)
extern "C"  int32_t ShipExtensions_GetScore_m889030262 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.Extensions.ShipExtensions::GetOriginalScore(UnityEngine.GameObject)
extern "C"  int32_t ShipExtensions_GetOriginalScore_m121894996 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.Extensions.ShipExtensions::GetOriginalScore(UnityEngine.MonoBehaviour)
extern "C"  int32_t ShipExtensions_GetOriginalScore_m88639127 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShipController Saitama.Extensions.ShipExtensions::<ExtractShipComponent>m__4(UnityEngine.GameObject)
extern "C"  ShipController_t3277973446 * ShipExtensions_U3CExtractShipComponentU3Em__4_m3232193785 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.Ships.Ship Saitama.Extensions.ShipExtensions::<ExtractShipComponent>m__5(ShipController)
extern "C"  Ship_t4047683708 * ShipExtensions_U3CExtractShipComponentU3Em__5_m393786677 (Il2CppObject * __this /* static, unused */, ShipController_t3277973446 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
