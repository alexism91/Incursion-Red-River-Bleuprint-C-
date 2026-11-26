#pragma once
#include "CoreMinimal.h"
#include "DataflowSelection.h"
#include "DataflowMaterialSelection.generated.h"

USTRUCT(BlueprintType)
struct FDataflowMaterialSelection : public FDataflowSelection {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowMaterialSelection();
};

