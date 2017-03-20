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

// System.Func`3<System.Int32,System.Int32,System.Int32>
struct Func_3_t4206117028;
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

// System.Void System.Func`3<System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m1634574260_gshared (Func_3_t4206117028 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_3__ctor_m1634574260(__this, ___object0, ___method1, method) ((  void (*) (Func_3_t4206117028 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m1634574260_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`3<System.Int32,System.Int32,System.Int32>::Invoke(T1,T2)
extern "C"  int32_t Func_3_Invoke_m3005461083_gshared (Func_3_t4206117028 * __this, int32_t ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Func_3_Invoke_m3005461083(__this, ___arg10, ___arg21, method) ((  int32_t (*) (Func_3_t4206117028 *, int32_t, int32_t, const MethodInfo*))Func_3_Invoke_m3005461083_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Func`3<System.Int32,System.Int32,System.Int32>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m1450245038_gshared (Func_3_t4206117028 * __this, int32_t ___arg10, int32_t ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Func_3_BeginInvoke_m1450245038(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Func_3_t4206117028 *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m1450245038_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// TResult System.Func`3<System.Int32,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_3_EndInvoke_m344779292_gshared (Func_3_t4206117028 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_3_EndInvoke_m344779292(__this, ___result0, method) ((  int32_t (*) (Func_3_t4206117028 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m344779292_gshared)(__this, ___result0, method)
