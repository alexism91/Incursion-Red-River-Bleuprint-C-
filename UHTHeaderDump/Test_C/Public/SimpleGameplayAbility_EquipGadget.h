#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ContainerItem.h"
#include "SimpleGameplayAbility_EquipSlot.h"
#include "SimpleGameplayAbility_EquipGadget.generated.h"

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_EquipGadget : public USimpleGameplayAbility_EquipSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProvisionalEquipTimeout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FContainerItem ProvisionalGadget;
    
public:
    USimpleGameplayAbility_EquipGadget();

private:
    UFUNCTION(BlueprintCallable)
    void OnEquipmentSlotChanged(FGameplayTag EquipmentSlot, bool bEquipped);
    
};

