#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowStringConvertibleTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowStringConvertibleTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    DATAFLOWCORE_API FDataflowStringConvertibleTypes();
};

