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

// Saitama.FlyableControls.FlyableControlFactory
struct FlyableControlFactory_t740196392;
// Saitama.FlyableControls.IFlyableControlFactory
struct IFlyableControlFactory_t3636124179;
// Saitama.FlyableControls.IFlyableControl
struct IFlyableControl_t1094058737;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Saitama.FlyableControls.FlyableControlFactory::.ctor()
extern "C"  void FlyableControlFactory__ctor_m1977734504 (FlyableControlFactory_t740196392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.FlyableControls.IFlyableControlFactory Saitama.FlyableControls.FlyableControlFactory::get_Instance()
extern "C"  Il2CppObject * FlyableControlFactory_get_Instance_m4045020693 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Saitama.FlyableControls.IFlyableControl Saitama.FlyableControls.FlyableControlFactory::CreateFlyableControl(System.Type,System.Object)
extern "C"  Il2CppObject * FlyableControlFactory_CreateFlyableControl_m1411203290 (FlyableControlFactory_t740196392 * __this, Type_t * ___flyableControlType0, Il2CppObject * ___mono1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
