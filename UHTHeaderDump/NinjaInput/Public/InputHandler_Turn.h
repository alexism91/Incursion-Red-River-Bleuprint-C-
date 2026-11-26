#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "NinjaInputHandler.h"
#include "InputHandler_Turn.generated.h"

class UNinjaInputManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_Turn : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockRotationTags;
    
public:
    UInputHandler_Turn();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Turn(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanTurn(UNinjaInputManagerComponent* Manager) const;
    
};

