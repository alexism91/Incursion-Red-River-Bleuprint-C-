#include "MovieGraphBlueprintLibrary.h"

UMovieGraphBlueprintLibrary::UMovieGraphBlueprintLibrary() {
}

int32 UMovieGraphBlueprintLibrary::ResolveVersionNumber(FMovieGraphFilenameResolveParams InParams, const bool bGetNextVersion) {
    return 0;
}

FString UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments(const FString& InFormatString, const FMovieGraphFilenameResolveParams& InParams, FMovieGraphResolveArgs& OutMergedFormatArgs) {
    return TEXT("");
}

FMovieGraphNamedResolution UMovieGraphBlueprintLibrary::NamedResolutionFromSize(const int32 InResX, const int32 InResY) {
    return FMovieGraphNamedResolution{};
}

FMovieGraphNamedResolution UMovieGraphBlueprintLibrary::NamedResolutionFromProfile(const FName& InResolutionProfileName) {
    return FMovieGraphNamedResolution{};
}

bool UMovieGraphBlueprintLibrary::IsNamedResolutionValid(const FName& InResolutionProfileName) {
    return false;
}

FTimecode UMovieGraphBlueprintLibrary::GetRootTimecode(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FTimecode{};
}

FFrameNumber UMovieGraphBlueprintLibrary::GetRootFrameNumber(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FFrameNumber{};
}

EMovieRenderPipelineState UMovieGraphBlueprintLibrary::GetPipelineState(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return EMovieRenderPipelineState::Uninitialized;
}

FIntPoint UMovieGraphBlueprintLibrary::GetOverscannedResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio) {
    return FIntPoint{};
}

FIntRect UMovieGraphBlueprintLibrary::GetOverscanCropRectangle(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio) {
    return FIntRect{};
}

void UMovieGraphBlueprintLibrary::GetOverallSegmentCounts(const UMovieGraphPipeline* InMovieGraphPipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

void UMovieGraphBlueprintLibrary::GetOverallOutputFrames(const UMovieGraphPipeline* InMovieGraphPipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

FText UMovieGraphBlueprintLibrary::GetJobName(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FText::GetEmpty();
}

FDateTime UMovieGraphBlueprintLibrary::GetJobInitializationTime(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FDateTime{};
}

FText UMovieGraphBlueprintLibrary::GetJobAuthor(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FText::GetEmpty();
}

bool UMovieGraphBlueprintLibrary::GetEstimatedTimeRemaining(const UMovieGraphPipeline* InMovieGraphPipeline, FTimespan& OutEstimate) {
    return false;
}

FIntPoint UMovieGraphBlueprintLibrary::GetEffectiveOutputResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan) {
    return FIntPoint{};
}

FFrameRate UMovieGraphBlueprintLibrary::GetEffectiveFrameRate(UMovieGraphGlobalOutputSettingNode* InNode, const FFrameRate& InDefaultRate) {
    return FFrameRate{};
}

FIntPoint UMovieGraphBlueprintLibrary::GetDesiredOutputResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float CameraAspectRatio) {
    return FIntPoint{};
}

int32 UMovieGraphBlueprintLibrary::GetCurrentVersionNumber(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return 0;
}

FTimecode UMovieGraphBlueprintLibrary::GetCurrentShotTimecode(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FTimecode{};
}

FFrameNumber UMovieGraphBlueprintLibrary::GetCurrentShotFrameNumber(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FFrameNumber{};
}

FMoviePipelineSegmentWorkMetrics UMovieGraphBlueprintLibrary::GetCurrentSegmentWorkMetrics(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return FMoviePipelineSegmentWorkMetrics{};
}

EMovieRenderShotState UMovieGraphBlueprintLibrary::GetCurrentSegmentState(const UMovieGraphPipeline* InMovieGraphPipeline) {
    return EMovieRenderShotState::Uninitialized;
}

void UMovieGraphBlueprintLibrary::GetCurrentSegmentName(const UMovieGraphPipeline* InMovieGraphPipeline, FText& OutOuterName, FText& OutInnerName) {
}

float UMovieGraphBlueprintLibrary::GetCurrentFocusDistance(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex) {
    return 0.0f;
}

float UMovieGraphBlueprintLibrary::GetCurrentFocalLength(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex) {
    return 0.0f;
}

UMoviePipelineExecutorShot* UMovieGraphBlueprintLibrary::GetCurrentExecutorShot(const UMovieGraphPipeline* InMoviePipeline) {
    return NULL;
}

UCineCameraComponent* UMovieGraphBlueprintLibrary::GetCurrentCineCamera(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex) {
    return NULL;
}

float UMovieGraphBlueprintLibrary::GetCurrentAperture(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex) {
    return 0.0f;
}

float UMovieGraphBlueprintLibrary::GetCompletionPercentage(const UMovieGraphPipeline* InPipeline) {
    return 0.0f;
}

FIntPoint UMovieGraphBlueprintLibrary::GetBackbufferResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio) {
    return FIntPoint{};
}


