#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanGeneratedAssetMetadata -FallbackName=MetaHumanGeneratedAssetMetadata
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanSDKRuntime -ObjectName=EBodyTextureType -FallbackName=EBodyTextureType
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanSDKRuntime -ObjectName=EFaceTextureType -FallbackName=EFaceTextureType
#include "MetaHumanBodyRigLogicGeneratedAsset.h"
#include "MetaHumanCharacterGeneratedAssets.generated.h"

class UPhysicsAsset;
class USkeletalMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterGeneratedAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaceTextureType, UTexture2D*> SynthesizedFaceTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBodyTextureType, UTexture2D*> BodyTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanBodyRigLogicGeneratedAsset> BodyRigLogicAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> BodyMeasurements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanGeneratedAssetMetadata> MetaData;
    
    FMetaHumanCharacterGeneratedAssets();
};

