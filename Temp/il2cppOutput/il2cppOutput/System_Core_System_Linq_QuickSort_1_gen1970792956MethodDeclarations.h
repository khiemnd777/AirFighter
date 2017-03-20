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

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t1970792956;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t1798778454;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C"  void QuickSort_1__ctor_m1650062348_gshared (QuickSort_1_t1970792956 * __this, Il2CppObject* ___source0, SortContext_1_t1798778454 * ___context1, const MethodInfo* method);
#define QuickSort_1__ctor_m1650062348(__this, ___source0, ___context1, method) ((  void (*) (QuickSort_1_t1970792956 *, Il2CppObject*, SortContext_1_t1798778454 *, const MethodInfo*))QuickSort_1__ctor_m1650062348_gshared)(__this, ___source0, ___context1, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C"  Int32U5BU5D_t3030399641* QuickSort_1_CreateIndexes_m2577858579_gshared (Il2CppObject * __this /* static, unused */, int32_t ___length0, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m2577858579(__this /* static, unused */, ___length0, method) ((  Int32U5BU5D_t3030399641* (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m2577858579_gshared)(__this /* static, unused */, ___length0, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C"  void QuickSort_1_PerformSort_m3295377581_gshared (QuickSort_1_t1970792956 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m3295377581(__this, method) ((  void (*) (QuickSort_1_t1970792956 *, const MethodInfo*))QuickSort_1_PerformSort_m3295377581_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C"  int32_t QuickSort_1_CompareItems_m2598468721_gshared (QuickSort_1_t1970792956 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define QuickSort_1_CompareItems_m2598468721(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (QuickSort_1_t1970792956 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m2598468721_gshared)(__this, ___first_index0, ___second_index1, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C"  int32_t QuickSort_1_MedianOfThree_m968647497_gshared (QuickSort_1_t1970792956 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m968647497(__this, ___left0, ___right1, method) ((  int32_t (*) (QuickSort_1_t1970792956 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m968647497_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C"  void QuickSort_1_Sort_m700141710_gshared (QuickSort_1_t1970792956 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_Sort_m700141710(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t1970792956 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m700141710_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C"  void QuickSort_1_InsertionSort_m3575279495_gshared (QuickSort_1_t1970792956 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m3575279495(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t1970792956 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m3575279495_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C"  void QuickSort_1_Swap_m1740429939_gshared (QuickSort_1_t1970792956 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_Swap_m1740429939(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t1970792956 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m1740429939_gshared)(__this, ___left0, ___right1, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C"  Il2CppObject* QuickSort_1_Sort_m2490553768_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___source0, SortContext_1_t1798778454 * ___context1, const MethodInfo* method);
#define QuickSort_1_Sort_m2490553768(__this /* static, unused */, ___source0, ___context1, method) ((  Il2CppObject* (*) (Il2CppObject * /* static, unused */, Il2CppObject*, SortContext_1_t1798778454 *, const MethodInfo*))QuickSort_1_Sort_m2490553768_gshared)(__this /* static, unused */, ___source0, ___context1, method)
