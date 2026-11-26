#include "IRRHandlerVoiceSet.h"

UIRRHandlerVoiceSet::UIRRHandlerVoiceSet() {
    this->Agent = NULL;
}

bool UIRRHandlerVoiceSet::ShouldBeatInterrupt(FGameplayTag Beat) const {
    return false;
}

bool UIRRHandlerVoiceSet::PickLine(const APawn* Listener, FGameplayTag Beat, FIRRBriefingPick& OutPick) const {
    return false;
}

bool UIRRHandlerVoiceSet::GetLine(FGameplayTag Beat, FIRRMissionBriefing& Outline) const {
    return false;
}

void UIRRHandlerVoiceSet::CommitLine(const APawn* Listener, FGameplayTag Beat, const FIRRBriefingPick& Pick) const {
}


