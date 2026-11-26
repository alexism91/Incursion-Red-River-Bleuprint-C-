#include "MoviePipelineExecutorJob.h"
#include "MoviePipelinePrimaryConfig.h"

UMoviePipelineExecutorJob::UMoviePipelineExecutorJob() {
    this->StatusProgress = 0.00f;
    this->bIsConsumed = false;
    this->Configuration = CreateDefaultSubobject<UMoviePipelinePrimaryConfig>(TEXT("DefaultConfig"));
    this->bEnabled = true;
}

void UMoviePipelineExecutorJob::SetStatusProgress_Implementation(const float InProgress) {
}

void UMoviePipelineExecutorJob::SetStatusMessage_Implementation(const FString& InStatus) {
}

void UMoviePipelineExecutorJob::SetSequence(FSoftObjectPath InSequence) {
}

void UMoviePipelineExecutorJob::SetPresetOrigin(UMoviePipelinePrimaryConfig* InPreset) {
}

void UMoviePipelineExecutorJob::SetIsEnabled_Implementation(const bool bInEnabled) {
}

void UMoviePipelineExecutorJob::SetGraphPreset(const UMovieGraphConfig* InGraphPreset, const bool bUpdateVariableAssignments) {
}

void UMoviePipelineExecutorJob::SetConsumed_Implementation(const bool bInConsumed) {
}

void UMoviePipelineExecutorJob::SetConfiguration(UMoviePipelinePrimaryConfig* InPreset) {
}

void UMoviePipelineExecutorJob::OnDuplicated_Implementation() {
}

bool UMoviePipelineExecutorJob::IsUsingGraphConfiguration() const {
    return false;
}

bool UMoviePipelineExecutorJob::IsEnabled_Implementation() const {
    return false;
}

bool UMoviePipelineExecutorJob::IsConsumed_Implementation() const {
    return false;
}

float UMoviePipelineExecutorJob::GetStatusProgress_Implementation() const {
    return 0.0f;
}

FString UMoviePipelineExecutorJob::GetStatusMessage_Implementation() const {
    return TEXT("");
}

UMoviePipelinePrimaryConfig* UMoviePipelineExecutorJob::GetPresetOrigin() const {
    return NULL;
}

UMovieJobVariableAssignmentContainer* UMoviePipelineExecutorJob::GetOrCreateJobVariableAssignmentsForGraph(const UMovieGraphConfig* InGraph) {
    return NULL;
}

UMovieGraphConfig* UMoviePipelineExecutorJob::GetGraphPreset() const {
    return NULL;
}

UMoviePipelinePrimaryConfig* UMoviePipelineExecutorJob::GetConfiguration() const {
    return NULL;
}


