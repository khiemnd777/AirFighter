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

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1668570060;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t4112380903;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t1196406405;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t371629903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23720882578.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2988594762.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C"  void Dictionary_2__ctor_m272707874_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m272707874(__this, method) ((  void (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2__ctor_m272707874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2393410263_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m2393410263(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2393410263_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m6865029_gshared (Dictionary_2_t1668570060 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m6865029(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1668570060 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m6865029_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2415385719_gshared (Dictionary_2_t1668570060 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m2415385719(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1668570060 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m2415385719_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3825541546_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3825541546(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3825541546_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m108379695_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m108379695(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m108379695_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2492589232_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2492589232(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2492589232_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3185624899_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3185624899(__this, ___key0, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3185624899_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2155375610_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2155375610(__this, method) ((  bool (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2155375610_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3609432842_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3609432842(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3609432842_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3857130296_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3857130296(__this, method) ((  bool (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3857130296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3144693343_gshared (Dictionary_2_t1668570060 * __this, KeyValuePair_2_t3720882578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3144693343(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1668570060 *, KeyValuePair_2_t3720882578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3144693343_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2416697105_gshared (Dictionary_2_t1668570060 * __this, KeyValuePair_2_t3720882578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2416697105(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1668570060 *, KeyValuePair_2_t3720882578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2416697105_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3593932395_gshared (Dictionary_2_t1668570060 * __this, KeyValuePair_2U5BU5D_t4112380903* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3593932395(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1668570060 *, KeyValuePair_2U5BU5D_t4112380903*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3593932395_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m753176222_gshared (Dictionary_2_t1668570060 * __this, KeyValuePair_2_t3720882578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m753176222(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1668570060 *, KeyValuePair_2_t3720882578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m753176222_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1780464138_gshared (Dictionary_2_t1668570060 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1780464138(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1780464138_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m705733053_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m705733053(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m705733053_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1980079952_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1980079952(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1980079952_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2107787307_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2107787307(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2107787307_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4051963642_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m4051963642(__this, method) ((  int32_t (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_get_Count_m4051963642_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C"  float Dictionary_2_get_Item_m1530576851_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1530576851(__this, ___key0, method) ((  float (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m1530576851_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3126180080_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3126180080(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppObject *, float, const MethodInfo*))Dictionary_2_set_Item_m3126180080_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1085702062_gshared (Dictionary_2_t1668570060 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m1085702062(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1668570060 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1085702062_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m1017923325_gshared (Dictionary_2_t1668570060 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1017923325(__this, ___size0, method) ((  void (*) (Dictionary_2_t1668570060 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1017923325_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2845536235_gshared (Dictionary_2_t1668570060 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2845536235(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2845536235_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3720882578  Dictionary_2_make_pair_m487946477_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m487946477(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3720882578  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, float, const MethodInfo*))Dictionary_2_make_pair_m487946477_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C"  float Dictionary_2_pick_value_m1800028893_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m1800028893(__this /* static, unused */, ___key0, ___value1, method) ((  float (*) (Il2CppObject * /* static, unused */, Il2CppObject *, float, const MethodInfo*))Dictionary_2_pick_value_m1800028893_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3951275484_gshared (Dictionary_2_t1668570060 * __this, KeyValuePair_2U5BU5D_t4112380903* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3951275484(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1668570060 *, KeyValuePair_2U5BU5D_t4112380903*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3951275484_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C"  void Dictionary_2_Resize_m970321528_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m970321528(__this, method) ((  void (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_Resize_m970321528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m73613649_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m73613649(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppObject *, float, const MethodInfo*))Dictionary_2_Add_m73613649_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C"  void Dictionary_2_Clear_m3690555501_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3690555501(__this, method) ((  void (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_Clear_m3690555501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1609069323_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1609069323(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1609069323_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3173299003_gshared (Dictionary_2_t1668570060 * __this, float ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3173299003(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1668570060 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m3173299003_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3370612534_gshared (Dictionary_2_t1668570060 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3370612534(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1668570060 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m3370612534_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3135539520_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3135539520(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3135539520_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1125004153_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m1125004153(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1125004153_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2748209836_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, float* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2748209836(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1668570060 *, Il2CppObject *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m2748209836_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C"  ValueCollection_t371629903 * Dictionary_2_get_Values_m1955826055_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1955826055(__this, method) ((  ValueCollection_t371629903 * (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_get_Values_m1955826055_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m637607810_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m637607810(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m637607810_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C"  float Dictionary_2_ToTValue_m2573928842_gshared (Dictionary_2_t1668570060 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2573928842(__this, ___value0, method) ((  float (*) (Dictionary_2_t1668570060 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2573928842_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1442005428_gshared (Dictionary_2_t1668570060 * __this, KeyValuePair_2_t3720882578  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1442005428(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1668570060 *, KeyValuePair_2_t3720882578 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1442005428_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C"  Enumerator_t2988594762  Dictionary_2_GetEnumerator_m82318889_gshared (Dictionary_2_t1668570060 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m82318889(__this, method) ((  Enumerator_t2988594762  (*) (Dictionary_2_t1668570060 *, const MethodInfo*))Dictionary_2_GetEnumerator_m82318889_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m1000097650_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1000097650(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1000097650_gshared)(__this /* static, unused */, ___key0, ___value1, method)
