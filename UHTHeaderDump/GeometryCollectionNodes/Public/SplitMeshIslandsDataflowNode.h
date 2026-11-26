#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EDataflowMeshSplitIslandsMethod.h"
#include "SplitMeshIslandsDataflowNode.generated.h"

class UDynamicMesh;

USTRUCT(BlueprintType)
struct FSplitMeshIslandsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicMesh*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataflowMeshSplitIslandsMethod SplitMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectVerticesThreshold;
    
public:
    GEOMETRYCOLLECTIONNODES_API FSplitMeshIslandsDataflowNode();
};

