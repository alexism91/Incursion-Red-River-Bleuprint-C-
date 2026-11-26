#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptBakeCurvatureClampMode.h"
#include "EGeometryScriptBakeCurvatureColorMode.h"
#include "EGeometryScriptBakeCurvatureTypeMode.h"
#include "EGeometryScriptBakeHeightRangeMode.h"
#include "EGeometryScriptBakeNormalSpace.h"
#include "EGeometryScriptBakeResolution.h"
#include "GeometryScriptBakeOutputType.h"
#include "GeometryScriptBakeRenderCaptureOptions.h"
#include "GeometryScriptBakeSourceMeshOptions.h"
#include "GeometryScriptBakeTargetMeshOptions.h"
#include "GeometryScriptBakeTextureOptions.h"
#include "GeometryScriptBakeTypeOptions.h"
#include "GeometryScriptBakeVertexOptions.h"
#include "GeometryScriptRenderCaptureTextures.h"
#include "GeometryScriptLibrary_MeshBakeFunctions.generated.h"

class AActor;
class UDynamicMesh;
class UGeometryScriptDebug;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshBakeFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeUVShell(int32 SourceUVLayer, float WireframeThickness, FLinearColor WireframeColor, FLinearColor ShellColor, FLinearColor BackgroundColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(UTexture2D* SourceTexture, int32 SourceUVLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(const TArray<UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeHeight(EGeometryScriptBakeHeightRangeMode RangeMode, float InnerDistance, float OuterDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeConstant(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle, EGeometryScriptBakeNormalSpace NormalSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertBakeResolutionToInt(EGeometryScriptBakeResolution BakeResolution);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* BakeVertex(UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, FGeometryScriptBakeOutputType BakeTypes, FGeometryScriptBakeVertexOptions BakeOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(UDynamicMesh* TargetMesh, FTransform TargetLocalToWorld, FGeometryScriptBakeTargetMeshOptions TargetOptions, const TArray<AActor*> SourceActors, FGeometryScriptBakeRenderCaptureOptions BakeOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UTexture2D*> BakeTexture(UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, const TArray<FGeometryScriptBakeTypeOptions>& BakeTypes, FGeometryScriptBakeTextureOptions BakeOptions, UGeometryScriptDebug* Debug);
    
};

