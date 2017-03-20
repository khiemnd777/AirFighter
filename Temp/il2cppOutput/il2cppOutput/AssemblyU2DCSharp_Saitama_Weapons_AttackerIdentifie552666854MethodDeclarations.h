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

// Saitama.Weapons.AttackerIdentifier
struct AttackerIdentifier_t552666854;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,System.Single>
struct IDictionary_2_t3405938797;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23164200598.h"

// System.Void Saitama.Weapons.AttackerIdentifier::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void AttackerIdentifier__ctor_m3377097277 (AttackerIdentifier_t552666854 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,System.Single> Saitama.Weapons.AttackerIdentifier::get_Attackers()
extern "C"  Il2CppObject* AttackerIdentifier_get_Attackers_m2217381081 (AttackerIdentifier_t552666854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.AttackerIdentifier::Init()
extern "C"  void AttackerIdentifier_Init_m867456188 (AttackerIdentifier_t552666854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,System.Single> Saitama.Weapons.AttackerIdentifier::GetAttackers()
extern "C"  Il2CppObject* AttackerIdentifier_GetAttackers_m2711104278 (AttackerIdentifier_t552666854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Weapons.AttackerIdentifier::Sum()
extern "C"  float AttackerIdentifier_Sum_m527917861 (AttackerIdentifier_t552666854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.AttackerIdentifier::Identify(UnityEngine.GameObject,System.Single)
extern "C"  void AttackerIdentifier_Identify_m2405588113 (AttackerIdentifier_t552666854 * __this, GameObject_t1756533147 * ___attacker0, float ___damage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.AttackerIdentifier::Identify(UnityEngine.GameObject,UnityEngine.GameObject,System.Single)
extern "C"  void AttackerIdentifier_Identify_m1203929553 (AttackerIdentifier_t552666854 * __this, GameObject_t1756533147 * ___attacker0, GameObject_t1756533147 * ___target1, float ___damage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.Weapons.AttackerIdentifier::<GetAttackers>m__0(System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>)
extern "C"  bool AttackerIdentifier_U3CGetAttackersU3Em__0_m3541516561 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3164200598  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Saitama.Weapons.AttackerIdentifier::<GetAttackers>m__1(System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>)
extern "C"  GameObject_t1756533147 * AttackerIdentifier_U3CGetAttackersU3Em__1_m660325535 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3164200598  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Weapons.AttackerIdentifier::<GetAttackers>m__2(System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>)
extern "C"  float AttackerIdentifier_U3CGetAttackersU3Em__2_m5348033 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3164200598  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.Weapons.AttackerIdentifier::<Sum>m__3(System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Single>)
extern "C"  float AttackerIdentifier_U3CSumU3Em__3_m2209351829 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3164200598  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
