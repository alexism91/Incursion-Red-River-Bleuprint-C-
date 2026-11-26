#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntRect -FallbackName=IntRect
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMovieRenderPipelineState.h"
#include "EMovieRenderShotState.h"
#include "MoviePipelineFilenameResolveParams.h"
#include "MoviePipelineFormatArgs.h"
#include "MoviePipelineSegmentWorkMetrics.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineBlueprintLibrary.generated.h"

class ULevelSequence;
class UMoviePipeline;
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;
class UMoviePipelinePrimaryConfig;
class UMoviePipelineQueue;
class UMoviePipelineSetting;
class UMovieSceneSequence;
class UObject;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMoviePipelineBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateJobShotListFromSequence(ULevelSequence* InSequence, UMoviePipelineExecutorJob* InJob, bool& bShotsChanged);
    
    UFUNCTION(BlueprintCallable)
    static int32 ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams, bool bGetNextVersion);
    
    UFUNCTION(BlueprintCallable)
    static void ResolveFilenameFormatArguments(const FString& InFormatString, const FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs);
    
    UFUNCTION(BlueprintCallable)
    static UMoviePipelineQueue* LoadManifestFileFromString(const FString& InManifestFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimecode GetRootTimecode(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber GetRootFrameNumber(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMovieRenderPipelineState GetPipelineState(const UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetOverscannedResolution(const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InPipelineExecutorShot, float InDefaultOverscan);
    
    UFUNCTION(BlueprintCallable)
    static FIntRect GetOverscanCropRectangle(const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InPipelineExecutorShot, float DefaultOverscan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOverallSegmentCounts(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOverallOutputFrames(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMoviePipelineEngineChangelistLabel(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMapPackageName(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetJobName(UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetJobInitializationTime(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetJobAuthor(UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEstimatedTimeRemaining(const UMoviePipeline* InPipeline, FTimespan& OutEstimate);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetEffectiveOutputResolution(UMoviePipelinePrimaryConfig* InPrimaryConfig, UMoviePipelineExecutorShot* InPipelineExecutorShot, float DefaultOverscan);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetDesiredOutputResolution(const UMoviePipelinePrimaryConfig* InPrimaryConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentVersionNumber(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimecode GetCurrentShotTimecode(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameNumber GetCurrentShotFrameNumber(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULevelSequence* GetCurrentSequence(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMovieRenderShotState GetCurrentSegmentState(UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentSegmentName(UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentFocusDistance(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentFocalLength(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMoviePipelineExecutorShot* GetCurrentExecutorShot(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentAperture(const UMoviePipeline* InMoviePipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCompletionPercentage(const UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetBackbufferResolution(const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InPipelineExecutorShot, float InDefaultOverscan);
    
    UFUNCTION(BlueprintCallable)
    static UMoviePipelineSetting* FindOrGetDefaultSettingForShot(TSubclassOf<UMoviePipelineSetting> InSettingType, const UMoviePipelinePrimaryConfig* InPrimaryConfig, const UMoviePipelineExecutorShot* InShot);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneSequence* DuplicateSequence(UObject* Outer, UMovieSceneSequence* InSequence);
    
};

