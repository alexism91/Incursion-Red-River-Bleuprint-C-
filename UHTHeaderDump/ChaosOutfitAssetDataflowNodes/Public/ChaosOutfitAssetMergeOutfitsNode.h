#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosOutfitAssetMergeOutfitsNode.generated.h"

class UChaosOutfit;

USTRUCT(BlueprintType)
struct FChaosOutfitAssetMergeOutfitsNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UChaosOutfit*> Outfits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfit* Outfit;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosOutfitAssetMergeOutfitsNode();
};

