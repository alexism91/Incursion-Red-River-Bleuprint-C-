#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NinjaInput -ObjectName=NinjaInputHandler -FallbackName=NinjaInputHandler
#include "InputHandler_PushToTalk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInputHandler_PushToTalk : public UNinjaInputHandler {
    GENERATED_BODY()
public:
    UInputHandler_PushToTalk();

};

