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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1300593496;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m258655046_gshared (Comparison_1_t1300593496 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m258655046(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t1300593496 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m258655046_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2407609722_gshared (Comparison_1_t1300593496 * __this, KeyValuePair_2_t38854645  ___x0, KeyValuePair_2_t38854645  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m2407609722(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t1300593496 *, KeyValuePair_2_t38854645 , KeyValuePair_2_t38854645 , const MethodInfo*))Comparison_1_Invoke_m2407609722_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m1988197935_gshared (Comparison_1_t1300593496 * __this, KeyValuePair_2_t38854645  ___x0, KeyValuePair_2_t38854645  ___y1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1988197935(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t1300593496 *, KeyValuePair_2_t38854645 , KeyValuePair_2_t38854645 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m1988197935_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2681344252_gshared (Comparison_1_t1300593496 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2681344252(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t1300593496 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2681344252_gshared)(__this, ___result0, method)
