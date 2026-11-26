#pragma once
#include "CoreMinimal.h"
#include "IRRAISearchNode.h"
#include "IRRAITargetSearchState.generated.h"

class AIRRAISearchGrid;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAITargetSearchState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAISearchNode SearchNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIRRAISearchGrid* SearchGrid;
    
    FIRRAITargetSearchState();
};

