#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowNode.h"
#include "DataflowBranchNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowBranchNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType TrueValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType FalseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType Result;
    
    DATAFLOWCORE_API FDataflowBranchNode();
};

