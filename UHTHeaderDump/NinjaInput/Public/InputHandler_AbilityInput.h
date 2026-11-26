#pragma once
#include "CoreMinimal.h"
#include "InputHandler_AbilityActivation.h"
#include "InputHandler_AbilityInput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_AbilityInput : public UInputHandler_AbilityActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputID;
    
public:
    UInputHandler_AbilityInput();

};

