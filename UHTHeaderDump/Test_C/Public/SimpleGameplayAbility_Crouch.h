#pragma once
#include "CoreMinimal.h"
#include "SimpleGameplayAbility_Toggleable.h"
#include "SimpleGameplayAbility_Crouch.generated.h"

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_Crouch : public USimpleGameplayAbility_Toggleable {
    GENERATED_BODY()
public:
    USimpleGameplayAbility_Crouch();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForHeadroom() const;
    
};

