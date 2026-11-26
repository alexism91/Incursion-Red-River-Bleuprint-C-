#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralDoubleDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FMakeLiteralDoubleDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Double;
    
public:
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralDoubleDataflowNode();
};

