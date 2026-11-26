#pragma once
#include "CoreMinimal.h"
#include "ProcessedBinding.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FProcessedBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    NINJAINPUT_API FProcessedBinding();
};

