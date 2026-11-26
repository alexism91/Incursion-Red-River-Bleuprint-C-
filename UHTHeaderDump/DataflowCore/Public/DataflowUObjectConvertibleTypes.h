#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowUObjectConvertibleTypes.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDataflowUObjectConvertibleTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Value;
    
    DATAFLOWCORE_API FDataflowUObjectConvertibleTypes();
};

