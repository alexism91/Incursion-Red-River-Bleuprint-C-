#include "LootPostProcessor.h"

ULootPostProcessor::ULootPostProcessor() {
    this->bEnabled = true;
    this->DebugName = TEXT("UnnamedPostProcessor");
}

void ULootPostProcessor::ExecuteOnContainer_Implementation(FDefaultItemsContainer& InOutContainer, const TArray<FDefaultItemsContainer>& AllContainers, ULootGenerationSettings* SlotLootSettings) {
}

void ULootPostProcessor::Execute_Implementation(FDefaultItem& InOutItem, const TArray<FDefaultItemsContainer>& AllContainers, ULootGenerationSettings* SlotLootSettings, EContainerType SlotContainerType) {
}


