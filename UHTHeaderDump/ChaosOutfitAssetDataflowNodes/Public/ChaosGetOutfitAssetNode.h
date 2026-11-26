#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosGetOutfitAssetNode.generated.h"

class UChaosOutfitAsset;

USTRUCT(BlueprintType)
struct FChaosGetOutfitAssetNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfitAsset* OutfitAsset;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosGetOutfitAssetNode();
};

