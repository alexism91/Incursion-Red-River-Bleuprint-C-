#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowRootProxyMesh.h"
#include "MakeRootProxyMeshArrayDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FMakeRootProxyMeshArrayDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowRootProxyMesh> RootProxyMeshes;
    
public:
    GEOMETRYCOLLECTIONNODES_API FMakeRootProxyMeshArrayDataflowNode();
};

