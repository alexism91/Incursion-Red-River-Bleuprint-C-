#include "LootPostProcessor_GearContainerFill.h"

ULootPostProcessor_GearContainerFill::ULootPostProcessor_GearContainerFill() {
    this->MinItemsPerGearContainer = 1;
    this->MaxItemsPerGearContainer = 3;
    this->MaxGenerationAttemptsMultiplier = 8;
}


