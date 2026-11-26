#include "MoviePipeline.h"
#include "MoviePipelineCustomTimeStep.h"

UMoviePipeline::UMoviePipeline() {
    this->CustomTimeStep = CreateDefaultSubobject<UMoviePipelineCustomTimeStep>(TEXT("MoviePipelineCustomTimeStep"));
    this->CachedPrevCustomTimeStep = NULL;
    this->TargetSequence = NULL;
    this->LevelSequenceActor = NULL;
    this->DebugWidget = NULL;
    this->PreviewTexture = NULL;
    this->CurrentJob = NULL;
}

void UMoviePipeline::SetInitializationTime(const FDateTime& InDateTime) {
}

void UMoviePipeline::OnMoviePipelineFinishedImpl() {
}

void UMoviePipeline::Initialize(UMoviePipelineExecutorJob* InJob) {
}

UTexture* UMoviePipeline::GetPreviewTexture() const {
    return NULL;
}

UMoviePipelinePrimaryConfig* UMoviePipeline::GetPipelinePrimaryConfig() const {
    return NULL;
}

FTimespan UMoviePipeline::GetInitializationTimeOffset() const {
    return FTimespan{};
}

FDateTime UMoviePipeline::GetInitializationTime() const {
    return FDateTime{};
}

UMoviePipelineExecutorJob* UMoviePipeline::GetCurrentJob() const {
    return NULL;
}


