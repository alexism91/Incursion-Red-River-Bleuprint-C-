#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralBoolDataflowNode_v2.generated.h"

USTRUCT(BlueprintType)
struct FMakeLiteralBoolDataflowNode_v2 : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bool;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralBoolDataflowNode_v2();
};

