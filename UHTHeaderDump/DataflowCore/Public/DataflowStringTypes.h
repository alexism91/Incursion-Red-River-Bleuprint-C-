#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowStringTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowStringTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    DATAFLOWCORE_API FDataflowStringTypes();
};

