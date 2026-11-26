#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowNode.h"
#include "DataflowReRouteNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowReRouteNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType Value;
    
    DATAFLOWCORE_API FDataflowReRouteNode();
};

