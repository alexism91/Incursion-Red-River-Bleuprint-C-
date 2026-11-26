#pragma once
#include "CoreMinimal.h"
#include "NinjaInputHandler.h"
#include "InputHandler_AbilityInterruption.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_AbilityInterruption : public UNinjaInputHandler {
    GENERATED_BODY()
public:
    UInputHandler_AbilityInterruption();

};

