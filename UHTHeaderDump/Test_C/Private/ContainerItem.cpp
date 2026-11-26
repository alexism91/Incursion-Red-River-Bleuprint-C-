#include "ContainerItem.h"

FContainerItem::FContainerItem() {
    this->ItemInventoryComp = NULL;
    this->ItemDefinition = NULL;
    this->ContainerIndex = 0;
    this->SlotIndex = 0;
    this->CanStack = false;
    this->MaxStack = 0;
    this->Count = 0;
    this->bRotated = false;
    this->bIsVitalPart = false;
    this->bQuestItem = false;
    this->bLoot = false;
    this->bDiscovered = false;
}

