#include "IRRAIGroupPawn.h"

AIRRAIGroupPawn::AIRRAIGroupPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroupController = NULL;
}

void AIRRAIGroupPawn::SetGroupController(AIRRAIGroupController* NewController) {
}

AIRRAIGroupController* AIRRAIGroupPawn::GetGroupController() const {
    return NULL;
}


