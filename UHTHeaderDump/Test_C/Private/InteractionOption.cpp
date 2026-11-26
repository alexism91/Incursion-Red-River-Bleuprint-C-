#include "InteractionOption.h"

UInteractionOption::UInteractionOption() {
    this->InteractionType = EInteractionType::Tab;
    this->bAllowConcurrentInteraction = true;
}

void UInteractionOption::ReplicateActions(UIRRObjectReplicationComponent* Comp) {
}

void UInteractionOption::FinishInteraction(EInteractionFinishedMode FinishedMode, UInteractionTarget* OwnerComp, AActor* InteractingActor, bool bDoubleTab) {
}

bool UInteractionOption::CheckConditions(AActor* Owner, AActor* InteractingActor) {
    return false;
}


