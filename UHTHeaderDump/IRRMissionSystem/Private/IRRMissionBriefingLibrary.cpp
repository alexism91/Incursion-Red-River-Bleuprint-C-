#include "IRRMissionBriefingLibrary.h"
#include "Templates/SubclassOf.h"

UIRRMissionBriefingLibrary::UIRRMissionBriefingLibrary() {
}

bool UIRRMissionBriefingLibrary::TryStartBriefingAbility(APawn* Pawn, const FIRRMissionBriefing& Briefing, UIRRAgentSetup* Agent, TSubclassOf<USimpleGameplayAbility_PlayMissionBriefing> AbilityClassOverride, bool bIgnoreDanger) {
    return false;
}

EIRRBriefingStartResult UIRRMissionBriefingLibrary::TryPlayBriefing(APawn* Pawn, const FIRRBriefingVariants& Briefing, UIRRAgentSetup* Agent, TSubclassOf<USimpleGameplayAbility_PlayMissionBriefing> AbilityClassOverride) {
    return EIRRBriefingStartResult::Started;
}

void UIRRMissionBriefingLibrary::SetBriefingAutoPlayedInUI(const UObject* WorldContextObject, const FIRRMissionBriefing& Briefing, bool bAutoPlayed) {
}

void UIRRMissionBriefingLibrary::ResetBriefingMemory(const UObject* WorldContextObject, const FIRRBriefingVariants& Briefing) {
}

bool UIRRMissionBriefingLibrary::PickBriefing(const APawn* Pawn, const FIRRBriefingVariants& Briefing, FIRRBriefingPick& OutPick) {
    return false;
}

bool UIRRMissionBriefingLibrary::HasPlayedFirstTimeBriefing(const APawn* Pawn, const FIRRBriefingVariants& Briefing) {
    return false;
}

bool UIRRMissionBriefingLibrary::HasBriefingAutoPlayedInUI(const UObject* WorldContextObject, const FIRRMissionBriefing& Briefing) {
    return false;
}

float UIRRMissionBriefingLibrary::GetBriefingAudioDuration(const FIRRMissionBriefing& Briefing) {
    return 0.0f;
}

void UIRRMissionBriefingLibrary::CommitBriefingPick(const APawn* Pawn, const FIRRBriefingVariants& Briefing, const FIRRBriefingPick& Pick) {
}


