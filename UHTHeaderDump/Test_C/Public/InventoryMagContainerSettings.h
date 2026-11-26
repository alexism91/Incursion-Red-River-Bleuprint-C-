#pragma once
#include "CoreMinimal.h"
#include "InventoryEquipToContainerSettings.h"
#include "InventoryMagContainerSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventoryMagContainerSettings : public UInventoryEquipToContainerSettings {
    GENERATED_BODY()
public:
    UInventoryMagContainerSettings();

};

