#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosOutfitAssetGetOrMakeOutfitFromAssetNode.generated.h"

class UChaosOutfit;
class UChaosOutfitAsset;

USTRUCT(BlueprintType)
struct FChaosOutfitAssetGetOrMakeOutfitFromAssetNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfitAsset* OutfitAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfit* Outfit;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosOutfitAssetGetOrMakeOutfitFromAssetNode();
};

