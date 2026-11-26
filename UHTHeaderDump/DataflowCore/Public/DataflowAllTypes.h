#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowAllTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowAllTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowAllTypes();
};

