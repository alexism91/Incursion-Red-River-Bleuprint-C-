#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosOutfitAssetEngine -ObjectName=ChaosSizedOutfitSource -FallbackName=ChaosSizedOutfitSource
#include "ChaosSizedOutfitSourceOrArrayType.generated.h"

USTRUCT(BlueprintType)
struct FChaosSizedOutfitSourceOrArrayType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosSizedOutfitSource> Array;
    
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosSizedOutfitSourceOrArrayType();
};

