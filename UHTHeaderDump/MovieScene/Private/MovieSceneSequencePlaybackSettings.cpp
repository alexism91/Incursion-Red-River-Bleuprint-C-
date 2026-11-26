#include "MovieSceneSequencePlaybackSettings.h"

FMovieSceneSequencePlaybackSettings::FMovieSceneSequencePlaybackSettings() {
    this->bAutoPlay = false;
    this->PlayRate = 0.00f;
    this->StartTime = 0.00f;
    this->bRandomStartTime = false;
    this->bDisableMovementInput = false;
    this->bDisableLookAtInput = false;
    this->bHidePlayer = false;
    this->bHideHud = false;
    this->bDisableCameraCuts = false;
    this->FinishCompletionStateOverride = EMovieSceneCompletionModeOverride::None;
    this->bPauseAtEnd = false;
    this->bInheritTickIntervalFromOwner = false;
    this->bDynamicWeighting = false;
}

