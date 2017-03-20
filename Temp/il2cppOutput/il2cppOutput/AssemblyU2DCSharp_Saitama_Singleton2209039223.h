#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.Type,System.Object>
struct IDictionary_2_t2625890613;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Singleton
struct  Singleton_t2209039223  : public Il2CppObject
{
public:

public:
};

struct Singleton_t2209039223_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Type,System.Object> Saitama.Singleton::allSingletons
	Il2CppObject* ___allSingletons_0;

public:
	inline static int32_t get_offset_of_allSingletons_0() { return static_cast<int32_t>(offsetof(Singleton_t2209039223_StaticFields, ___allSingletons_0)); }
	inline Il2CppObject* get_allSingletons_0() const { return ___allSingletons_0; }
	inline Il2CppObject** get_address_of_allSingletons_0() { return &___allSingletons_0; }
	inline void set_allSingletons_0(Il2CppObject* value)
	{
		___allSingletons_0 = value;
		Il2CppCodeGenWriteBarrier(&___allSingletons_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
