#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralIntDataflowNode_v2.generated.h"

USTRUCT(BlueprintType)
struct FMakeLiteralIntDataflowNode_v2 : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralIntDataflowNode_v2();
};

