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

// Saitama.Weapons.TargetLockerSystem
struct TargetLockerSystem_t1714526130;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Collections.Generic.List`1<Saitama.Weapons.TargetLocker>
struct List_1_t1602014753;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t2048660192;
// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// Saitama.Weapons.MissleHandler[]
struct MissleHandlerU5BU5D_t2109492746;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void Saitama.Weapons.TargetLockerSystem::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void TargetLockerSystem__ctor_m2839846921 (TargetLockerSystem_t1714526130 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.Weapons.TargetLockerSystem::get_UseLockerUI()
extern "C"  bool TargetLockerSystem_get_UseLockerUI_m581115928 (TargetLockerSystem_t1714526130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::set_UseLockerUI(System.Boolean)
extern "C"  void TargetLockerSystem_set_UseLockerUI_m4125965581 (TargetLockerSystem_t1714526130 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.Weapons.TargetLockerSystem::get_MissleSlot()
extern "C"  int32_t TargetLockerSystem_get_MissleSlot_m3584461950 (TargetLockerSystem_t1714526130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::set_MissleSlot(System.Int32)
extern "C"  void TargetLockerSystem_set_MissleSlot_m612539701 (TargetLockerSystem_t1714526130 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Saitama.Weapons.TargetLocker> Saitama.Weapons.TargetLockerSystem::get_Lockers()
extern "C"  List_1_t1602014753 * TargetLockerSystem_get_Lockers_m3425048241 (TargetLockerSystem_t1714526130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::Init()
extern "C"  void TargetLockerSystem_Init_m3200445552 (TargetLockerSystem_t1714526130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::TwoPunch()
extern "C"  void TargetLockerSystem_TwoPunch_m2583443600 (TargetLockerSystem_t1714526130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Saitama.Weapons.TargetLockerSystem::GetTarget()
extern "C"  GameObject_t1756533147 * TargetLockerSystem_GetTarget_m796065930 (TargetLockerSystem_t1714526130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::PrepareTargetLockerUIs()
extern "C"  void TargetLockerSystem_PrepareTargetLockerUIs_m3697413659 (TargetLockerSystem_t1714526130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::SetVisibleTargetLockerUIs(System.Boolean)
extern "C"  void TargetLockerSystem_SetVisibleTargetLockerUIs_m1989195653 (TargetLockerSystem_t1714526130 * __this, bool ___visible0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Saitama.Weapons.TargetLockerSystem::FindTargets(System.String,System.Single)
extern "C"  Il2CppObject* TargetLockerSystem_FindTargets_m4165252696 (TargetLockerSystem_t1714526130 * __this, String_t* ___tag0, float ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Saitama.Weapons.TargetLockerSystem::FindTargetsViaRadar(System.String,System.Single)
extern "C"  Il2CppObject* TargetLockerSystem_FindTargetsViaRadar_m2628973412 (TargetLockerSystem_t1714526130 * __this, String_t* ___tag0, float ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] Saitama.Weapons.TargetLockerSystem::FindTargetsInCrosshair(System.String,System.Single,System.Single)
extern "C"  GameObjectU5BU5D_t3057952154* TargetLockerSystem_FindTargetsInCrosshair_m4189196695 (TargetLockerSystem_t1714526130 * __this, String_t* ___tag0, float ___limit1, float ___border2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] Saitama.Weapons.TargetLockerSystem::FindTargetsInCrosshair(System.String,System.Single,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  GameObjectU5BU5D_t3057952154* TargetLockerSystem_FindTargetsInCrosshair_m2795940823 (TargetLockerSystem_t1714526130 * __this, String_t* ___tag0, float ___limit1, Vector2_t2243707579  ___crosshairMinBound2, Vector2_t2243707579  ___crosshairMaxBound3, float ___border4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::LockTargets(UnityEngine.GameObject[])
extern "C"  void TargetLockerSystem_LockTargets_m2561463323 (TargetLockerSystem_t1714526130 * __this, GameObjectU5BU5D_t3057952154* ___targets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetLockerSystem::<Init>m__0(Saitama.Weapons.MissleHandler[])
extern "C"  void TargetLockerSystem_U3CInitU3Em__0_m62952381 (TargetLockerSystem_t1714526130 * __this, MissleHandlerU5BU5D_t2109492746* ___missleHandlers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
