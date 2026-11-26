#include "MovieGraphScriptBase.h"

UMovieGraphScriptBase::UMovieGraphScriptBase() {
}

void UMovieGraphScriptBase::OnShotStart_Implementation(UMoviePipelineExecutorJob* InJobCopy, UMoviePipelineExecutorShot* InShotCopy) {
}

void UMovieGraphScriptBase::OnShotFinished_Implementation(UMoviePipelineExecutorJob* InJobCopy, UMoviePipelineExecutorShot* InShotCopy, const FMoviePipelineOutputData& OutputData) {
}

void UMovieGraphScriptBase::OnJobStart_Implementation(UMoviePipelineExecutorJob* InJobCopy) {
}

void UMovieGraphScriptBase::OnJobFinished_Implementation(UMoviePipelineExecutorJob* InJobCopy, const FMoviePipelineOutputData& InOutputData) {
}

bool UMovieGraphScriptBase::IsPerShotCallbackNeeded_Implementation() const {
    return false;
}


