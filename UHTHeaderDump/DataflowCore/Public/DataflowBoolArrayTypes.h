#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowBoolArrayTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowBoolArrayTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Value;
    
    DATAFLOWCORE_API FDataflowBoolArrayTypes();
};

