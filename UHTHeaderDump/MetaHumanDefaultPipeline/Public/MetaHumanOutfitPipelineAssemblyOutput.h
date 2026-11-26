#pragma once
#include "CoreMinimal.h"
#include "MetaHumanOutfitPipelineAssemblyOutput.generated.h"

class UChaosOutfitAsset;
class UMaterialInterface;
class USkeletalMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct METAHUMANDEFAULTPIPELINE_API FMetaHumanOutfitPipelineAssemblyOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfitAsset* Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* OutfitMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BodyHiddenFaceMap;
    
    FMetaHumanOutfitPipelineAssemblyOutput();
};

