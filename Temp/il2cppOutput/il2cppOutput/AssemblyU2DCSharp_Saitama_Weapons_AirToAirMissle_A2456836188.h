#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// MissleLaunchButton
struct MissleLaunchButton_t4064247000;

#include "AssemblyU2DCSharp_Saitama_Weapons_MissleHandler612507115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler
struct  AirToAirMissleHandler_t2456836188  : public MissleHandler_t612507115
{
public:
	// MissleLaunchButton Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler::_missleLaunchBtn
	MissleLaunchButton_t4064247000 * ____missleLaunchBtn_24;
	// System.Single Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler::_nextExecuteTime
	float ____nextExecuteTime_25;
	// System.Boolean Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler::_isExecuted
	bool ____isExecuted_26;

public:
	inline static int32_t get_offset_of__missleLaunchBtn_24() { return static_cast<int32_t>(offsetof(AirToAirMissleHandler_t2456836188, ____missleLaunchBtn_24)); }
	inline MissleLaunchButton_t4064247000 * get__missleLaunchBtn_24() const { return ____missleLaunchBtn_24; }
	inline MissleLaunchButton_t4064247000 ** get_address_of__missleLaunchBtn_24() { return &____missleLaunchBtn_24; }
	inline void set__missleLaunchBtn_24(MissleLaunchButton_t4064247000 * value)
	{
		____missleLaunchBtn_24 = value;
		Il2CppCodeGenWriteBarrier(&____missleLaunchBtn_24, value);
	}

	inline static int32_t get_offset_of__nextExecuteTime_25() { return static_cast<int32_t>(offsetof(AirToAirMissleHandler_t2456836188, ____nextExecuteTime_25)); }
	inline float get__nextExecuteTime_25() const { return ____nextExecuteTime_25; }
	inline float* get_address_of__nextExecuteTime_25() { return &____nextExecuteTime_25; }
	inline void set__nextExecuteTime_25(float value)
	{
		____nextExecuteTime_25 = value;
	}

	inline static int32_t get_offset_of__isExecuted_26() { return static_cast<int32_t>(offsetof(AirToAirMissleHandler_t2456836188, ____isExecuted_26)); }
	inline bool get__isExecuted_26() const { return ____isExecuted_26; }
	inline bool* get_address_of__isExecuted_26() { return &____isExecuted_26; }
	inline void set__isExecuted_26(bool value)
	{
		____isExecuted_26 = value;
	}
};

struct AirToAirMissleHandler_t2456836188_StaticFields
{
public:
	// System.String Saitama.Weapons.AirToAirMissle.AirToAirMissleHandler::Prefab
	String_t* ___Prefab_23;

public:
	inline static int32_t get_offset_of_Prefab_23() { return static_cast<int32_t>(offsetof(AirToAirMissleHandler_t2456836188_StaticFields, ___Prefab_23)); }
	inline String_t* get_Prefab_23() const { return ___Prefab_23; }
	inline String_t** get_address_of_Prefab_23() { return &___Prefab_23; }
	inline void set_Prefab_23(String_t* value)
	{
		___Prefab_23 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
