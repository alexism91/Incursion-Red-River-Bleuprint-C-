#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAnyType -FallbackName=DataflowAnyType
#include "ChaosClothAssetArrayAnyType.generated.h"

class UChaosClothAssetBase;

USTRUCT(BlueprintType)
struct FChaosClothAssetArrayAnyType : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UChaosClothAssetBase*> Value;
    
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosClothAssetArrayAnyType();
};

