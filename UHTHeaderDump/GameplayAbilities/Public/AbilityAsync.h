#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CancellableAsyncAction -FallbackName=CancellableAsyncAction
#include "AbilityAsync.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAbilityAsync : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UAbilityAsync();

    UFUNCTION(BlueprintCallable)
    void EndAction();
    
};

