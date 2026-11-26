#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowNumericTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowNumericTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    DATAFLOWCORE_API FDataflowNumericTypes();
};

