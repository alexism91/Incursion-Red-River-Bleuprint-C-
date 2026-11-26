#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=ETriggerEvent -FallbackName=ETriggerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "NinjaInputHandler.generated.h"

class UInputAction;
class UNinjaInputManagerComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class NINJAINPUT_API UNinjaInputHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETriggerEvent> TriggerEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBuffered;
    
public:
    UNinjaInputHandler();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyTags(const UNinjaInputManagerComponent* Manager, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTriggeredEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleStartedEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOngoingEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCompletedEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelledEvent(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanHandle(const ETriggerEvent& TriggerEvent, const UInputAction* InputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeBuffered() const;
    
};

