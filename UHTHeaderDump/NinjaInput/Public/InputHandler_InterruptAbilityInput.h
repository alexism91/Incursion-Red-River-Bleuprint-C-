#pragma once
#include "CoreMinimal.h"
#include "InputHandler_AbilityInterruption.h"
#include "InputHandler_InterruptAbilityInput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_InterruptAbilityInput : public UInputHandler_AbilityInterruption {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputID;
    
public:
    UInputHandler_InterruptAbilityInput();

};

