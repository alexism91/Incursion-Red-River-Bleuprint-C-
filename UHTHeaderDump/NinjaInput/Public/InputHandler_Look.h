#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "NinjaInputHandler.h"
#include "InputHandler_Look.generated.h"

class UNinjaInputManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_Look : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockCameraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FreeLookTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeLookMax;
    
public:
    UInputHandler_Look();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Look(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFreeLook(UNinjaInputManagerComponent* Manager) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanLook(UNinjaInputManagerComponent* Manager) const;
    
};

