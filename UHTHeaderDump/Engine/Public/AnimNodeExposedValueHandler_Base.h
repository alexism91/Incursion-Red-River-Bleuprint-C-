#pragma once
#include "CoreMinimal.h"
#include "AnimNodeExposedValueHandler.h"
#include "AnimNodeExposedValueHandler_Base.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FAnimNodeExposedValueHandler_Base : public FAnimNodeExposedValueHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoundFunction;
    
    ENGINE_API FAnimNodeExposedValueHandler_Base();
};

