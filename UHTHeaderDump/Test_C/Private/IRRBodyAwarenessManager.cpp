#include "IRRBodyAwarenessManager.h"

UIRRBodyAwarenessManager::UIRRBodyAwarenessManager() {
}

void UIRRBodyAwarenessManager::OnCharacterRevive(AIRRBaseCharacter* Character) {
}

void UIRRBodyAwarenessManager::OnCharacterDeath(AIRRBaseCharacter* Character) {
}

EIRRBodyAwareness UIRRBodyAwarenessManager::GetBodyAwareness(const AIRRAIBaseController* Bot, const AIRRBaseCharacter* DeadCharacter) const {
    return EIRRBodyAwareness::Unaware;
}


