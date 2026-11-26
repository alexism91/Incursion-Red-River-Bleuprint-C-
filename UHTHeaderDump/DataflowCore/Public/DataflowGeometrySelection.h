#pragma once
#include "CoreMinimal.h"
#include "DataflowSelection.h"
#include "DataflowGeometrySelection.generated.h"

USTRUCT(BlueprintType)
struct FDataflowGeometrySelection : public FDataflowSelection {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowGeometrySelection();
};

