#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InputModeAwareInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UInputModeAwareInterface : public UInterface {
    GENERATED_BODY()
};

class IInputModeAwareInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerInputMode(FGameplayTag InputModeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetPlayerInputMode() const;
    
};

