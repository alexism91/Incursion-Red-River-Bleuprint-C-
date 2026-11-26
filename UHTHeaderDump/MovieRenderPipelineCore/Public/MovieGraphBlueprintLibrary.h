#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntRect -FallbackName=IntRect
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMovieRenderPipelineState.h"
#include "EMovieRenderShotState.h"
#include "MovieGraphFilenameResolveParams.h"
#include "MovieGraphNamedResolution.h"
#include "MovieGraphResolveArgs.h"
#include "MoviePipelineSegmentWorkMetrics.h"
#include "MovieGraphBlueprintLibrary.generated.h"

class UCineCameraComponent;
class UMovieGraphEvaluatedConfig;
class UMovieGraphGlobalOutputSettingNode;
class UMovieGraphPipeline;
class UMoviePipelineExecutorShot;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieGraphBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static int32 ResolveVersionNumber(FMovieGraphFilenameResolveParams InParams, const bool bGetNextVersion);
    
    UFUNCTION(BlueprintCallable)
    static FString ResolveFilenameFormatArguments(const FString& InFormatString, const FMovieGraphFilenameResolveParams& InParams, FMovieGraphResolveArgs& OutMergedFormatArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMovieGraphNamedResolution NamedResolutionFromSize(const int32 InResX, const int32 InResY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMovieGraphNamedResolution NamedResolutionFromProfile(const FName& InResolutionProfileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNamedResolutionValid(const FName& InResolutionProfileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimecode GetRootTimecode(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber GetRootFrameNumber(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMovieRenderPipelineState GetPipelineState(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetOverscannedResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    static FIntRect GetOverscanCropRectangle(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOverallSegmentCounts(const UMovieGraphPipeline* InMovieGraphPipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOverallOutputFrames(const UMovieGraphPipeline* InMovieGraphPipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetJobName(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetJobInitializationTime(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetJobAuthor(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEstimatedTimeRemaining(const UMovieGraphPipeline* InMovieGraphPipeline, FTimespan& OutEstimate);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetEffectiveOutputResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan);
    
    UFUNCTION(BlueprintCallable)
    static FFrameRate GetEffectiveFrameRate(UMovieGraphGlobalOutputSettingNode* InNode, const FFrameRate& InDefaultRate);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetDesiredOutputResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float CameraAspectRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentVersionNumber(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimecode GetCurrentShotTimecode(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber GetCurrentShotFrameNumber(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMovieRenderShotState GetCurrentSegmentState(const UMovieGraphPipeline* InMovieGraphPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentSegmentName(const UMovieGraphPipeline* InMovieGraphPipeline, FText& OutOuterName, FText& OutInnerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentFocusDistance(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentFocalLength(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMoviePipelineExecutorShot* GetCurrentExecutorShot(const UMovieGraphPipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCineCameraComponent* GetCurrentCineCamera(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentAperture(const UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCompletionPercentage(const UMovieGraphPipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetBackbufferResolution(UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio);
    
};

