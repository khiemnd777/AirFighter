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

// Saitama.NPCs.Bosses.XFisher
struct XFisher_t194907223;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// Saitama.LevelManager
struct LevelManager_t4146676661;
// Saitama.ScoreManager
struct ScoreManager_t4141729111;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Saitama_LevelManager4146676661.h"
#include "AssemblyU2DCSharp_Saitama_ScoreManager4141729111.h"

// System.Void Saitama.NPCs.Bosses.XFisher::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void XFisher__ctor_m3243610338 (XFisher_t194907223 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::Init()
extern "C"  void XFisher_Init_m1854093947 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::Setup()
extern "C"  void XFisher_Setup_m2758077782 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::Chase()
extern "C"  void XFisher_Chase_m4279628285 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::Chase(UnityEngine.GameObject)
extern "C"  void XFisher_Chase_m663705641 (XFisher_t194907223 * __this, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::Chase(UnityEngine.Vector3)
extern "C"  void XFisher_Chase_m778752690 (XFisher_t194907223 * __this, Vector3_t2243707580  ___targetPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::RunForLife()
extern "C"  void XFisher_RunForLife_m1463334261 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::Move()
extern "C"  void XFisher_Move_m1852285038 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::Die()
extern "C"  void XFisher_Die_m3938445197 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::ComputeLevel()
extern "C"  void XFisher_ComputeLevel_m4064030978 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::ComputeHealth()
extern "C"  void XFisher_ComputeHealth_m2200569704 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.NPCs.Bosses.XFisher::ComputeVelocity()
extern "C"  void XFisher_ComputeVelocity_m2725388383 (XFisher_t194907223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Saitama.NPCs.Bosses.XFisher::DetectTargetsPosition(System.String,System.Single)
extern "C"  Vector3_t2243707580  XFisher_DetectTargetsPosition_m816909690 (XFisher_t194907223 * __this, String_t* ___tag0, float ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.NPCs.Bosses.XFisher::<ComputeLevel>m__0(Saitama.LevelManager)
extern "C"  int32_t XFisher_U3CComputeLevelU3Em__0_m1021707088 (Il2CppObject * __this /* static, unused */, LevelManager_t4146676661 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Saitama.NPCs.Bosses.XFisher::<ComputeHealth>m__1(Saitama.ScoreManager)
extern "C"  int32_t XFisher_U3CComputeHealthU3Em__1_m3521506407 (Il2CppObject * __this /* static, unused */, ScoreManager_t4141729111 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Saitama.NPCs.Bosses.XFisher::<DetectTargetsPosition>m__2(UnityEngine.GameObject)
extern "C"  Vector3_t2243707580  XFisher_U3CDetectTargetsPositionU3Em__2_m1989261172 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
