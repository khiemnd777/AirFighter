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

// System.Func`3<System.Single,System.Single,System.Single>
struct Func_3_t121963928;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`3<System.Single,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m1995478764_gshared (Func_3_t121963928 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_3__ctor_m1995478764(__this, ___object0, ___method1, method) ((  void (*) (Func_3_t121963928 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m1995478764_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`3<System.Single,System.Single,System.Single>::Invoke(T1,T2)
extern "C"  float Func_3_Invoke_m1519533199_gshared (Func_3_t121963928 * __this, float ___arg10, float ___arg21, const MethodInfo* method);
#define Func_3_Invoke_m1519533199(__this, ___arg10, ___arg21, method) ((  float (*) (Func_3_t121963928 *, float, float, const MethodInfo*))Func_3_Invoke_m1519533199_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Func`3<System.Single,System.Single,System.Single>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m3117088782_gshared (Func_3_t121963928 * __this, float ___arg10, float ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Func_3_BeginInvoke_m3117088782(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Func_3_t121963928 *, float, float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m3117088782_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// TResult System.Func`3<System.Single,System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_3_EndInvoke_m1827987484_gshared (Func_3_t121963928 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_3_EndInvoke_m1827987484(__this, ___result0, method) ((  float (*) (Func_3_t121963928 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m1827987484_gshared)(__this, ___result0, method)
