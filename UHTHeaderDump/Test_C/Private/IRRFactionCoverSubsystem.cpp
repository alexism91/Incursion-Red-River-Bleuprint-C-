#include "IRRFactionCoverSubsystem.h"

UIRRFactionCoverSubsystem::UIRRFactionCoverSubsystem() {
    this->CoverSystem = NULL;
    this->NavAreaMap = NULL;
    this->BatchTrace = NULL;
}

void UIRRFactionCoverSubsystem::OnNavAreaMapUpdated(const UIRRNavAreaMap* NavMap) {
}

void UIRRFactionCoverSubsystem::OnCoverNavMapUpdated(const ACoverSystem* InCoverSystem) {
}

void UIRRFactionCoverSubsystem::OnCoverNavMapPatched(const ACoverSystem* InCoverSystem, const TArray<FBox>& PatchedBounds) {
}


