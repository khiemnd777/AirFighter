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

// Saitama.Weapons.GunPivotTrackerSystem
struct GunPivotTrackerSystem_t2625016341;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Saitama.Weapons.Gun[]
struct GunU5BU5D_t3348843663;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// Saitama.Weapons.Gun
struct Gun_t1932382218;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t2048660192;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_Saitama_Weapons_Gun1932382218.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Saitama.Weapons.GunPivotTrackerSystem::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void GunPivotTrackerSystem__ctor_m4025457994 (GunPivotTrackerSystem_t2625016341 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.GunPivotTrackerSystem::Init()
extern "C"  void GunPivotTrackerSystem_Init_m3668800367 (GunPivotTrackerSystem_t2625016341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.GunPivotTrackerSystem::TwoPunch()
extern "C"  void GunPivotTrackerSystem_TwoPunch_m2941115629 (GunPivotTrackerSystem_t2625016341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.GunPivotTrackerSystem::SetGuns(Saitama.Weapons.Gun[])
extern "C"  void GunPivotTrackerSystem_SetGuns_m3990384629 (GunPivotTrackerSystem_t2625016341 * __this, GunU5BU5D_t3348843663* ___guns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.GunPivotTrackerSystem::RotateGunPivot(UnityEngine.GameObject)
extern "C"  void GunPivotTrackerSystem_RotateGunPivot_m1490750772 (GunPivotTrackerSystem_t2625016341 * __this, GameObject_t1756533147 * ___lockedTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.GunPivotTrackerSystem::RotateGunPivot(UnityEngine.GameObject[])
extern "C"  void GunPivotTrackerSystem_RotateGunPivot_m3328000820 (GunPivotTrackerSystem_t2625016341 * __this, GameObjectU5BU5D_t3057952154* ___lockedTargets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.GunPivotTrackerSystem::RotateGunPivot(Saitama.Weapons.Gun,UnityEngine.GameObject)
extern "C"  void GunPivotTrackerSystem_RotateGunPivot_m4104395547 (GunPivotTrackerSystem_t2625016341 * __this, Gun_t1932382218 * ___gun0, GameObject_t1756533147 * ___lockedTarget1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.Weapons.GunPivotTrackerSystem::RotatingGunPivot(Saitama.Weapons.Gun,UnityEngine.Quaternion)
extern "C"  Il2CppObject * GunPivotTrackerSystem_RotatingGunPivot_m1346407131 (GunPivotTrackerSystem_t2625016341 * __this, Gun_t1932382218 * ___gun0, Quaternion_t4030073918  ___wantedRotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Saitama.Weapons.GunPivotTrackerSystem::FindTargets(System.String,System.Single)
extern "C"  Il2CppObject* GunPivotTrackerSystem_FindTargets_m138442305 (GunPivotTrackerSystem_t2625016341 * __this, String_t* ___tag0, float ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] Saitama.Weapons.GunPivotTrackerSystem::FindTargetsInCrosshair(System.String,System.Single,System.Single)
extern "C"  GameObjectU5BU5D_t3057952154* GunPivotTrackerSystem_FindTargetsInCrosshair_m89916386 (GunPivotTrackerSystem_t2625016341 * __this, String_t* ___tag0, float ___limit1, float ___border2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Saitama.Weapons.GunPivotTrackerSystem::LockTarget(UnityEngine.GameObject[])
extern "C"  GameObject_t1756533147 * GunPivotTrackerSystem_LockTarget_m1632621948 (GunPivotTrackerSystem_t2625016341 * __this, GameObjectU5BU5D_t3057952154* ___targets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] Saitama.Weapons.GunPivotTrackerSystem::LockTargetsNearest(UnityEngine.GameObject[])
extern "C"  GameObjectU5BU5D_t3057952154* GunPivotTrackerSystem_LockTargetsNearest_m3192948941 (GunPivotTrackerSystem_t2625016341 * __this, GameObjectU5BU5D_t3057952154* ___targets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.GunPivotTrackerSystem::<Init>m__0(Saitama.Weapons.Gun[])
extern "C"  void GunPivotTrackerSystem_U3CInitU3Em__0_m2958351265 (GunPivotTrackerSystem_t2625016341 * __this, GunU5BU5D_t3348843663* ___g0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Weapons.GunPivotTrackerSystem::<LockTargetsNearest>m__1(UnityEngine.GameObject)
extern "C"  float GunPivotTrackerSystem_U3CLockTargetsNearestU3Em__1_m1016411536 (GunPivotTrackerSystem_t2625016341 * __this, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
