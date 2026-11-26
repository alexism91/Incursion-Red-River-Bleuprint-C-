#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowNode.h"
#include "DataflowForceDependencyNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowForceDependencyNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType DependentValue;
    
    DATAFLOWCORE_API FDataflowForceDependencyNode();
};

