#include "LootContainerSlot.h"

FLootContainerSlot::FLootContainerSlot() {
    this->ContainerIndex = 0;
    this->ContainerType = EContainerType::EquipTo;
    this->ChoiceChance = 0.00f;
    this->MinChoices = 0;
    this->MaxChoices = 0;
    this->bAllowRepeatedChoice = false;
    this->bGenerateRandomLoot = false;
    this->GenerationChance = 0.00f;
    this->LootSettings = NULL;
}

