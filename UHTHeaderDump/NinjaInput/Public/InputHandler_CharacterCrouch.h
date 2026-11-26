#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "NinjaInputHandler.h"
#include "InputHandler_CharacterCrouch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_CharacterCrouch : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockCrouchTags;
    
public:
    UInputHandler_CharacterCrouch();

};

