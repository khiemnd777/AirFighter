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

// Saitama.CoroutineHandler
struct CoroutineHandler_t3571268540;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Saitama.CoroutineHandler::.ctor(System.Object)
extern "C"  void CoroutineHandler__ctor_m3492258743 (CoroutineHandler_t3571268540 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CoroutineHandler::Start(System.String,System.Object[])
extern "C"  void CoroutineHandler_Start_m1383359999 (CoroutineHandler_t3571268540 * __this, String_t* ___methodName0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CoroutineHandler::Start(System.Collections.IEnumerator)
extern "C"  void CoroutineHandler_Start_m1481744090 (CoroutineHandler_t3571268540 * __this, Il2CppObject * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CoroutineHandler::Stop(System.String)
extern "C"  void CoroutineHandler_Stop_m879954867 (CoroutineHandler_t3571268540 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CoroutineHandler::Stop(System.Collections.IEnumerator)
extern "C"  void CoroutineHandler_Stop_m619055550 (CoroutineHandler_t3571268540 * __this, Il2CppObject * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CoroutineHandler::Update()
extern "C"  void CoroutineHandler_Update_m273082644 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.CoroutineHandler::.cctor()
extern "C"  void CoroutineHandler__cctor_m2973522408 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
