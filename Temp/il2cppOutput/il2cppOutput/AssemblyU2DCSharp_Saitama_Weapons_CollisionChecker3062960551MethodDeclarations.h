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

// Saitama.Weapons.CollisionChecker
struct CollisionChecker_t3062960551;
// UnityEngine.Component
struct Component_t3819376471;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction478029726.h"

// System.Void Saitama.Weapons.CollisionChecker::.ctor(UnityEngine.LayerMask)
extern "C"  void CollisionChecker__ctor_m3427199695 (CollisionChecker_t3062960551 * __this, LayerMask_t3188175821  ___targets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.Weapons.CollisionChecker::Check(UnityEngine.Component,System.Single,UnityEngine.QueryTriggerInteraction)
extern "C"  void CollisionChecker_Check_m4063688495 (CollisionChecker_t3062960551 * __this, Component_t3819376471 * ___component0, float ___radius1, int32_t ___queryTriggerInteraction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
