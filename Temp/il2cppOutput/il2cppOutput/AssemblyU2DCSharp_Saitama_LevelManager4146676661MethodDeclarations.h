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

// Saitama.LevelManager
struct LevelManager_t4146676661;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Void Saitama.LevelManager::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void LevelManager__ctor_m3550251747 (LevelManager_t4146676661 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.LevelManager::get_Level()
extern "C"  int32_t LevelManager_get_Level_m2936765435 (LevelManager_t4146676661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.LevelManager::TwoPunch()
extern "C"  void LevelManager_TwoPunch_m4187229580 (LevelManager_t4146676661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.LevelManager::InitLevel(System.Action`1<System.Int32>)
extern "C"  void LevelManager_InitLevel_m1727974633 (LevelManager_t4146676661 * __this, Action_1_t1873676830 * ___init0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.LevelManager::Upgrade()
extern "C"  void LevelManager_Upgrade_m2102262368 (LevelManager_t4146676661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.LevelManager::IsMax()
extern "C"  bool LevelManager_IsMax_m1748191732 (LevelManager_t4146676661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.LevelManager::ComputeLevel(System.Int32)
extern "C"  void LevelManager_ComputeLevel_m1269784114 (LevelManager_t4146676661 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.LevelManager::GetUpgradedScoreByLevel(System.Int32)
extern "C"  int32_t LevelManager_GetUpgradedScoreByLevel_m1044613808 (LevelManager_t4146676661 * __this, int32_t ___currentLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
