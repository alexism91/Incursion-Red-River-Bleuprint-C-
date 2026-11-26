#include "AsyncAction_PlayMontage.h"

UAsyncAction_PlayMontage::UAsyncAction_PlayMontage() {
    this->PendingSingleMontage = NULL;
}

void UAsyncAction_PlayMontage::OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UAsyncAction_PlayMontage::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UAsyncAction_PlayMontage::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UAsyncAction_PlayMontage::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UAsyncAction_PlayMontage* UAsyncAction_PlayMontage::CreateProxyObjectForPlaySingleMontage(AActor* Actor, FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage, bool Predict) {
    return NULL;
}

UAsyncAction_PlayMontage* UAsyncAction_PlayMontage::CreateProxyObjectForPlayCharacterMontage(AActor* Actor, AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength, bool Predict) {
    return NULL;
}


