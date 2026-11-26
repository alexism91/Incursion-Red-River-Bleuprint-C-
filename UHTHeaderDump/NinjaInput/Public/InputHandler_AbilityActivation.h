#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "NinjaInputHandler.h"
#include "InputHandler_AbilityActivation.generated.h"

class UInputAction;
class UNinjaInputManagerComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_AbilityActivation : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggledActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendEventIfActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerEventLocally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerEventOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActiveEventTag;
    
public:
    UInputHandler_AbilityActivation();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SendGameplayEvent(const UNinjaInputManagerComponent* Manager, FGameplayTag GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
};

