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

// System.Action`1<UnityEngine.Experimental.Director.Playable>
struct Action_1_t3469344930;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Play3667545548.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<UnityEngine.Experimental.Director.Playable>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2820836195_gshared (Action_1_t3469344930 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2820836195(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t3469344930 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2820836195_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.Experimental.Director.Playable>::Invoke(T)
extern "C"  void Action_1_Invoke_m4230181879_gshared (Action_1_t3469344930 * __this, Playable_t3667545548  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m4230181879(__this, ___obj0, method) ((  void (*) (Action_1_t3469344930 *, Playable_t3667545548 , const MethodInfo*))Action_1_Invoke_m4230181879_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.Experimental.Director.Playable>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3939923902_gshared (Action_1_t3469344930 * __this, Playable_t3667545548  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m3939923902(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t3469344930 *, Playable_t3667545548 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3939923902_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.Experimental.Director.Playable>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2477520633_gshared (Action_1_t3469344930 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m2477520633(__this, ___result0, method) ((  void (*) (Action_1_t3469344930 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2477520633_gshared)(__this, ___result0, method)
