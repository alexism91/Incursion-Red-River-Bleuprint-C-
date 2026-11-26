#include "AbilityTask_PlayMontageAndWait.h"

UAbilityTask_PlayMontageAndWait::UAbilityTask_PlayMontageAndWait() {
    this->MontageToPlay = NULL;
    this->Rate = 0.00f;
    this->AnimRootMotionTranslationScale = 0.00f;
    this->StartTimeSeconds = 0.00f;
    this->bStopWhenAbilityEnds = false;
    this->bAllowInterruptAfterBlendOut = false;
}

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted() {
}

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayMontageAndWait::OnMontageBlendedIn(UAnimMontage* Montage) {
}

void UAbilityTask_PlayMontageAndWait::OnGameplayAbilityCancelled() {
}

UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds, bool NewBAllowInterruptAfterBlendOut) {
    return NULL;
}


