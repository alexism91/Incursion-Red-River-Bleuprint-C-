#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InputStateSwitchInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UInputStateSwitchInterface : public UInterface {
    GENERATED_BODY()
};

class IInputStateSwitchInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSwitchState(FGameplayTag SwitchStateTag, bool NewSwitchValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSwitchState(FGameplayTag SwitchStateTag) const;
    
};

