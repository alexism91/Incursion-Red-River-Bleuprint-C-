#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAnyType -FallbackName=DataflowAnyType
#include "ChaosClothAssetAnyType.generated.h"

class UChaosClothAssetBase;

USTRUCT(BlueprintType)
struct FChaosClothAssetAnyType : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosClothAssetBase* Value;
    
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosClothAssetAnyType();
};

