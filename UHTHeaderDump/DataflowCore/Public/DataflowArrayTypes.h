#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowArrayTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowArrayTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowArrayTypes();
};

