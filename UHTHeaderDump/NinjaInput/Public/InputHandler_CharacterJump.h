#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "NinjaInputHandler.h"
#include "InputHandler_CharacterJump.generated.h"

class UNinjaInputManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_CharacterJump : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockJumpTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaCost;
    
public:
    UInputHandler_CharacterJump();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanJump(UNinjaInputManagerComponent* Manager) const;
    
};

