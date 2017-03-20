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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Single>
struct Func_2_t2710311587;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2438332177_gshared (Func_2_t2710311587 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m2438332177(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t2710311587 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2438332177_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Single>::Invoke(T)
extern "C"  float Func_2_Invoke_m162290603_gshared (Func_2_t2710311587 * __this, KeyValuePair_2_t3720882578  ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m162290603(__this, ___arg10, method) ((  float (*) (Func_2_t2710311587 *, KeyValuePair_2_t3720882578 , const MethodInfo*))Func_2_Invoke_m162290603_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m420214586_gshared (Func_2_t2710311587 * __this, KeyValuePair_2_t3720882578  ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m420214586(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t2710311587 *, KeyValuePair_2_t3720882578 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m420214586_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_2_EndInvoke_m4085204241_gshared (Func_2_t2710311587 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m4085204241(__this, ___result0, method) ((  float (*) (Func_2_t2710311587 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m4085204241_gshared)(__this, ___result0, method)
