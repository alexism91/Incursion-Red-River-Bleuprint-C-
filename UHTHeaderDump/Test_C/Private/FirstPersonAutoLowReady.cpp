#include "FirstPersonAutoLowReady.h"

UFirstPersonAutoLowReady::UFirstPersonAutoLowReady() {
    this->bUseCustomTickRate = true;
    this->GameplayAbilityComponent = NULL;
    this->FirstPersonCoreComponent = NULL;
}

void UFirstPersonAutoLowReady::OnControllerSettingsChanged(FIRRGameplaySettings NewSettings) {
}

void UFirstPersonAutoLowReady::OnAbilityStarted(FGameplayTag AbilityTag) {
}

void UFirstPersonAutoLowReady::OnAbilityEnded(FGameplayTag AbilityTag, bool bSuccess) {
}


