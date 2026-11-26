#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InteractionWidgetInterface.h"
#include "InteractionWidgetText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInteractionWidgetText : public UUserWidget, public IInteractionWidgetInterface {
    GENERATED_BODY()
public:
    UInteractionWidgetText();


    // Fix for true pure virtual functions not being implemented
};

