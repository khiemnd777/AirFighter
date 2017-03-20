#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ShipController
struct ShipController_t3277973446;
// UnityEngine.TrailRenderer
struct TrailRenderer_t2490637367;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flight
struct  Flight_t38662958  : public MonoBehaviour_t1158329972
{
public:
	// ShipController Flight::flightController
	ShipController_t3277973446 * ___flightController_2;
	// System.Boolean Flight::enableWingTrail
	bool ___enableWingTrail_3;
	// UnityEngine.TrailRenderer Flight::wingTrailLeft
	TrailRenderer_t2490637367 * ___wingTrailLeft_4;
	// UnityEngine.TrailRenderer Flight::wingTrailRight
	TrailRenderer_t2490637367 * ___wingTrailRight_5;

public:
	inline static int32_t get_offset_of_flightController_2() { return static_cast<int32_t>(offsetof(Flight_t38662958, ___flightController_2)); }
	inline ShipController_t3277973446 * get_flightController_2() const { return ___flightController_2; }
	inline ShipController_t3277973446 ** get_address_of_flightController_2() { return &___flightController_2; }
	inline void set_flightController_2(ShipController_t3277973446 * value)
	{
		___flightController_2 = value;
		Il2CppCodeGenWriteBarrier(&___flightController_2, value);
	}

	inline static int32_t get_offset_of_enableWingTrail_3() { return static_cast<int32_t>(offsetof(Flight_t38662958, ___enableWingTrail_3)); }
	inline bool get_enableWingTrail_3() const { return ___enableWingTrail_3; }
	inline bool* get_address_of_enableWingTrail_3() { return &___enableWingTrail_3; }
	inline void set_enableWingTrail_3(bool value)
	{
		___enableWingTrail_3 = value;
	}

	inline static int32_t get_offset_of_wingTrailLeft_4() { return static_cast<int32_t>(offsetof(Flight_t38662958, ___wingTrailLeft_4)); }
	inline TrailRenderer_t2490637367 * get_wingTrailLeft_4() const { return ___wingTrailLeft_4; }
	inline TrailRenderer_t2490637367 ** get_address_of_wingTrailLeft_4() { return &___wingTrailLeft_4; }
	inline void set_wingTrailLeft_4(TrailRenderer_t2490637367 * value)
	{
		___wingTrailLeft_4 = value;
		Il2CppCodeGenWriteBarrier(&___wingTrailLeft_4, value);
	}

	inline static int32_t get_offset_of_wingTrailRight_5() { return static_cast<int32_t>(offsetof(Flight_t38662958, ___wingTrailRight_5)); }
	inline TrailRenderer_t2490637367 * get_wingTrailRight_5() const { return ___wingTrailRight_5; }
	inline TrailRenderer_t2490637367 ** get_address_of_wingTrailRight_5() { return &___wingTrailRight_5; }
	inline void set_wingTrailRight_5(TrailRenderer_t2490637367 * value)
	{
		___wingTrailRight_5 = value;
		Il2CppCodeGenWriteBarrier(&___wingTrailRight_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
