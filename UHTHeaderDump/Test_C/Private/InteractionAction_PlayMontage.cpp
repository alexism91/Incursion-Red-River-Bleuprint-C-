#include "InteractionAction_PlayMontage.h"

UInteractionAction_PlayMontage::UInteractionAction_PlayMontage() {
    this->bUseCharacterAnimation = true;
    this->bListenToMontageNotifies = true;
    this->bSyncAnimLength = true;
    this->Montage = NULL;
    this->PlayRate = 1.00f;
    this->bStopPreviousMontage = false;
}

float UInteractionAction_PlayMontage::GetExecutionTime_Implementation(UInteractionTarget* OwnerComp, AActor* InteractingActor) {
    return 0.0f;
}


