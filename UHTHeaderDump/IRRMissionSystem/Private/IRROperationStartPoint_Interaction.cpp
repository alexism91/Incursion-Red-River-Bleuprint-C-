#include "IRROperationStartPoint_Interaction.h"

AIRROperationStartPoint_Interaction::AIRROperationStartPoint_Interaction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AIRROperationStartPoint_Interaction::NotifyInteracted() {
    return false;
}

AIRROperationStartPoint_Interaction* AIRROperationStartPoint_Interaction::GetOwningStartPoint(AActor* HookActor) {
    return NULL;
}


