#include "IRRPlayerOutfitComponent.h"

UIRRPlayerOutfitComponent::UIRRPlayerOutfitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRollFirstVariants = true;
    this->bAlwaysShowLocalPlayer = false;
}

void UIRRPlayerOutfitComponent::Server_SetPlayerOutfit_Implementation(FName OutfitId) {
}

bool UIRRPlayerOutfitComponent::ResolvePlayerOutfit(FName OutfitId, FIRRPlayerOutfitOption& OutOption) {
    return false;
}

void UIRRPlayerOutfitComponent::RefreshFromSettings() {
}

void UIRRPlayerOutfitComponent::HandleOwnerRestarted(APawn* Pawn) {
}

void UIRRPlayerOutfitComponent::HandleOwnerControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

void UIRRPlayerOutfitComponent::HandleControllerSettingsChanged(FIRRGameplaySettings NewSettings) {
}

FName UIRRPlayerOutfitComponent::GetSavedPlayerOutfit() {
    return NAME_None;
}

TArray<FIRRPlayerOutfitOption> UIRRPlayerOutfitComponent::GetPlayerOutfitOptions() {
    return TArray<FIRRPlayerOutfitOption>();
}


