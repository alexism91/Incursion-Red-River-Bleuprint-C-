#pragma once
#include "CoreMinimal.h"
#include "MeshProcessorDataflowNodeBase.h"
#include "ApplyMeshProcessorToMeshDataflowNode.generated.h"

class UDynamicMesh;

USTRUCT(BlueprintType)
struct FApplyMeshProcessorToMeshDataflowNode : public FMeshProcessorDataflowNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh;
    
    GEOMETRYCOLLECTIONNODES_API FApplyMeshProcessorToMeshDataflowNode();
};

