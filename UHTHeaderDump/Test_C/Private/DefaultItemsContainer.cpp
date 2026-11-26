#include "DefaultItemsContainer.h"

FDefaultItemsContainer::FDefaultItemsContainer() {
    this->ContainerIndex = 0;
    this->ContainerType = EContainerType::EquipTo;
    this->bTryAddWeaponMags = false;
    this->bAddRandomItems = false;
    this->RandomItemSpawnChances = 0.00f;
}

