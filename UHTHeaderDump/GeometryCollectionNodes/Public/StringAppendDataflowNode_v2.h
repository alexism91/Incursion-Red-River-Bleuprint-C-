#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowStringConvertibleTypes -FallbackName=DataflowStringConvertibleTypes
#include "StringAppendDataflowNode_v2.generated.h"

USTRUCT(BlueprintType)
struct FStringAppendDataflowNode_v2 : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowStringConvertibleTypes> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
public:
    GEOMETRYCOLLECTIONNODES_API FStringAppendDataflowNode_v2();
};

