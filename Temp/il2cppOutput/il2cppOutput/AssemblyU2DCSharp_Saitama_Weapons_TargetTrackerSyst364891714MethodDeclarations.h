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

// Saitama.Weapons.TargetTrackerSystem
struct TargetTrackerSystem_t364891714;
// Saitama.MonoController
struct MonoController_t2943651575;
// Saitama.Weapons.Missle
struct Missle_t2713853427;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Saitama_MonoController2943651575.h"
#include "AssemblyU2DCSharp_Saitama_Weapons_Missle2713853427.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Saitama.Weapons.TargetTrackerSystem::.ctor(Saitama.MonoController)
extern "C"  void TargetTrackerSystem__ctor_m131369583 (TargetTrackerSystem_t364891714 * __this, MonoController_t2943651575 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetTrackerSystem::Init()
extern "C"  void TargetTrackerSystem_Init_m3672120684 (TargetTrackerSystem_t364891714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.TargetTrackerSystem::Track(Saitama.Weapons.Missle,UnityEngine.GameObject)
extern "C"  void TargetTrackerSystem_Track_m517928801 (TargetTrackerSystem_t364891714 * __this, Missle_t2713853427 * ___missle0, GameObject_t1756533147 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.Weapons.TargetTrackerSystem::Tracking(Saitama.Weapons.Missle,UnityEngine.GameObject)
extern "C"  Il2CppObject * TargetTrackerSystem_Tracking_m2532516747 (TargetTrackerSystem_t364891714 * __this, Missle_t2713853427 * ___missle0, GameObject_t1756533147 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
