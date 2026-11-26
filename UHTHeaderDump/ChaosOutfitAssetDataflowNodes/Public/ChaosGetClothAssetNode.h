#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosGetClothAssetNode.generated.h"

class UChaosClothAsset;

USTRUCT(BlueprintType)
struct FChaosGetClothAssetNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosClothAsset* ClothAsset;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosGetClothAssetNode();
};

