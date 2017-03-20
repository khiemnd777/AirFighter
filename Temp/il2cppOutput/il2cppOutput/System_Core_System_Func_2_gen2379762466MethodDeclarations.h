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

// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t2379762466;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Func`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2794862261_gshared (Func_2_t2379762466 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m2794862261(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t2379762466 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2794862261_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Object,UnityEngine.Vector3>::Invoke(T)
extern "C"  Vector3_t2243707580  Func_2_Invoke_m2257704531_gshared (Func_2_t2379762466 * __this, Il2CppObject * ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m2257704531(__this, ___arg10, method) ((  Vector3_t2243707580  (*) (Func_2_t2379762466 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m2257704531_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Object,UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m2983728616_gshared (Func_2_t2379762466 * __this, Il2CppObject * ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m2983728616(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t2379762466 *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m2983728616_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Object,UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t2243707580  Func_2_EndInvoke_m1884742417_gshared (Func_2_t2379762466 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m1884742417(__this, ___result0, method) ((  Vector3_t2243707580  (*) (Func_2_t2379762466 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m1884742417_gshared)(__this, ___result0, method)
