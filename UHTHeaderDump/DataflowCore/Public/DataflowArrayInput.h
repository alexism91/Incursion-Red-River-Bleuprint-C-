#pragma once
#include "CoreMinimal.h"
#include "DataflowInput.h"
#include "DataflowArrayInput.generated.h"

USTRUCT(BlueprintType)
struct FDataflowArrayInput : public FDataflowInput {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowArrayInput();
};

