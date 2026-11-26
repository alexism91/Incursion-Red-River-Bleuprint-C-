#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "NinjaInputHandler.h"
#include "InputHandler_StateSwitch.generated.h"

class UNinjaInputManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_StateSwitch : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateSwitchTag;
    
public:
    UInputHandler_StateSwitch();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSwitchState(const UNinjaInputManagerComponent* Manager, bool NewState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive(const UNinjaInputManagerComponent* Manager) const;
    
};

