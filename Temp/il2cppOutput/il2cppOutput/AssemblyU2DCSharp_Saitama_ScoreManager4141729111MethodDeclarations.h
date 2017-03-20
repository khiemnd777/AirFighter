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

// Saitama.ScoreManager
struct ScoreManager_t4141729111;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Saitama.ScoreManager::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void ScoreManager__ctor_m2071085449 (ScoreManager_t4141729111 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.ScoreManager::Init()
extern "C"  void ScoreManager_Init_m2211600060 (ScoreManager_t4141729111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.ScoreManager::get_Score()
extern "C"  int32_t ScoreManager_get_Score_m1093829883 (ScoreManager_t4141729111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.ScoreManager::get_OriginalScore()
extern "C"  int32_t ScoreManager_get_OriginalScore_m3393559762 (ScoreManager_t4141729111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.ScoreManager::Increase(System.Int32)
extern "C"  void ScoreManager_Increase_m1964484273 (ScoreManager_t4141729111 * __this, int32_t ___amout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.ScoreManager::Decrease(System.Int32)
extern "C"  void ScoreManager_Decrease_m3581828511 (ScoreManager_t4141729111 * __this, int32_t ___amout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Saitama.ScoreManager::ComputeScoreViaPercent(System.Single,System.Single,System.Single)
extern "C"  float ScoreManager_ComputeScoreViaPercent_m1046835331 (ScoreManager_t4141729111 * __this, float ___sum0, float ___val1, float ___total2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.ScoreManager::ComputeScore(System.Int32)
extern "C"  void ScoreManager_ComputeScore_m1400814574 (ScoreManager_t4141729111 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.ScoreManager::Hit(UnityEngine.GameObject,System.Int32)
extern "C"  void ScoreManager_Hit_m2594740198 (ScoreManager_t4141729111 * __this, GameObject_t1756533147 * ___target0, int32_t ___damage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.ScoreManager::Hit(UnityEngine.GameObject,UnityEngine.GameObject,System.Int32)
extern "C"  void ScoreManager_Hit_m3152272956 (ScoreManager_t4141729111 * __this, GameObject_t1756533147 * ___by0, GameObject_t1756533147 * ___target1, int32_t ___damage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
