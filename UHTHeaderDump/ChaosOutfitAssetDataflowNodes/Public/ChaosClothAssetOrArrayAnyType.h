#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAnyType -FallbackName=DataflowAnyType
#include "ChaosClothAssetOrArrayType.h"
#include "ChaosClothAssetOrArrayAnyType.generated.h"

USTRUCT(BlueprintType)
struct FChaosClothAssetOrArrayAnyType : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosClothAssetOrArrayType Value;
    
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosClothAssetOrArrayAnyType();
};

