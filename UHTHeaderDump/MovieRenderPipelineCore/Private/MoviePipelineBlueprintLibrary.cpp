#include "MoviePipelineBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UMoviePipelineBlueprintLibrary::UMoviePipelineBlueprintLibrary() {
}

void UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(ULevelSequence* InSequence, UMoviePipelineExecutorJob* InJob, bool& bShotsChanged) {
}

int32 UMoviePipelineBlueprintLibrary::ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams, bool bGetNextVersion) {
    return 0;
}

void UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments(const FString& InFormatString, const FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs) {
}

UMoviePipelineQueue* UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(const FString& InManifestFilePath) {
    return NULL;
}

FTimecode UMoviePipelineBlueprintLibrary::GetRootTimecode(const UMoviePipeline* InMoviePipeline) {
    return FTimecode{};
}

FFrameNumber UMoviePipelineBlueprintLibrary::GetRootFrameNumber(const UMoviePipeline* InMoviePipeline) {
    return FFrameNumber{};
}

EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::GetPipelineState(const UMoviePipeline* InPipeline) {
    return EMovieRenderPipelineState::Uninitialized;
}

FIntPoint UMoviePipelineBlueprintLibrary::GetOverscannedResolution(const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InPipelineExecutorShot, float InDefaultOverscan) {
    return FIntPoint{};
}

FIntRect UMoviePipelineBlueprintLibrary::GetOverscanCropRectangle(const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InPipelineExecutorShot, float DefaultOverscan) {
    return FIntRect{};
}

void UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

void UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

FText UMoviePipelineBlueprintLibrary::GetMoviePipelineEngineChangelistLabel(const UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

FString UMoviePipelineBlueprintLibrary::GetMapPackageName(UMoviePipelineExecutorJob* InJob) {
    return TEXT("");
}

FText UMoviePipelineBlueprintLibrary::GetJobName(UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

FDateTime UMoviePipelineBlueprintLibrary::GetJobInitializationTime(const UMoviePipeline* InMoviePipeline) {
    return FDateTime{};
}

FText UMoviePipelineBlueprintLibrary::GetJobAuthor(UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

bool UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(const UMoviePipeline* InPipeline, FTimespan& OutEstimate) {
    return false;
}

FIntPoint UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(UMoviePipelinePrimaryConfig* InPrimaryConfig, UMoviePipelineExecutorShot* InPipelineExecutorShot, float DefaultOverscan) {
    return FIntPoint{};
}

FIntPoint UMoviePipelineBlueprintLibrary::GetDesiredOutputResolution(const UMoviePipelinePrimaryConfig* InPrimaryConfig) {
    return FIntPoint{};
}

int32 UMoviePipelineBlueprintLibrary::GetCurrentVersionNumber(const UMoviePipeline* InMoviePipeline) {
    return 0;
}

FTimecode UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(const UMoviePipeline* InMoviePipeline) {
    return FTimecode{};
}

FFrameNumber UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(const UMoviePipeline* InMoviePipeline) {
    return FFrameNumber{};
}

ULevelSequence* UMoviePipelineBlueprintLibrary::GetCurrentSequence(const UMoviePipeline* InMoviePipeline) {
    return NULL;
}

FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(const UMoviePipeline* InMoviePipeline) {
    return FMoviePipelineSegmentWorkMetrics{};
}

EMovieRenderShotState UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(UMoviePipeline* InMoviePipeline) {
    return EMovieRenderShotState::Uninitialized;
}

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName) {
}

float UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(const UMoviePipeline* InMoviePipeline) {
    return 0.0f;
}

float UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(const UMoviePipeline* InMoviePipeline) {
    return 0.0f;
}

UMoviePipelineExecutorShot* UMoviePipelineBlueprintLibrary::GetCurrentExecutorShot(const UMoviePipeline* InMoviePipeline) {
    return NULL;
}

float UMoviePipelineBlueprintLibrary::GetCurrentAperture(const UMoviePipeline* InMoviePipeline) {
    return 0.0f;
}

float UMoviePipelineBlueprintLibrary::GetCompletionPercentage(const UMoviePipeline* InPipeline) {
    return 0.0f;
}

FIntPoint UMoviePipelineBlueprintLibrary::GetBackbufferResolution(const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InPipelineExecutorShot, float InDefaultOverscan) {
    return FIntPoint{};
}

UMoviePipelineSetting* UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(TSubclassOf<UMoviePipelineSetting> InSettingType, const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InShot) {
    return NULL;
}

UMovieSceneSequence* UMoviePipelineBlueprintLibrary::DuplicateSequence(UObject* Outer, UMovieSceneSequence* InSequence) {
    return NULL;
}


