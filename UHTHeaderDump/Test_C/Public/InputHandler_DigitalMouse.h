#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NinjaInput -ObjectName=InputHandler_Look -FallbackName=InputHandler_Look
#include "InputHandler_DigitalMouse.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInputHandler_DigitalMouse : public UInputHandler_Look {
    GENERATED_BODY()
public:
    UInputHandler_DigitalMouse();

};

