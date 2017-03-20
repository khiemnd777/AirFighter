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

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2045506961;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2178801012_gshared (Action_1_t2045506961 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2178801012(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t2045506961 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2178801012_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
extern "C"  void Action_1_Invoke_m3472061792_gshared (Action_1_t2045506961 * __this, Vector2_t2243707579  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3472061792(__this, ___obj0, method) ((  void (*) (Action_1_t2045506961 *, Vector2_t2243707579 , const MethodInfo*))Action_1_Invoke_m3472061792_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m493747221_gshared (Action_1_t2045506961 * __this, Vector2_t2243707579  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m493747221(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t2045506961 *, Vector2_t2243707579 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m493747221_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1586893730_gshared (Action_1_t2045506961 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1586893730(__this, ___result0, method) ((  void (*) (Action_1_t2045506961 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1586893730_gshared)(__this, ___result0, method)
