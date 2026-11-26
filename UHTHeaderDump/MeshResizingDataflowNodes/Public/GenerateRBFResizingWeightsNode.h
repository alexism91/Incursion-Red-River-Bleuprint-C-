#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshResizingCore -ObjectName=MeshResizingRBFInterpolationData -FallbackName=MeshResizingRBFInterpolationData
#include "GenerateRBFResizingWeightsNode.generated.h"

class UDataflowMesh;

USTRUCT(BlueprintType)
struct FGenerateRBFResizingWeightsNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflowMesh* MeshToResize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflowMesh* SourceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshResizingRBFInterpolationData InterpolationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInterpolationPoints;
    
public:
    MESHRESIZINGDATAFLOWNODES_API FGenerateRBFResizingWeightsNode();
};

