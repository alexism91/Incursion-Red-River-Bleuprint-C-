#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowNode.h"
#include "DataflowSelectNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowSelectNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowAnyType> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAnyType Result;
    
    DATAFLOWCORE_API FDataflowSelectNode();
};

