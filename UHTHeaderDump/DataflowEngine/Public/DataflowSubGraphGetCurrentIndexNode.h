#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowSubGraphGetCurrentIndexNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowSubGraphGetCurrentIndexNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    DATAFLOWENGINE_API FDataflowSubGraphGetCurrentIndexNode();
};

