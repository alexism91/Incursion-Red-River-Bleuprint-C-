#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosClothAssetOrArrayAnyType.h"
#include "ChaosOutfitAssetMakeOutfitNode.generated.h"

class UChaosOutfit;

USTRUCT(BlueprintType)
struct FChaosOutfitAssetMakeOutfitNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfit* Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosClothAssetOrArrayAnyType> ClothAssets;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosOutfitAssetMakeOutfitNode();
};

