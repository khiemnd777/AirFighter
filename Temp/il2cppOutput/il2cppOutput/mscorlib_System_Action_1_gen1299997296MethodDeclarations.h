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

// System.Action`1<System.Reflection.CustomAttributeTypedArgument>
struct Action_1_t1299997296;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg1498197914.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m592790842_gshared (Action_1_t1299997296 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m592790842(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t1299997296 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m592790842_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C"  void Action_1_Invoke_m3721769778_gshared (Action_1_t1299997296 * __this, CustomAttributeTypedArgument_t1498197914  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3721769778(__this, ___obj0, method) ((  void (*) (Action_1_t1299997296 *, CustomAttributeTypedArgument_t1498197914 , const MethodInfo*))Action_1_Invoke_m3721769778_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1386903007_gshared (Action_1_t1299997296 * __this, CustomAttributeTypedArgument_t1498197914  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m1386903007(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t1299997296 *, CustomAttributeTypedArgument_t1498197914 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1386903007_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m350311208_gshared (Action_1_t1299997296 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m350311208(__this, ___result0, method) ((  void (*) (Action_1_t1299997296 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m350311208_gshared)(__this, ___result0, method)
