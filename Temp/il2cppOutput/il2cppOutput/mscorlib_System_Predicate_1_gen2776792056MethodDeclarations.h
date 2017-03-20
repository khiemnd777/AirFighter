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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2776792056;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2359416570_gshared (Predicate_1_t2776792056 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2359416570(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t2776792056 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2359416570_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m332691618_gshared (Predicate_1_t2776792056 * __this, KeyValuePair_2_t38854645  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m332691618(__this, ___obj0, method) ((  bool (*) (Predicate_1_t2776792056 *, KeyValuePair_2_t38854645 , const MethodInfo*))Predicate_1_Invoke_m332691618_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m3157529563_gshared (Predicate_1_t2776792056 * __this, KeyValuePair_2_t38854645  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3157529563(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t2776792056 *, KeyValuePair_2_t38854645 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m3157529563_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m548603360_gshared (Predicate_1_t2776792056 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m548603360(__this, ___result0, method) ((  bool (*) (Predicate_1_t2776792056 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m548603360_gshared)(__this, ___result0, method)
