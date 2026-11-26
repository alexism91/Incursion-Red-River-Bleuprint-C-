#include "IRRAIGroupSubSystem.h"
#include "IRRAIGroupController.h"
#include "IRRAIGroupPawn.h"

UIRRAIGroupSubSystem::UIRRAIGroupSubSystem() {
    this->GroupPawnClass = AIRRAIGroupPawn::StaticClass();
    this->GroupControllerClass = AIRRAIGroupController::StaticClass();
    this->GroupTickRate = 0.25f;
}

void UIRRAIGroupSubSystem::TickGroups() {
}

void UIRRAIGroupSubSystem::OnGroupEmpty(AIRRAIGroupController* Group) {
}


