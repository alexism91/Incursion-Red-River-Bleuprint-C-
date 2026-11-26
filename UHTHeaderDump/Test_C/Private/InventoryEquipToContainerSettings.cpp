#include "InventoryEquipToContainerSettings.h"

UInventoryEquipToContainerSettings::UInventoryEquipToContainerSettings() {
    this->MaxEquippedCount = 1;
    this->SlotImage = NULL;
    this->SlotRotated = false;
    this->FOVOffset = 0.00f;
    this->AttachmentSpawnChance = 1.00f;
    this->bNestedVitalParts = true;
    this->bForceAttachment = false;
}


