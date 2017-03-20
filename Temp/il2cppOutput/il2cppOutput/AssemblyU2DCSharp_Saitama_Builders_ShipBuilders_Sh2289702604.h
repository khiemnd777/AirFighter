#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.String>>
struct ICollection_1_t2675998657;

#include "AssemblyU2DCSharp_Saitama_Builders_Builder_2_gen3780425571.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Builders.ShipBuilders.ShipBuilder`1<System.Object>
struct  ShipBuilder_1_t2289702604  : public Builder_2_t3780425571
{
public:
	// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.String>> Saitama.Builders.ShipBuilders.ShipBuilder`1::_components
	Il2CppObject* ____components_1;

public:
	inline static int32_t get_offset_of__components_1() { return static_cast<int32_t>(offsetof(ShipBuilder_1_t2289702604, ____components_1)); }
	inline Il2CppObject* get__components_1() const { return ____components_1; }
	inline Il2CppObject** get_address_of__components_1() { return &____components_1; }
	inline void set__components_1(Il2CppObject* value)
	{
		____components_1 = value;
		Il2CppCodeGenWriteBarrier(&____components_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
