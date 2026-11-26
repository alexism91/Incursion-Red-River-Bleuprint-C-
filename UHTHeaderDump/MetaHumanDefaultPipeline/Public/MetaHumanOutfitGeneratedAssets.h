#pragma once
#include "CoreMinimal.h"
#include "MetaHumanOutfitGeneratedAssets.generated.h"

class UChaosOutfitAsset;
class USkeletalMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FMetaHumanOutfitGeneratedAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfitAsset* Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* OutfitMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* CombinedBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BodyHiddenFaceMap;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanOutfitGeneratedAssets();
};

