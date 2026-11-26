#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowBoolTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowBoolTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    DATAFLOWCORE_API FDataflowBoolTypes();
};

