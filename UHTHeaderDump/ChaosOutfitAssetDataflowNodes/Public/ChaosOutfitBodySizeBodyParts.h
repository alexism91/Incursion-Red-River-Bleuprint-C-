#pragma once
#include "CoreMinimal.h"
#include "ChaosOutfitBodySizeBodyParts.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FChaosOutfitBodySizeBodyParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> BodyParts;
    
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosOutfitBodySizeBodyParts();
};

