#include "InteractionAction.h"

UInteractionAction::UInteractionAction() {
    this->bExecuteOnServer = false;
}

void UInteractionAction::Interrupt_Implementation(UInteractionTarget* OwnerComp, AActor* InteractingActor) {
}

float UInteractionAction::GetExecutionTime_Implementation(UInteractionTarget* OwnerComp, AActor* InteractingActor) {
    return 0.0f;
}

void UInteractionAction::Execute_Implementation(UInteractionTarget* OwnerComp, AActor* InteractingActor, bool bDoubleTab) {
}


