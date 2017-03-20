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

// Saitama.EventEmitter
struct EventEmitter_t724165420;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Saitama.EventEmitter::.ctor()
extern "C"  void EventEmitter__ctor_m2617302757 (EventEmitter_t724165420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.EventEmitter Saitama.EventEmitter::get_Static()
extern "C"  EventEmitter_t724165420 * EventEmitter_get_Static_m1349956237 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.EventEmitter Saitama.EventEmitter::On(System.String,System.Object,System.String)
extern "C"  EventEmitter_t724165420 * EventEmitter_On_m4217312339 (EventEmitter_t724165420 * __this, String_t* ___eventName0, Il2CppObject * ___listenerObject1, String_t* ___listenerMethod2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.EventEmitter Saitama.EventEmitter::Emit(System.String,System.Object[])
extern "C"  EventEmitter_t724165420 * EventEmitter_Emit_m3588894319 (EventEmitter_t724165420 * __this, String_t* ___eventName0, ObjectU5BU5D_t3614634134* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.EventEmitter Saitama.EventEmitter::RemoveListener(System.String,System.Object,System.String)
extern "C"  EventEmitter_t724165420 * EventEmitter_RemoveListener_m606929216 (EventEmitter_t724165420 * __this, String_t* ___eventName0, Il2CppObject * ___listenerObject1, String_t* ___listenerMethod2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.EventEmitter Saitama.EventEmitter::RemoveAllListeners(System.String)
extern "C"  EventEmitter_t724165420 * EventEmitter_RemoveAllListeners_m2372954298 (EventEmitter_t724165420 * __this, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Saitama.EventEmitter::<Emit>m__0(System.Object)
extern "C"  Type_t * EventEmitter_U3CEmitU3Em__0_m4261616893 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
