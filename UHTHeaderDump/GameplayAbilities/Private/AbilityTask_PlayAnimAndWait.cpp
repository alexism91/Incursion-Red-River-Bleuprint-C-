#include "AbilityTask_PlayAnimAndWait.h"

UAbilityTask_PlayAnimAndWait::UAbilityTask_PlayAnimAndWait() {
    this->AnimSequenceToPlay = NULL;
}

void UAbilityTask_PlayAnimAndWait::OnMontageInterrupted() {
}

void UAbilityTask_PlayAnimAndWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayAnimAndWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayAnimAndWait::OnMontageBlendedIn(UAnimMontage* Montage) {
}

UAbilityTask_PlayAnimAndWait* UAbilityTask_PlayAnimAndWait::CreatePlayAnimAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimSequence* AnimSequence, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float StartTimeSeconds, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float InPlayCount) {
    return NULL;
}


