#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SimpleAttributeBuff.h"
#include "SimpleGameplayEffect.h"
#include "SimpleGameplayEffect_AttributeBuff.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USimpleGameplayEffect_AttributeBuff : public USimpleGameplayEffect {
    GENERATED_BODY()
public:
    USimpleGameplayEffect_AttributeBuff();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBuffSetup(FGameplayTag& OutAttribute, FSimpleAttributeBuff& OutBuff) const;
    
};

