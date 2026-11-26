#include "FirstPersonStamina_Character.h"

UFirstPersonStamina_Character::UFirstPersonStamina_Character() {
    this->MaterialParameterCollection = NULL;
    this->StaminaCurveMapping = NULL;
    this->SprintEffect = NULL;
    this->RunEffect = NULL;
    this->RunningDrainHandle = NULL;
    this->TacSprintDrainHandle = NULL;
    this->CachedGameplayTagsComponent = NULL;
}

void UFirstPersonStamina_Character::OnOwnedGameplayTagsUpdated(FGameplayTagContainer Tags) {
}


