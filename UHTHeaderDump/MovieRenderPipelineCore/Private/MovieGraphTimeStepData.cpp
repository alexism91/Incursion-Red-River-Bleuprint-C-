#include "MovieGraphTimeStepData.h"

FMovieGraphTimeStepData::FMovieGraphTimeStepData() {
    this->OutputFrameNumber = 0;
    this->ShotOutputFrameNumber = 0;
    this->RenderedFrameNumber = 0;
    this->FrameDeltaTime = 0.00f;
    this->WorldTimeDilation = 0.00f;
    this->bHasRelativeTimeBeenUsed = false;
    this->WorldSeconds = 0.00f;
    this->MotionBlurFraction = 0.00f;
    this->TemporalSampleIndex = 0;
    this->TemporalSampleCount = 0;
    this->SpatialSampleIndex = 0;
    this->SpatialSampleCount = 0;
    this->bIsFirstTemporalSampleForFrame = false;
    this->bIsLastTemporalSampleForFrame = false;
    this->bDiscardOutput = false;
    this->bRequiresAccumulator = false;
    this->EvaluatedConfig = NULL;
}

