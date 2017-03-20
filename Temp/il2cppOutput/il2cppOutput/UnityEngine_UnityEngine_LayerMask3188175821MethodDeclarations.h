#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m2135076047 (Il2CppObject * __this /* static, unused */, LayerMask_t3188175821  ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C"  LayerMask_t3188175821  LayerMask_op_Implicit_m3804506591 (Il2CppObject * __this /* static, unused */, int32_t ___intVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C"  int32_t LayerMask_NameToLayer_m1506372053 (Il2CppObject * __this /* static, unused */, String_t* ___layerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C"  int32_t LayerMask_GetMask_m1046709132 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___layerNames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
