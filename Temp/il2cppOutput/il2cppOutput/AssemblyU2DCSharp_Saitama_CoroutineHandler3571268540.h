#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>
struct Dictionary_2_t2749927143;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.IEnumerator>>
struct Dictionary_2_t1000617977;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Collections.IEnumerator>
struct List_1_t835147881;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.IEnumerator>
struct Dictionary_2_t3380806011;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.CoroutineHandler
struct  CoroutineHandler_t3571268540  : public Il2CppObject
{
public:
	// System.Object Saitama.CoroutineHandler::_obj
	Il2CppObject * ____obj_2;
	// System.Type Saitama.CoroutineHandler::_type
	Type_t * ____type_3;
	// System.Collections.Generic.List`1<System.Collections.IEnumerator> Saitama.CoroutineHandler::_routines
	List_1_t835147881 * ____routines_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.IEnumerator> Saitama.CoroutineHandler::_names
	Dictionary_2_t3380806011 * ____names_5;

public:
	inline static int32_t get_offset_of__obj_2() { return static_cast<int32_t>(offsetof(CoroutineHandler_t3571268540, ____obj_2)); }
	inline Il2CppObject * get__obj_2() const { return ____obj_2; }
	inline Il2CppObject ** get_address_of__obj_2() { return &____obj_2; }
	inline void set__obj_2(Il2CppObject * value)
	{
		____obj_2 = value;
		Il2CppCodeGenWriteBarrier(&____obj_2, value);
	}

	inline static int32_t get_offset_of__type_3() { return static_cast<int32_t>(offsetof(CoroutineHandler_t3571268540, ____type_3)); }
	inline Type_t * get__type_3() const { return ____type_3; }
	inline Type_t ** get_address_of__type_3() { return &____type_3; }
	inline void set__type_3(Type_t * value)
	{
		____type_3 = value;
		Il2CppCodeGenWriteBarrier(&____type_3, value);
	}

	inline static int32_t get_offset_of__routines_4() { return static_cast<int32_t>(offsetof(CoroutineHandler_t3571268540, ____routines_4)); }
	inline List_1_t835147881 * get__routines_4() const { return ____routines_4; }
	inline List_1_t835147881 ** get_address_of__routines_4() { return &____routines_4; }
	inline void set__routines_4(List_1_t835147881 * value)
	{
		____routines_4 = value;
		Il2CppCodeGenWriteBarrier(&____routines_4, value);
	}

	inline static int32_t get_offset_of__names_5() { return static_cast<int32_t>(offsetof(CoroutineHandler_t3571268540, ____names_5)); }
	inline Dictionary_2_t3380806011 * get__names_5() const { return ____names_5; }
	inline Dictionary_2_t3380806011 ** get_address_of__names_5() { return &____names_5; }
	inline void set__names_5(Dictionary_2_t3380806011 * value)
	{
		____names_5 = value;
		Il2CppCodeGenWriteBarrier(&____names_5, value);
	}
};

struct CoroutineHandler_t3571268540_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>> Saitama.CoroutineHandler::routines
	Dictionary_2_t2749927143 * ___routines_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.IEnumerator>> Saitama.CoroutineHandler::names
	Dictionary_2_t1000617977 * ___names_1;

public:
	inline static int32_t get_offset_of_routines_0() { return static_cast<int32_t>(offsetof(CoroutineHandler_t3571268540_StaticFields, ___routines_0)); }
	inline Dictionary_2_t2749927143 * get_routines_0() const { return ___routines_0; }
	inline Dictionary_2_t2749927143 ** get_address_of_routines_0() { return &___routines_0; }
	inline void set_routines_0(Dictionary_2_t2749927143 * value)
	{
		___routines_0 = value;
		Il2CppCodeGenWriteBarrier(&___routines_0, value);
	}

	inline static int32_t get_offset_of_names_1() { return static_cast<int32_t>(offsetof(CoroutineHandler_t3571268540_StaticFields, ___names_1)); }
	inline Dictionary_2_t1000617977 * get_names_1() const { return ___names_1; }
	inline Dictionary_2_t1000617977 ** get_address_of_names_1() { return &___names_1; }
	inline void set_names_1(Dictionary_2_t1000617977 * value)
	{
		___names_1 = value;
		Il2CppCodeGenWriteBarrier(&___names_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
