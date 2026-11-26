#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowPrimitiveNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowPrimitiveNode : public FDataflowNode {
    GENERATED_BODY()
public:
    DATAFLOWNODES_API FDataflowPrimitiveNode();
};

