#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "HUDEventDispatcherInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHUDEventDispatcherInterface : public UInterface {
    GENERATED_BODY()
};

class IHUDEventDispatcherInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleInputEvent(FGameplayTag InputEventTag);
    
};

