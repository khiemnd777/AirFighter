#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Saitama.ICommonObject
struct ICommonObject_t1240491325;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.MonoController
struct  MonoController_t2943651575  : public MonoBehaviour_t1158329972
{
public:
	// Saitama.ICommonObject Saitama.MonoController::_commonObject
	Il2CppObject * ____commonObject_2;

public:
	inline static int32_t get_offset_of__commonObject_2() { return static_cast<int32_t>(offsetof(MonoController_t2943651575, ____commonObject_2)); }
	inline Il2CppObject * get__commonObject_2() const { return ____commonObject_2; }
	inline Il2CppObject ** get_address_of__commonObject_2() { return &____commonObject_2; }
	inline void set__commonObject_2(Il2CppObject * value)
	{
		____commonObject_2 = value;
		Il2CppCodeGenWriteBarrier(&____commonObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
