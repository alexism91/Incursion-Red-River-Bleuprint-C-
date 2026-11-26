#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "EContainerType.h"
#include "InventoryDefaultContainerSettings.generated.h"

class UInventoryContainerSettings;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UInventoryDefaultContainerSettings : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContainerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerSettings* ContainerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContainerType ContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EquipmentSlot;
    
    UInventoryDefaultContainerSettings();

};

