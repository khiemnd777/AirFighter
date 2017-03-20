#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.EventEmitter/<RemoveListener>c__AnonStorey0
struct  U3CRemoveListenerU3Ec__AnonStorey0_t3863899938  : public Il2CppObject
{
public:
	// System.Object Saitama.EventEmitter/<RemoveListener>c__AnonStorey0::listenerObject
	Il2CppObject * ___listenerObject_0;
	// System.String Saitama.EventEmitter/<RemoveListener>c__AnonStorey0::listenerMethod
	String_t* ___listenerMethod_1;

public:
	inline static int32_t get_offset_of_listenerObject_0() { return static_cast<int32_t>(offsetof(U3CRemoveListenerU3Ec__AnonStorey0_t3863899938, ___listenerObject_0)); }
	inline Il2CppObject * get_listenerObject_0() const { return ___listenerObject_0; }
	inline Il2CppObject ** get_address_of_listenerObject_0() { return &___listenerObject_0; }
	inline void set_listenerObject_0(Il2CppObject * value)
	{
		___listenerObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___listenerObject_0, value);
	}

	inline static int32_t get_offset_of_listenerMethod_1() { return static_cast<int32_t>(offsetof(U3CRemoveListenerU3Ec__AnonStorey0_t3863899938, ___listenerMethod_1)); }
	inline String_t* get_listenerMethod_1() const { return ___listenerMethod_1; }
	inline String_t** get_address_of_listenerMethod_1() { return &___listenerMethod_1; }
	inline void set_listenerMethod_1(String_t* value)
	{
		___listenerMethod_1 = value;
		Il2CppCodeGenWriteBarrier(&___listenerMethod_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
