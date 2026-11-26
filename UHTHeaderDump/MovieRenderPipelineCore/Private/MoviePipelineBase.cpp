#include "MoviePipelineBase.h"

UMoviePipelineBase::UMoviePipelineBase() {
}

void UMoviePipelineBase::Shutdown(bool bIsError) {
}

void UMoviePipelineBase::RequestShutdown(bool bIsError) {
}

bool UMoviePipelineBase::IsShutdownRequested() const {
    return false;
}

EMovieRenderPipelineState UMoviePipelineBase::GetPipelineState() const {
    return EMovieRenderPipelineState::Uninitialized;
}


