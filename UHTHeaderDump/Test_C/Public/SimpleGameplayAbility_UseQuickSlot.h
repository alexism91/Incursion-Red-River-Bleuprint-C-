#pragma once
#include "CoreMinimal.h"
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_UseQuickSlot.generated.h"

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_UseQuickSlot : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuickSlotIndex;
    
    USimpleGameplayAbility_UseQuickSlot();

};

