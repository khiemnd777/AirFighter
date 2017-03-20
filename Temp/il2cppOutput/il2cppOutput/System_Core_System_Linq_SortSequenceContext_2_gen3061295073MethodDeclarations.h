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

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t3061295073;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2825504181;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t1798778454;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection759359329.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m2181983522_gshared (SortSequenceContext_2_t3061295073 * __this, Func_2_t2825504181 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t1798778454 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m2181983522(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t3061295073 *, Func_2_t2825504181 *, Il2CppObject*, int32_t, SortContext_1_t1798778454 *, const MethodInfo*))SortSequenceContext_2__ctor_m2181983522_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m2437603572_gshared (SortSequenceContext_2_t3061295073 * __this, ObjectU5BU5D_t3614634134* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m2437603572(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t3061295073 *, ObjectU5BU5D_t3614634134*, const MethodInfo*))SortSequenceContext_2_Initialize_m2437603572_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m259092091_gshared (SortSequenceContext_2_t3061295073 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m259092091(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t3061295073 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m259092091_gshared)(__this, ___first_index0, ___second_index1, method)
