#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ChaosSizedOutfitSourceOrArrayAnyType.h"
#include "ChaosOutfitAssetMakeSizedOutfitNode.generated.h"

class UChaosOutfit;

USTRUCT(BlueprintType)
struct FChaosOutfitAssetMakeSizedOutfitNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfit* Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection OutfitCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosSizedOutfitSourceOrArrayAnyType> SizedOutfitSources;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosOutfitAssetMakeSizedOutfitNode();
};

