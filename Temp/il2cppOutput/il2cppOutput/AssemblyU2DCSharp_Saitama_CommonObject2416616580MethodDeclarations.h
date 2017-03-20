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

// Saitama.CommonObject
struct CommonObject_t2416616580;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Saitama.ICommonObject
struct ICommonObject_t1240491325;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Component
struct Component_t3819376471;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<Saitama.ICommonObject>
struct List_1_t609612457;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>,System.Boolean>
struct Func_2_t3563413762;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Func`1<System.Boolean>
struct Func_1_t1485000104;
// System.Action
struct Action_t3226471752;
// Saitama.ICommonObject[]
struct ICommonObjectU5BU5D_t3930666288;
// System.Func`2<Saitama.ICommonObject,System.Boolean>
struct Func_2_t4277661758;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>>
struct IList_1_t235598338;
// Saitama.RawComponent
struct RawComponent_t2470838143;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_Saitama_RawComponent2470838143.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Coroutine2299508840.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23989625033.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21989385368.h"

// System.Void Saitama.CommonObject::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void CommonObject__ctor_m741860892 (CommonObject_t2416616580 * __this, MonoBehaviour_t1158329972 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject Saitama.CommonObject::get_Parent()
extern "C"  Il2CppObject * CommonObject_get_Parent_m2017732078 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::set_Parent(Saitama.ICommonObject)
extern "C"  void CommonObject_set_Parent_m2262418507 (CommonObject_t2416616580 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.CommonObject::get_IsActive()
extern "C"  bool CommonObject_get_IsActive_m3721200528 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Saitama.CommonObject::get_Name()
extern "C"  String_t* CommonObject_get_Name_m3170859234 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::set_Name(System.String)
extern "C"  void CommonObject_set_Name_m3597710471 (CommonObject_t2416616580 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Saitama.CommonObject::get_Transform()
extern "C"  Transform_t3275118058 * CommonObject_get_Transform_m799491988 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::set_Transform(UnityEngine.Transform)
extern "C"  void CommonObject_set_Transform_m80714917 (CommonObject_t2416616580 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::Dispose(Saitama.ICommonObject)
extern "C"  void CommonObject_Dispose_m2560704937 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::Dispose(Saitama.ICommonObject,UnityEngine.Component)
extern "C"  void CommonObject_Dispose_m2140386277 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Component_t3819376471 * ___comp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::Dispose(Saitama.ICommonObject,System.Single)
extern "C"  void CommonObject_Dispose_m149525322 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, float ___seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::Dispose(Saitama.ICommonObject,UnityEngine.Component,System.Single)
extern "C"  void CommonObject_Dispose_m2834227276 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Component_t3819376471 * ___comp1, float ___seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.CommonObject::WaitForDispose(Saitama.ICommonObject,UnityEngine.Component,System.Single)
extern "C"  Il2CppObject * CommonObject_WaitForDispose_m750326460 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Component_t3819376471 * ___comp1, float ___seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::Init()
extern "C"  void CommonObject_Init_m2915623293 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::AssignMonoComponentTypes(UnityEngine.GameObject,System.Type[])
extern "C"  void CommonObject_AssignMonoComponentTypes_m3165278050 (CommonObject_t2416616580 * __this, GameObject_t1756533147 * ___go0, TypeU5BU5D_t1664964607* ___componentTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo Saitama.CommonObject::GetPrefabInfo(System.Type)
extern "C"  FieldInfo_t * CommonObject_GetPrefabInfo_m966427543 (CommonObject_t2416616580 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject Saitama.CommonObject::GetComponent(System.Type,System.String)
extern "C"  Il2CppObject * CommonObject_GetComponent_m1404604705 (CommonObject_t2416616580 * __this, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Saitama.ICommonObject> Saitama.CommonObject::GetComponents(System.Type,System.String)
extern "C"  List_1_t609612457 * CommonObject_GetComponents_m1537223176 (CommonObject_t2416616580 * __this, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Saitama.ICommonObject> Saitama.CommonObject::GetComponents(System.Func`2<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>,System.Boolean>)
extern "C"  List_1_t609612457 * CommonObject_GetComponents_m2082971437 (CommonObject_t2416616580 * __this, Func_2_t3563413762 * ___predicate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.CommonObject::OnLoadingPercent(System.Action`1<System.Single>,System.Single)
extern "C"  Il2CppObject * CommonObject_OnLoadingPercent_m3299235 (CommonObject_t2416616580 * __this, Action_1_t1878309314 * ___act0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.CommonObject::OnLoadingPercent(System.Action`1<System.Single>,System.Func`1<System.Boolean>,System.Single)
extern "C"  Il2CppObject * CommonObject_OnLoadingPercent_m3479551428 (CommonObject_t2416616580 * __this, Action_1_t1878309314 * ___act0, Func_1_t1485000104 * ___cond1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.CommonObject::OnLoadingPercent(System.Action`1<System.Single>,System.Action,System.Single)
extern "C"  Il2CppObject * CommonObject_OnLoadingPercent_m2115319184 (CommonObject_t2416616580 * __this, Action_1_t1878309314 * ___act0, Action_t3226471752 * ___post1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Saitama.CommonObject::OnLoadingPercent(System.Action`1<System.Single>,System.Action,System.Action,System.Single)
extern "C"  Il2CppObject * CommonObject_OnLoadingPercent_m169969667 (CommonObject_t2416616580 * __this, Action_1_t1878309314 * ___act0, Action_t3226471752 * ___pre1, Action_t3226471752 * ___post2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject[] Saitama.CommonObject::GetAllComponents()
extern "C"  ICommonObjectU5BU5D_t3930666288* CommonObject_GetAllComponents_m688714744 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject[] Saitama.CommonObject::GetAllComponents(System.Func`2<Saitama.ICommonObject,System.Boolean>)
extern "C"  ICommonObjectU5BU5D_t3930666288* CommonObject_GetAllComponents_m1898745695 (CommonObject_t2416616580 * __this, Func_2_t4277661758 * ___predicate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::SetComponent(Saitama.ICommonObject,System.String)
extern "C"  void CommonObject_SetComponent_m493104197 (CommonObject_t2416616580 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::SetComponents(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>>)
extern "C"  void CommonObject_SetComponents_m1905020290 (CommonObject_t2416616580 * __this, Il2CppObject* ___components0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::RemoveComponent(Saitama.ICommonObject,System.String)
extern "C"  void CommonObject_RemoveComponent_m2116355201 (CommonObject_t2416616580 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::SetRawComponent(Saitama.RawComponent,System.String)
extern "C"  void CommonObject_SetRawComponent_m2107473615 (CommonObject_t2416616580 * __this, RawComponent_t2470838143 * ___rawComponent0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.RawComponent Saitama.CommonObject::GetRawComponent(System.Type,System.String)
extern "C"  RawComponent_t2470838143 * CommonObject_GetRawComponent_m1873916259 (CommonObject_t2416616580 * __this, Type_t * ___type0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine Saitama.CommonObject::StartCoroutine(System.String)
extern "C"  Coroutine_t2299508840 * CommonObject_StartCoroutine_m4066137237 (CommonObject_t2416616580 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine Saitama.CommonObject::StartCoroutine(System.String,System.Object)
extern "C"  Coroutine_t2299508840 * CommonObject_StartCoroutine_m3702744131 (CommonObject_t2416616580 * __this, String_t* ___methodName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine Saitama.CommonObject::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t2299508840 * CommonObject_StartCoroutine_m3192724832 (CommonObject_t2416616580 * __this, Il2CppObject * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::StopCoroutine(System.String)
extern "C"  void CommonObject_StopCoroutine_m4064203267 (CommonObject_t2416616580 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::StopCoroutine(System.Collections.IEnumerator)
extern "C"  void CommonObject_StopCoroutine_m591361892 (CommonObject_t2416616580 * __this, Il2CppObject * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::StopCoroutine(UnityEngine.Coroutine)
extern "C"  void CommonObject_StopCoroutine_m663824190 (CommonObject_t2416616580 * __this, Coroutine_t2299508840 * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::Setup()
extern "C"  void CommonObject_Setup_m1346838560 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::SetActive(System.Boolean)
extern "C"  void CommonObject_SetActive_m3639093606 (CommonObject_t2416616580 * __this, bool ___isActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject Saitama.CommonObject::Clone()
extern "C"  Il2CppObject * CommonObject_Clone_m2088850638 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CommonObject::Dispose()
extern "C"  void CommonObject_Dispose_m4028219052 (CommonObject_t2416616580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject Saitama.CommonObject::<GetComponents>m__0(System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>)
extern "C"  Il2CppObject * CommonObject_U3CGetComponentsU3Em__0_m4199158622 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3989625033  ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject Saitama.CommonObject::<GetAllComponents>m__1(System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>)
extern "C"  Il2CppObject * CommonObject_U3CGetAllComponentsU3Em__1_m2973693908 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3989625033  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.ICommonObject Saitama.CommonObject::<GetAllComponents>m__2(System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>)
extern "C"  Il2CppObject * CommonObject_U3CGetAllComponentsU3Em__2_m150361189 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3989625033  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.RawComponent Saitama.CommonObject::<GetRawComponent>m__4(System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Type,System.String>,Saitama.RawComponent>)
extern "C"  RawComponent_t2470838143 * CommonObject_U3CGetRawComponentU3Em__4_m1878877203 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t1989385368  ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
