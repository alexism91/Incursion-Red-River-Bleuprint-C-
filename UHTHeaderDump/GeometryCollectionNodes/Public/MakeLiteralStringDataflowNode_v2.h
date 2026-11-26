#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralStringDataflowNode_v2.generated.h"

USTRUCT(BlueprintType)
struct FMakeLiteralStringDataflowNode_v2 : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralStringDataflowNode_v2();
};

