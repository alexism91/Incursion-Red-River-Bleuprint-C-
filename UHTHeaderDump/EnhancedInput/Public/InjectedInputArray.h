#pragma once
#include "CoreMinimal.h"
#include "InjectedInput.h"
#include "InjectedInputArray.generated.h"

USTRUCT(BlueprintType)
struct FInjectedInputArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInjectedInput> Injected;
    
    ENHANCEDINPUT_API FInjectedInputArray();
};

