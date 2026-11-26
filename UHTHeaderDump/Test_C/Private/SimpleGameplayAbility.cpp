#include "SimpleGameplayAbility.h"

USimpleGameplayAbility::USimpleGameplayAbility() {
    this->bSingleInstance = true;
    this->bBufferAbility = false;
    this->Instigator = NULL;
    this->AbilityComponent = NULL;
    this->bActive = false;
    this->StopAbilityMontage = false;
}

void USimpleGameplayAbility::ReceiveUpdatedGameplayTags_Implementation(FGameplayTagContainer NewTags) {
}

void USimpleGameplayAbility::ReceiveTriedStartedGameplayAbility_Implementation(USimpleGameplayAbility* Ability, bool bWasSuccessful) {
}

bool USimpleGameplayAbility::IsSingleInstance_Implementation() {
    return false;
}

bool USimpleGameplayAbility::IsAbilityToggled_Implementation() {
    return false;
}

bool USimpleGameplayAbility::IsAbilityBuffered_Implementation() {
    return false;
}

bool USimpleGameplayAbility::IsAbilityActive_Implementation() {
    return false;
}

void USimpleGameplayAbility::InterruptAbility_Implementation() {
}

void USimpleGameplayAbility::FinishAbility_Implementation(bool bSuccess) {
}

void USimpleGameplayAbility::DeactivateAbility_Implementation() {
}

void USimpleGameplayAbility::CommitAbility_Implementation() {
}

bool USimpleGameplayAbility::CanStartAbility_Implementation() {
    return false;
}

void USimpleGameplayAbility::ActivateAbility_Implementation() {
}


