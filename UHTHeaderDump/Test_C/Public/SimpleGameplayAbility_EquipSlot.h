#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_EquipSlot.generated.h"

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_EquipSlot : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleBackWhenHeld;
    
    USimpleGameplayAbility_EquipSlot();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag ResolveTargetSlot() const;
    
};

