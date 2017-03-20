#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>>
struct List_1_t3358746165;
// System.Collections.Generic.IDictionary`2<System.Collections.Generic.KeyValuePair`2<System.Type,System.String>,Saitama.RawComponent>
struct IDictionary_2_t2231123567;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Saitama.ICommonObject
struct ICommonObject_t1240491325;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>,Saitama.ICommonObject>
struct Func_2_t978330369;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Type,System.String>,Saitama.RawComponent>,Saitama.RawComponent>
struct Func_2_t700333400;

#include "UnityEngine_UnityEngine_Object1021602117.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.CommonObject
struct  CommonObject_t2416616580  : public Object_t1021602117
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>> Saitama.CommonObject::_components
	List_1_t3358746165 * ____components_2;
	// System.Collections.Generic.IDictionary`2<System.Collections.Generic.KeyValuePair`2<System.Type,System.String>,Saitama.RawComponent> Saitama.CommonObject::_rawComponents
	Il2CppObject* ____rawComponents_3;
	// System.Boolean Saitama.CommonObject::_isActive
	bool ____isActive_4;
	// UnityEngine.MonoBehaviour Saitama.CommonObject::_mono
	MonoBehaviour_t1158329972 * ____mono_5;
	// Saitama.ICommonObject Saitama.CommonObject::_parent
	Il2CppObject * ____parent_6;
	// UnityEngine.Transform Saitama.CommonObject::_transform
	Transform_t3275118058 * ____transform_7;
	// System.String Saitama.CommonObject::_name
	String_t* ____name_8;

public:
	inline static int32_t get_offset_of__components_2() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580, ____components_2)); }
	inline List_1_t3358746165 * get__components_2() const { return ____components_2; }
	inline List_1_t3358746165 ** get_address_of__components_2() { return &____components_2; }
	inline void set__components_2(List_1_t3358746165 * value)
	{
		____components_2 = value;
		Il2CppCodeGenWriteBarrier(&____components_2, value);
	}

	inline static int32_t get_offset_of__rawComponents_3() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580, ____rawComponents_3)); }
	inline Il2CppObject* get__rawComponents_3() const { return ____rawComponents_3; }
	inline Il2CppObject** get_address_of__rawComponents_3() { return &____rawComponents_3; }
	inline void set__rawComponents_3(Il2CppObject* value)
	{
		____rawComponents_3 = value;
		Il2CppCodeGenWriteBarrier(&____rawComponents_3, value);
	}

	inline static int32_t get_offset_of__isActive_4() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580, ____isActive_4)); }
	inline bool get__isActive_4() const { return ____isActive_4; }
	inline bool* get_address_of__isActive_4() { return &____isActive_4; }
	inline void set__isActive_4(bool value)
	{
		____isActive_4 = value;
	}

	inline static int32_t get_offset_of__mono_5() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580, ____mono_5)); }
	inline MonoBehaviour_t1158329972 * get__mono_5() const { return ____mono_5; }
	inline MonoBehaviour_t1158329972 ** get_address_of__mono_5() { return &____mono_5; }
	inline void set__mono_5(MonoBehaviour_t1158329972 * value)
	{
		____mono_5 = value;
		Il2CppCodeGenWriteBarrier(&____mono_5, value);
	}

	inline static int32_t get_offset_of__parent_6() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580, ____parent_6)); }
	inline Il2CppObject * get__parent_6() const { return ____parent_6; }
	inline Il2CppObject ** get_address_of__parent_6() { return &____parent_6; }
	inline void set__parent_6(Il2CppObject * value)
	{
		____parent_6 = value;
		Il2CppCodeGenWriteBarrier(&____parent_6, value);
	}

	inline static int32_t get_offset_of__transform_7() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580, ____transform_7)); }
	inline Transform_t3275118058 * get__transform_7() const { return ____transform_7; }
	inline Transform_t3275118058 ** get_address_of__transform_7() { return &____transform_7; }
	inline void set__transform_7(Transform_t3275118058 * value)
	{
		____transform_7 = value;
		Il2CppCodeGenWriteBarrier(&____transform_7, value);
	}

	inline static int32_t get_offset_of__name_8() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580, ____name_8)); }
	inline String_t* get__name_8() const { return ____name_8; }
	inline String_t** get_address_of__name_8() { return &____name_8; }
	inline void set__name_8(String_t* value)
	{
		____name_8 = value;
		Il2CppCodeGenWriteBarrier(&____name_8, value);
	}
};

struct CommonObject_t2416616580_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>,Saitama.ICommonObject> Saitama.CommonObject::<>f__am$cache0
	Func_2_t978330369 * ___U3CU3Ef__amU24cache0_9;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>,Saitama.ICommonObject> Saitama.CommonObject::<>f__am$cache1
	Func_2_t978330369 * ___U3CU3Ef__amU24cache1_10;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<Saitama.ICommonObject,System.String>,Saitama.ICommonObject> Saitama.CommonObject::<>f__am$cache2
	Func_2_t978330369 * ___U3CU3Ef__amU24cache2_11;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Type,System.String>,Saitama.RawComponent>,Saitama.RawComponent> Saitama.CommonObject::<>f__am$cache3
	Func_2_t700333400 * ___U3CU3Ef__amU24cache3_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Func_2_t978330369 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Func_2_t978330369 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Func_2_t978330369 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline Func_2_t978330369 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline Func_2_t978330369 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(Func_2_t978330369 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_11() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580_StaticFields, ___U3CU3Ef__amU24cache2_11)); }
	inline Func_2_t978330369 * get_U3CU3Ef__amU24cache2_11() const { return ___U3CU3Ef__amU24cache2_11; }
	inline Func_2_t978330369 ** get_address_of_U3CU3Ef__amU24cache2_11() { return &___U3CU3Ef__amU24cache2_11; }
	inline void set_U3CU3Ef__amU24cache2_11(Func_2_t978330369 * value)
	{
		___U3CU3Ef__amU24cache2_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_12() { return static_cast<int32_t>(offsetof(CommonObject_t2416616580_StaticFields, ___U3CU3Ef__amU24cache3_12)); }
	inline Func_2_t700333400 * get_U3CU3Ef__amU24cache3_12() const { return ___U3CU3Ef__amU24cache3_12; }
	inline Func_2_t700333400 ** get_address_of_U3CU3Ef__amU24cache3_12() { return &___U3CU3Ef__amU24cache3_12; }
	inline void set_U3CU3Ef__amU24cache3_12(Func_2_t700333400 * value)
	{
		___U3CU3Ef__amU24cache3_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
