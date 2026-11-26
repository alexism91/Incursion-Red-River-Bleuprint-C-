#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshResizingCore -ObjectName=MeshResizingRBFInterpolationData -FallbackName=MeshResizingRBFInterpolationData
#include "ChaosGetOutfitRBFInterpolationDataNode.generated.h"

class UChaosOutfit;

USTRUCT(BlueprintType)
struct FChaosGetOutfitRBFInterpolationDataNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosOutfit* Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BodySizeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BodyPartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshResizingRBFInterpolationData InterpolationData;
    
public:
    CHAOSOUTFITASSETDATAFLOWNODES_API FChaosGetOutfitRBFInterpolationDataNode();
};

