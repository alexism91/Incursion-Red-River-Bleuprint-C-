#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=NinjaInput -ObjectName=NinjaInputHandler -FallbackName=NinjaInputHandler
#include "InputHandler_Lean.generated.h"

class UNinjaInputManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInputHandler_Lean : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayEventTag;
    
public:
    UInputHandler_Lean();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lean(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanLean(UNinjaInputManagerComponent* Manager) const;
    
};

