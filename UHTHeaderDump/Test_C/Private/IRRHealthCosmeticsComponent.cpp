#include "IRRHealthCosmeticsComponent.h"

UIRRHealthCosmeticsComponent::UIRRHealthCosmeticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TagsComponent = NULL;
}

void UIRRHealthCosmeticsComponent::RefreshCosmetics() {
}

void UIRRHealthCosmeticsComponent::HandleTagsUpdated(FGameplayTagContainer Tags) {
}

void UIRRHealthCosmeticsComponent::HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}


