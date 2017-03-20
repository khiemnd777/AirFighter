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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Object>
struct Func_2_t3323250950;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23720882578.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2086613308_gshared (Func_2_t3323250950 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m2086613308(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t3323250950 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2086613308_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Func_2_Invoke_m2590298962_gshared (Func_2_t3323250950 * __this, KeyValuePair_2_t3720882578  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m2590298962(__this, ___arg10, method) ((  Il2CppObject * (*) (Func_2_t3323250950 *, KeyValuePair_2_t3720882578 , const MethodInfo*))Func_2_Invoke_m2590298962_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m869021993_gshared (Func_2_t3323250950 * __this, KeyValuePair_2_t3720882578  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m869021993(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t3323250950 *, KeyValuePair_2_t3720882578 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m869021993_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_2_EndInvoke_m3699662772_gshared (Func_2_t3323250950 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m3699662772(__this, ___result0, method) ((  Il2CppObject * (*) (Func_2_t3323250950 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m3699662772_gshared)(__this, ___result0, method)
