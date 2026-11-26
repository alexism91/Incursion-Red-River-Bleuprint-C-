#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowNumericArrayTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowNumericArrayTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> Value;
    
    DATAFLOWCORE_API FDataflowNumericArrayTypes();
};

