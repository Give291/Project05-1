// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyActor1.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT05_MyActor1_generated_h
#error "MyActor1.generated.h already included, missing '#pragma once' in MyActor1.h"
#endif
#define PROJECT05_MyActor1_generated_h

#define FID_Project05_Source_Project05_Public_MyActor1_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor1(); \
	friend struct Z_Construct_UClass_AMyActor1_Statics; \
public: \
	DECLARE_CLASS(AMyActor1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project05"), NO_API) \
	DECLARE_SERIALIZER(AMyActor1)


#define FID_Project05_Source_Project05_Public_MyActor1_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyActor1(AMyActor1&&); \
	AMyActor1(const AMyActor1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor1) \
	NO_API virtual ~AMyActor1();


#define FID_Project05_Source_Project05_Public_MyActor1_h_7_PROLOG
#define FID_Project05_Source_Project05_Public_MyActor1_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project05_Source_Project05_Public_MyActor1_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project05_Source_Project05_Public_MyActor1_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT05_API UClass* StaticClass<class AMyActor1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project05_Source_Project05_Public_MyActor1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
