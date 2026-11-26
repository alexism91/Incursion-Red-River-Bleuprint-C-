#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowRootProxyMesh.h"
#include "AddRootProxyMeshToArrayDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FAddRootProxyMeshToArrayDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowRootProxyMesh> RootProxyMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowRootProxyMesh RootProxyMesh;
    
public:
    GEOMETRYCOLLECTIONNODES_API FAddRootProxyMeshToArrayDataflowNode();
};

