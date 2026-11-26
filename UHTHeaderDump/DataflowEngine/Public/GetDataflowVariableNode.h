#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAnyType -FallbackName=DataflowAnyType
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "GetDataflowVariableNode.generated.h"

USTRUCT(BlueprintType)
struct FGetDataflowVariableNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag VariablePropertyBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
public:
    DATAFLOWENGINE_API FGetDataflowVariableNode();
};

