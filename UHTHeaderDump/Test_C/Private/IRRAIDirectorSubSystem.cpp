#include "IRRAIDirectorSubSystem.h"

UIRRAIDirectorSubSystem::UIRRAIDirectorSubSystem() {
    this->BodyAwarenessManager = NULL;
    this->TargetPathManager = NULL;
    this->PerceptionSharingManager = NULL;
}

void UIRRAIDirectorSubSystem::OnBotRemoved(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character) {
}

void UIRRAIDirectorSubSystem::OnBotAdded(AIRRAIBaseController* Controller, AIRRBaseCharacter* Character) {
}

UIRRBodyAwarenessManager* UIRRAIDirectorSubSystem::GetBodyAwarenessManager() const {
    return NULL;
}

void UIRRAIDirectorSubSystem::ForgetPawn(APawn* Pawn) {
}

void UIRRAIDirectorSubSystem::CheckForgetTargets() {
}


