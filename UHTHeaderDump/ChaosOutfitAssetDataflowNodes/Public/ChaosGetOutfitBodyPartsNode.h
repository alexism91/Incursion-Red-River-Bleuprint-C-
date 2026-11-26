#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosOutfitBodySizeBodyParts.h"
#include "ChaosGetOutfitBodyPartsNode.generated.h"

class UChaosOutfit;

USTRUCT(BlueprintType)
struct FChaosGetOutfitBodyPartsNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfit* Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosOutfitBodySizeBodyParts> BodySizeParts;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosGetOutfitBodyPartsNode();
};

