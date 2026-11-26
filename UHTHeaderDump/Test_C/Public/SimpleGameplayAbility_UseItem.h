#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "SimpleGameplayAbility_PlayInteraction.h"
#include "SimpleGameplayAbility_UseItem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_UseItem : public USimpleGameplayAbility_PlayInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDropItemOnFinish;
    
    USimpleGameplayAbility_UseItem();

};

