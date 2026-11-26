#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "LootPostProcessor.h"
#include "LootPostProcessor_AddWeaponMagToContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API ULootPostProcessor_AddWeaponMagToContainer : public ULootPostProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SearchContainerItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlySearchEquipToSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepSwapSpaceFree;
    
    ULootPostProcessor_AddWeaponMagToContainer();

};

