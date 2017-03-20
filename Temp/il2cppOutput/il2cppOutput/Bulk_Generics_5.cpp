#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23574108151.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23574108151MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m322458542_gshared (KeyValuePair_2_t3574108151 * __this, KeyValuePair_2_t38854645  ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		KeyValuePair_2_t38854645  L_0 = ___key0;
		KeyValuePair_2_set_Key_m3424856467((KeyValuePair_2_t3574108151 *)__this, (KeyValuePair_2_t38854645 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3604752539((KeyValuePair_2_t3574108151 *)__this, (Il2CppObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m322458542_AdjustorThunk (Il2CppObject * __this, KeyValuePair_2_t38854645  ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t3574108151 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574108151 *>(__this + 1);
	KeyValuePair_2__ctor_m322458542(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_Key()
extern "C"  KeyValuePair_2_t38854645  KeyValuePair_2_get_Key_m2718866132_gshared (KeyValuePair_2_t3574108151 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t38854645  L_0 = (KeyValuePair_2_t38854645 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  KeyValuePair_2_t38854645  KeyValuePair_2_get_Key_m2718866132_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3574108151 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574108151 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2718866132(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3424856467_gshared (KeyValuePair_2_t3574108151 * __this, KeyValuePair_2_t38854645  ___value0, const MethodInfo* method)
{
	{
		KeyValuePair_2_t38854645  L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3424856467_AdjustorThunk (Il2CppObject * __this, KeyValuePair_2_t38854645  ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3574108151 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574108151 *>(__this + 1);
	KeyValuePair_2_set_Key_m3424856467(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m2761366860_gshared (KeyValuePair_2_t3574108151 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m2761366860_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3574108151 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574108151 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2761366860(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3604752539_gshared (KeyValuePair_2_t3574108151 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3604752539_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3574108151 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574108151 *>(__this + 1);
	KeyValuePair_2_set_Value_m3604752539(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::ToString()
extern Il2CppClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029431;
extern Il2CppCodeGenString* _stringLiteral811305474;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t KeyValuePair_2_ToString_m1642034477_MetadataUsageId;
extern "C"  String_t* KeyValuePair_2_ToString_m1642034477_gshared (KeyValuePair_2_t3574108151 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1642034477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t38854645  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Il2CppObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1642385972* G_B2_1 = NULL;
	StringU5BU5D_t1642385972* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1642385972* G_B1_1 = NULL;
	StringU5BU5D_t1642385972* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1642385972* G_B3_2 = NULL;
	StringU5BU5D_t1642385972* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1642385972* G_B5_1 = NULL;
	StringU5BU5D_t1642385972* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1642385972* G_B4_1 = NULL;
	StringU5BU5D_t1642385972* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1642385972* G_B6_2 = NULL;
	StringU5BU5D_t1642385972* G_B6_3 = NULL;
	{
		StringU5BU5D_t1642385972* L_0 = (StringU5BU5D_t1642385972*)((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral372029431);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral372029431);
		StringU5BU5D_t1642385972* L_1 = (StringU5BU5D_t1642385972*)L_0;
		KeyValuePair_2_t38854645  L_2 = KeyValuePair_2_get_Key_m2718866132((KeyValuePair_2_t3574108151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		KeyValuePair_2_t38854645  L_3 = KeyValuePair_2_get_Key_m2718866132((KeyValuePair_2_t3574108151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (KeyValuePair_2_t38854645 )L_3;
		Il2CppClass* il2cpp_this_typeinfo_47 = IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3);
		String_t* L_4 = ((  String_t* (*) (Il2CppObject *, const MethodInfo*))il2cpp_this_typeinfo_47->vtable[3].methodPtr)((Il2CppObject *)il2cpp_codegen_fake_box((&V_0)), /*hidden argument*/il2cpp_this_typeinfo_47->vtable[3].method);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1642385972* L_6 = (StringU5BU5D_t1642385972*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral811305474);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral811305474);
		StringU5BU5D_t1642385972* L_7 = (StringU5BU5D_t1642385972*)L_6;
		Il2CppObject * L_8 = KeyValuePair_2_get_Value_m2761366860((KeyValuePair_2_t3574108151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Il2CppObject * L_9 = KeyValuePair_2_get_Value_m2761366860((KeyValuePair_2_t3574108151 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppObject *)L_9;
		NullCheck((Il2CppObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1642385972* L_12 = (StringU5BU5D_t1642385972*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral372029425);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m626692867(NULL /*static, unused*/, (StringU5BU5D_t1642385972*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1642034477_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3574108151 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574108151 *>(__this + 1);
	return KeyValuePair_2_ToString_m1642034477(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
