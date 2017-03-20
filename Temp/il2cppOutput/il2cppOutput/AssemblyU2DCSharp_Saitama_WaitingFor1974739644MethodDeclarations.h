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

// Saitama.WaitingFor
struct WaitingFor_t1974739644;
// System.Func`1<System.Boolean>
struct Func_1_t1485000104;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"

// System.Void Saitama.WaitingFor::.ctor(System.Func`1<System.Boolean>)
extern "C"  void WaitingFor__ctor_m2778969512 (WaitingFor_t1974739644 * __this, Func_1_t1485000104 * ___predicate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Saitama.WaitingFor::get_Current()
extern "C"  Il2CppObject * WaitingFor_get_Current_m1464001606 (WaitingFor_t1974739644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Saitama.WaitingFor::MoveNext()
extern "C"  bool WaitingFor_MoveNext_m1332221657 (WaitingFor_t1974739644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Saitama.WaitingFor::Reset()
extern "C"  void WaitingFor_Reset_m2425851018 (WaitingFor_t1974739644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
