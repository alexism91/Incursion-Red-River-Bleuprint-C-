#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTerminalNode -FallbackName=DataflowTerminalNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowNodes -ObjectName=DataflowFunctionProperty -FallbackName=DataflowFunctionProperty
#include "ChaosOutfitAssetTerminalNode.generated.h"

class UChaosOutfit;

USTRUCT(BlueprintType)
struct FChaosOutfitAssetTerminalNode : public FDataflowTerminalNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfit* Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowFunctionProperty ConvertToSkeletalMesh;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosOutfitAssetTerminalNode();
};

