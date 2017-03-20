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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>
struct Transform_1_t2545549757;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4141934167_gshared (Transform_1_t2545549757 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4141934167(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2545549757 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4141934167_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::Invoke(TKey,TValue)
extern "C"  float Transform_1_Invoke_m3089028099_gshared (Transform_1_t2545549757 * __this, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3089028099(__this, ___key0, ___value1, method) ((  float (*) (Transform_1_t2545549757 *, Il2CppObject *, float, const MethodInfo*))Transform_1_Invoke_m3089028099_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3135879650_gshared (Transform_1_t2545549757 * __this, Il2CppObject * ___key0, float ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3135879650(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2545549757 *, Il2CppObject *, float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3135879650_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Transform_1_EndInvoke_m2738768257_gshared (Transform_1_t2545549757 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2738768257(__this, ___result0, method) ((  float (*) (Transform_1_t2545549757 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2738768257_gshared)(__this, ___result0, method)
