// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
//#if (!SM_FOR_UE_FIVE && WITH_EDITOR)
#ifdef BUILD_EDITOR
//#include "Builders/GLTFContainerBuilder.h"
#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "MeshData.h"
typedef TArray<int32> FIndexArray;
struct FMtlAnalysis;
struct FMaterialPropertyEx;

namespace SuperMapSDK
{
	namespace UnrealEngine
	{
		namespace DataExchange
		{
			struct FPropBakeOutput
			{
				FPropBakeOutput(const FMaterialPropertyEx& Property, EPixelFormat PixelFormat, const TArray<FColor>& Pixels, FIntPoint Size, float EmissiveScale, bool bIsSRGB)
					: Property(Property), PixelFormat(PixelFormat), Pixels(Pixels), Size(Size), EmissiveScale(EmissiveScale), bIsSRGB(bIsSRGB), bIsConstant(false)
				{}

				const FMaterialPropertyEx& Property;
				EPixelFormat PixelFormat;
				TArray<FColor> Pixels;
				FIntPoint Size;
				float EmissiveScale;
				bool bIsSRGB;
				bool bIsConstant;
				FLinearColor ConstantValue;
			};

			struct FMaterialUtility
			{
				//static UMaterialInterface* GetDefaultMaterial();

#if WITH_EDITOR
				static bool IsNormalMap(const FMaterialPropertyEx& Property);
				static bool IsSRGB(const FMaterialPropertyEx& Property);

#if (ENGINE_MAJOR_VERSION > 4 || ENGINE_MINOR_VERSION >= 27)
				static FGuid GetAttributeID(const FMaterialPropertyEx& Property);
				static FGuid GetAttributeIDChecked(const FMaterialPropertyEx& Property);
#endif

#if (ENGINE_MAJOR_VERSION > 4)
				static FVector4f GetPropertyDefaultValue(const FMaterialPropertyEx& Property);
				static FVector4f GetPropertyMask(const FMaterialPropertyEx& Property);
#else
				static FVector4 GetPropertyDefaultValue(const FMaterialPropertyEx& Property);
				static FVector4 GetPropertyMask(const FMaterialPropertyEx& Property);
#endif //(ENGINE_MAJOR_VERSION > 4)


				static const FExpressionInput* GetInputForProperty(const UMaterialInterface* Material, const FMaterialPropertyEx& Property);

				template <class InputType>
				static const FMaterialInput<InputType>* GetInputForProperty(const UMaterialInterface* Material, const FMaterialPropertyEx& Property)
				{
					const FExpressionInput* ExpressionInput = GetInputForProperty(Material, Property);
					return static_cast<const FMaterialInput<InputType>*>(ExpressionInput);
				}

				static UTexture2D* CreateTransientTexture(const FPropBakeOutput& PropertyBakeOutput, bool bUseSRGB = false);

				static const UMaterialExpressionCustomOutput* GetCustomOutputByName(const UMaterialInterface* Material, const FString& Name);

				static FPropBakeOutput BakeMaterialProperty(const FIntPoint& OutputSize, const FMaterialPropertyEx& Property, const UMaterialInterface* Material, int32 TexCoord, const FUeMeshData* MeshData = nullptr, const FIndexArray& MeshSectionIndices = {}, bool bFillAlpha = true, bool bAdjustNormalmaps = true);

				//static FJsonTexture* AddTexture(FConvertBuilder& Builder, TGLTFSharedArray<FColor>& Pixels, const FIntPoint& TextureSize, bool bIgnoreAlpha, bool bIsNormalMap, const FString& TextureName, EGLTFJsonTextureFilter MinFilter, EGLTFJsonTextureFilter MagFilter, EGLTFJsonTextureWrap WrapS, EGLTFJsonTextureWrap WrapT);

				static FLinearColor GetMask(const FExpressionInput& ExpressionInput);
				static uint32 GetMaskComponentCount(const FExpressionInput& ExpressionInput);

				static bool TryGetTextureCoordinateIndex(const UMaterialExpressionTextureSample* TextureSampler, int32& TexCoord, float*& Transform);
				static void GetAllTextureCoordinateIndices(const UMaterialInterface* InMaterial, const FMaterialPropertyEx& InProperty, FIndexArray& OutTexCoords);

				static void AnalyzeMaterialProperty(const UMaterialInterface* Material, const FMaterialPropertyEx& InProperty, FMtlAnalysis& OutAnalysis);

				static FMaterialShadingModelField EvaluateShadingModelExpression(const UMaterialInterface* Material);
#endif

				static EMaterialShadingModel GetRichestShadingModel(const FMaterialShadingModelField& ShadingModels);
				static FString ShadingModelsToString(const FMaterialShadingModelField& ShadingModels);

				static bool NeedsMeshData(const UMaterialInterface* Material);
				static bool NeedsMeshData(const TArray<const UMaterialInterface*>& Materials);
			};
		}
	}
}
#endif