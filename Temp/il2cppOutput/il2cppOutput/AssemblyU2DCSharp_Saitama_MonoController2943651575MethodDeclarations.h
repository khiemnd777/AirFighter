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

// Saitama.MonoController
struct MonoController_t2943651575;
// Saitama.ICommonObject
struct ICommonObject_t1240491325;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Type
struct Type_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Func`1<System.Boolean>
struct Func_1_t1485000104;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Saitama.MonoController::.ctor()
extern "C"  void MonoController__ctor_m2525210554 (MonoController_t2943651575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject Saitama.MonoController::get_CommonObject()
extern "C"  Il2CppObject * MonoController_get_CommonObject_m1906240039 (MonoController_t2943651575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::set_CommonObject(Saitama.ICommonObject)
extern "C"  void MonoController_set_CommonObject_m726495968 (MonoController_t2943651575 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::Awake()
extern "C"  void MonoController_Awake_m113266957 (MonoController_t2943651575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo Saitama.MonoController::GetPrefabInfo(System.Type)
extern "C"  FieldInfo_t * MonoController_GetPrefabInfo_m456264882 (MonoController_t2943651575 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::AssignMonoComponentTypes(UnityEngine.GameObject,System.Type[])
extern "C"  void MonoController_AssignMonoComponentTypes_m205689515 (MonoController_t2943651575 * __this, GameObject_t1756533147 * ___go0, TypeU5BU5D_t1664964607* ___componentTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::Start()
extern "C"  void MonoController_Start_m2480295250 (MonoController_t2943651575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::FixedUpdate()
extern "C"  void MonoController_FixedUpdate_m4121617927 (MonoController_t2943651575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::Update()
extern "C"  void MonoController_Update_m938818225 (MonoController_t2943651575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::LateUpdate()
extern "C"  void MonoController_LateUpdate_m2579031757 (MonoController_t2943651575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.MonoController::OnLoadingPercent(System.Action`1<System.Single>,System.Single)
extern "C"  Il2CppObject * MonoController_OnLoadingPercent_m2458195132 (MonoController_t2943651575 * __this, Action_1_t1878309314 * ___act0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.MonoController::OnLoadingPercent(System.Action`1<System.Single>,System.Func`1<System.Boolean>,System.Single)
extern "C"  Il2CppObject * MonoController_OnLoadingPercent_m807670857 (MonoController_t2943651575 * __this, Action_1_t1878309314 * ___act0, Func_1_t1485000104 * ___cond1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.MonoController::OnLoadingPercent(System.Action`1<System.Single>,System.Action,System.Single)
extern "C"  Il2CppObject * MonoController_OnLoadingPercent_m1329156981 (MonoController_t2943651575 * __this, Action_1_t1878309314 * ___act0, Action_t3226471752 * ___post1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.MonoController::OnLoadingPercent(System.Action`1<System.Single>,System.Action,System.Func`1<System.Boolean>,System.Single)
extern "C"  Il2CppObject * MonoController_OnLoadingPercent_m2029467608 (MonoController_t2943651575 * __this, Action_1_t1878309314 * ___act0, Action_t3226471752 * ___post1, Func_1_t1485000104 * ___cond2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.MonoController::OnLoadingPercent(System.Action`1<System.Single>,System.Action,System.Action,System.Single)
extern "C"  Il2CppObject * MonoController_OnLoadingPercent_m2366266716 (MonoController_t2943651575 * __this, Action_1_t1878309314 * ___act0, Action_t3226471752 * ___pre1, Action_t3226471752 * ___post2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::PrepareStart(Saitama.ICommonObject)
extern "C"  void MonoController_PrepareStart_m169785582 (MonoController_t2943651575 * __this, Il2CppObject * ___commonObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.MonoController::PrepareUpdate(Saitama.ICommonObject,System.String)
extern "C"  void MonoController_PrepareUpdate_m642209339 (MonoController_t2943651575 * __this, Il2CppObject * ___commonObject0, String_t* ___how1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
