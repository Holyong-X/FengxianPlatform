// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMap/Public/Component/SuperMap_InstancedActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperMap_InstancedActor() {}
// Cross Module References
	SUPERMAP_API UClass* Z_Construct_UClass_ASuperMap_InstancedActor_NoRegister();
	SUPERMAP_API UClass* Z_Construct_UClass_ASuperMap_InstancedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SuperMap();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASuperMap_InstancedActor::StaticRegisterNativesASuperMap_InstancedActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperMap_InstancedActor);
	UClass* Z_Construct_UClass_ASuperMap_InstancedActor_NoRegister()
	{
		return ASuperMap_InstancedActor::StaticClass();
	}
	struct Z_Construct_UClass_ASuperMap_InstancedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pInstanceStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pInstanceStaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperMap_InstancedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperMap_InstancedActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Component/SuperMap_InstancedActor.h" },
		{ "ModuleRelativePath", "Public/Component/SuperMap_InstancedActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperMap_InstancedActor_Statics::NewProp_m_pInstanceStaticMeshComponent_MetaData[] = {
		{ "Category", "SupermapGIS" },
		{ "Comment", "//! \\brief Foliage????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/SuperMap_InstancedActor.h" },
		{ "ToolTip", "! \\brief Foliage????" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperMap_InstancedActor_Statics::NewProp_m_pInstanceStaticMeshComponent = { "m_pInstanceStaticMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperMap_InstancedActor, m_pInstanceStaticMeshComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASuperMap_InstancedActor_Statics::NewProp_m_pInstanceStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperMap_InstancedActor_Statics::NewProp_m_pInstanceStaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuperMap_InstancedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperMap_InstancedActor_Statics::NewProp_m_pInstanceStaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperMap_InstancedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperMap_InstancedActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperMap_InstancedActor_Statics::ClassParams = {
		&ASuperMap_InstancedActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASuperMap_InstancedActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASuperMap_InstancedActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASuperMap_InstancedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperMap_InstancedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperMap_InstancedActor()
	{
		if (!Z_Registration_Info_UClass_ASuperMap_InstancedActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperMap_InstancedActor.OuterSingleton, Z_Construct_UClass_ASuperMap_InstancedActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperMap_InstancedActor.OuterSingleton;
	}
	template<> SUPERMAP_API UClass* StaticClass<ASuperMap_InstancedActor>()
	{
		return ASuperMap_InstancedActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperMap_InstancedActor);
	struct Z_CompiledInDeferFile_FID_FengxianPlatform_Plugins_SuperMap_HiFi_3D_SDK_for_Unreal_Source_SuperMap_Public_Component_SuperMap_InstancedActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FengxianPlatform_Plugins_SuperMap_HiFi_3D_SDK_for_Unreal_Source_SuperMap_Public_Component_SuperMap_InstancedActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperMap_InstancedActor, ASuperMap_InstancedActor::StaticClass, TEXT("ASuperMap_InstancedActor"), &Z_Registration_Info_UClass_ASuperMap_InstancedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperMap_InstancedActor), 3375820529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FengxianPlatform_Plugins_SuperMap_HiFi_3D_SDK_for_Unreal_Source_SuperMap_Public_Component_SuperMap_InstancedActor_h_1507132653(TEXT("/Script/SuperMap"),
		Z_CompiledInDeferFile_FID_FengxianPlatform_Plugins_SuperMap_HiFi_3D_SDK_for_Unreal_Source_SuperMap_Public_Component_SuperMap_InstancedActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FengxianPlatform_Plugins_SuperMap_HiFi_3D_SDK_for_Unreal_Source_SuperMap_Public_Component_SuperMap_InstancedActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
