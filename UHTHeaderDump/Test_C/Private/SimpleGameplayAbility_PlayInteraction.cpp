#include "SimpleGameplayAbility_PlayInteraction.h"

USimpleGameplayAbility_PlayInteraction::USimpleGameplayAbility_PlayInteraction() {
    this->bUnEquipWeapon = false;
    this->InteractionMontage = NULL;
}

void USimpleGameplayAbility_PlayInteraction::OnInteractionNotifyBegin(FName NotifyName) {
}

void USimpleGameplayAbility_PlayInteraction::OnInteractionMontageInterrupted(FName NotifyName) {
}

void USimpleGameplayAbility_PlayInteraction::OnInteractionMontageEnded(FName NotifyName) {
}

void USimpleGameplayAbility_PlayInteraction::ExecuteNotify_Implementation(FName Name) {
}


