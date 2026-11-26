#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowStringConvertibleTypes.h"
#include "DataflowPrintNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowPrintNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowStringConvertibleTypes Value;
    
    DATAFLOWCORE_API FDataflowPrintNode();
};

