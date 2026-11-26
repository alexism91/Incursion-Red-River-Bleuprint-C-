#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowMeshAppendDataflowNode.generated.h"

class UDataflowMesh;

USTRUCT(BlueprintType)
struct FDataflowMeshAppendDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflowMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflowMesh* AppendMesh;
    
public:
    GEOMETRYCOLLECTIONNODES_API FDataflowMeshAppendDataflowNode();
};

