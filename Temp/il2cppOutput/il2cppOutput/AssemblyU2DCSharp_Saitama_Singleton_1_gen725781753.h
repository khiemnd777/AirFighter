#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.EventEmitter
struct EventEmitter_t724165420;

#include "AssemblyU2DCSharp_Saitama_Singleton2209039223.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Singleton`1<Saitama.EventEmitter>
struct  Singleton_1_t725781753  : public Singleton_t2209039223
{
public:

public:
};

struct Singleton_1_t725781753_StaticFields
{
public:
	// T Saitama.Singleton`1::instance
	EventEmitter_t724165420 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(Singleton_1_t725781753_StaticFields, ___instance_1)); }
	inline EventEmitter_t724165420 * get_instance_1() const { return ___instance_1; }
	inline EventEmitter_t724165420 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(EventEmitter_t724165420 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
