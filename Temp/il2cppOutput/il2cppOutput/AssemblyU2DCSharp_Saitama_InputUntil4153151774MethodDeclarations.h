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

// Saitama.InputUntil
struct InputUntil_t4153151774;
// System.Action
struct Action_t3226471752;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void Saitama.InputUntil::.ctor(System.Boolean,System.Action)
extern "C"  void InputUntil__ctor_m2576641785 (InputUntil_t4153151774 * __this, bool ___input0, Action_t3226471752 * ___predicate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Saitama.InputUntil::get_Current()
extern "C"  Il2CppObject * InputUntil_get_Current_m2076270544 (InputUntil_t4153151774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.InputUntil::MoveNext()
extern "C"  bool InputUntil_MoveNext_m505724073 (InputUntil_t4153151774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.InputUntil::Reset()
extern "C"  void InputUntil_Reset_m1538731116 (InputUntil_t4153151774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
