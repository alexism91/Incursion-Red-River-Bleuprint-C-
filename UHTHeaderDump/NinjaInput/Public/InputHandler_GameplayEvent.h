#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "NinjaInputHandler.h"
#include "InputHandler_GameplayEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_GameplayEvent : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
public:
    UInputHandler_GameplayEvent();

};

