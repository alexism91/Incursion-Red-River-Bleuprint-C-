#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "NinjaInputHandler.h"
#include "InputHandler_Move.generated.h"

class UNinjaInputManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_Move : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockMovementTags;
    
public:
    UInputHandler_Move();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Move(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanMove(UNinjaInputManagerComponent* Manager) const;
    
};

