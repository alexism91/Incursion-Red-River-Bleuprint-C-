#pragma once
#include "CoreMinimal.h"
#include "InjectedInput.generated.h"

class UInputModifier;
class UInputTrigger;

USTRUCT(BlueprintType)
struct FInjectedInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputTrigger*> Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputModifier*> Modifiers;
    
    ENHANCEDINPUT_API FInjectedInput();
};

