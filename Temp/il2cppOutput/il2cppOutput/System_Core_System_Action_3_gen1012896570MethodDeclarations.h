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

// System.Action`3<Saitama.InputState,System.Object,System.Single>
struct Action_3_t1012896570;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Saitama_InputState1062422333.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`3<Saitama.InputState,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_3__ctor_m829396597_gshared (Action_3_t1012896570 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_3__ctor_m829396597(__this, ___object0, ___method1, method) ((  void (*) (Action_3_t1012896570 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_3__ctor_m829396597_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`3<Saitama.InputState,System.Object,System.Single>::Invoke(T1,T2,T3)
extern "C"  void Action_3_Invoke_m2960642669_gshared (Action_3_t1012896570 * __this, int32_t ___arg10, Il2CppObject * ___arg21, float ___arg32, const MethodInfo* method);
#define Action_3_Invoke_m2960642669(__this, ___arg10, ___arg21, ___arg32, method) ((  void (*) (Action_3_t1012896570 *, int32_t, Il2CppObject *, float, const MethodInfo*))Action_3_Invoke_m2960642669_gshared)(__this, ___arg10, ___arg21, ___arg32, method)
// System.IAsyncResult System.Action`3<Saitama.InputState,System.Object,System.Single>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_3_BeginInvoke_m1316453956_gshared (Action_3_t1012896570 * __this, int32_t ___arg10, Il2CppObject * ___arg21, float ___arg32, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Action_3_BeginInvoke_m1316453956(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Action_3_t1012896570 *, int32_t, Il2CppObject *, float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_3_BeginInvoke_m1316453956_gshared)(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method)
// System.Void System.Action`3<Saitama.InputState,System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_3_EndInvoke_m116150067_gshared (Action_3_t1012896570 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_3_EndInvoke_m116150067(__this, ___result0, method) ((  void (*) (Action_3_t1012896570 *, Il2CppObject *, const MethodInfo*))Action_3_EndInvoke_m116150067_gshared)(__this, ___result0, method)
