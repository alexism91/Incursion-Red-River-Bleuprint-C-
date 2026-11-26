#pragma once
#include "CoreMinimal.h"
#include "DataflowOutput.h"
#include "DataflowArrayOutput.generated.h"

USTRUCT(BlueprintType)
struct FDataflowArrayOutput : public FDataflowOutput {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowArrayOutput();
};

