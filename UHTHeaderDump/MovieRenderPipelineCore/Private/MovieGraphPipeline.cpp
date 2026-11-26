#include "MovieGraphPipeline.h"
#include "MovieGraphEngineTimeStep.h"

UMovieGraphPipeline::UMovieGraphPipeline() {
    this->PendingTimeStepInstance = NULL;
    this->GraphTimeStepInstance = NULL;
    this->GraphRendererInstance = NULL;
    this->GraphDataSourceInstance = NULL;
    this->GraphAudioRendererInstance = NULL;
    this->PostRenderEvaluatedGraph = NULL;
    this->CurrentJob = NULL;
    this->CurrentJobDuplicate = NULL;
    this->PreviewWidgetClassToUse = NULL;
    this->PreviewWidget = NULL;
    this->CustomEngineTimeStep = CreateDefaultSubobject<UMovieGraphEngineTimeStep>(TEXT("MovieGraphEngineTimeStep"));
    this->PrevCustomEngineTimeStep = NULL;
}

void UMovieGraphPipeline::SetInitializationTime(const FDateTime& InDateTime) {
}

void UMovieGraphPipeline::OnMoviePipelineFinishedImpl() {
}

void UMovieGraphPipeline::Initialize(UMoviePipelineExecutorJob* InJob, const FMovieGraphInitConfig& InitConfig) {
}

UMovieGraphTimeStepBase* UMovieGraphPipeline::GetTimeStepInstance() const {
    return NULL;
}

UMovieGraphRendererBase* UMovieGraphPipeline::GetRendererInstance() const {
    return NULL;
}

FTimespan UMovieGraphPipeline::GetInitializationTimeOffset() const {
    return FTimespan{};
}

FDateTime UMovieGraphPipeline::GetInitializationTime() const {
    return FDateTime{};
}

FMovieGraphTraversalContext UMovieGraphPipeline::GetCurrentTraversalContext(const bool bForShot) const {
    return FMovieGraphTraversalContext{};
}

UMoviePipelineExecutorJob* UMovieGraphPipeline::GetCurrentJob() const {
    return NULL;
}


