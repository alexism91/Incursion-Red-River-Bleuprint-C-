#pragma once
#include "CoreMinimal.h"
#include "ChaosSizedOutfitSource.generated.h"

class UChaosClothAssetBase;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FChaosSizedOutfitSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosClothAssetBase* SourceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SizeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SourceBodyParts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumResizingInterpolationPoints;
    
    CHAOSOUTFITASSETENGINE_API FChaosSizedOutfitSource();
};

