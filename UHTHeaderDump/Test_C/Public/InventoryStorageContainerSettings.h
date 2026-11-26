#pragma once
#include "CoreMinimal.h"
#include "InventoryContainerSettings.h"
#include "InventoryStorageContainerSettings.generated.h"

class UInventoryStorageSubContainer;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventoryStorageContainerSettings : public UInventoryContainerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StorageContainerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInventoryStorageSubContainer*> StorageTierContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquipToContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultTier;
    
    UInventoryStorageContainerSettings();

};

