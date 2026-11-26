#include "MovieGraphQuickRenderModeSettings.h"

UMovieGraphQuickRenderModeSettings::UMovieGraphQuickRenderModeSettings() {
    this->PostRenderBehavior = EMovieGraphQuickRenderPostRenderActionType::PlayRenderOutput;
    this->bOverride_ViewportLookFlags = false;
    this->ViewportLookFlags = 0;
    this->FrameRangeType = EMovieGraphQuickRenderFrameRangeType::PlaybackRange;
    this->CustomStartFrame = 0;
    this->CustomEndFrame = 0;
}

void UMovieGraphQuickRenderModeSettings::RefreshVariableAssignments(UMovieGraphQuickRenderModeSettings* InSettings) {
}

UMovieJobVariableAssignmentContainer* UMovieGraphQuickRenderModeSettings::GetVariableAssignmentsForGraph(const TSoftObjectPtr<UMovieGraphConfig>& InGraphConfigPath) const {
    return NULL;
}


