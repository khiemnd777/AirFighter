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

// System.Action`1<UnityEngine.UIVertex>
struct Action_1_t1006058200;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_UIVertex1204258818.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m722292825_gshared (Action_1_t1006058200 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m722292825(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t1006058200 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m722292825_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.UIVertex>::Invoke(T)
extern "C"  void Action_1_Invoke_m2226099137_gshared (Action_1_t1006058200 * __this, UIVertex_t1204258818  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m2226099137(__this, ___obj0, method) ((  void (*) (Action_1_t1006058200 *, UIVertex_t1204258818 , const MethodInfo*))Action_1_Invoke_m2226099137_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3450966034_gshared (Action_1_t1006058200 * __this, UIVertex_t1204258818  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m3450966034(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t1006058200 *, UIVertex_t1204258818 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3450966034_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1826856235_gshared (Action_1_t1006058200 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1826856235(__this, ___result0, method) ((  void (*) (Action_1_t1006058200 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1826856235_gshared)(__this, ___result0, method)
