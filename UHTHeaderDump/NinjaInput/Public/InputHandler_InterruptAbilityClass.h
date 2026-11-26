#pragma once
#include "CoreMinimal.h"
#include "InputHandler_AbilityInterruption.h"
#include "Templates/SubclassOf.h"
#include "InputHandler_InterruptAbilityClass.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_InterruptAbilityClass : public UInputHandler_AbilityInterruption {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> AbilityClass;
    
public:
    UInputHandler_InterruptAbilityClass();

};

