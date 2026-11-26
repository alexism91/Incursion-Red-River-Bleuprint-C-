#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MovieGraphInitConfig.h"
#include "MovieGraphTraversalContext.h"
#include "MoviePipelineBase.h"
#include "Templates/SubclassOf.h"
#include "MovieGraphPipeline.generated.h"

class UEngineCustomTimeStep;
class UMovieGraphAudioRendererBase;
class UMovieGraphConfig;
class UMovieGraphDataSourceBase;
class UMovieGraphEngineTimeStep;
class UMovieGraphEvaluatedConfig;
class UMovieGraphFileOutputNode;
class UMovieGraphRenderPreviewWidget;
class UMovieGraphRendererBase;
class UMovieGraphScriptBase;
class UMovieGraphTimeStepBase;
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphPipeline : public UMoviePipelineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphTimeStepBase*> GraphTimeStepInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphTimeStepBase* PendingTimeStepInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphTimeStepBase* GraphTimeStepInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphRendererBase* GraphRendererInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphDataSourceBase* GraphDataSourceInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphAudioRendererBase* GraphAudioRendererInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphEvaluatedConfig* PostRenderEvaluatedGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* CurrentJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* CurrentJobDuplicate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMovieGraphConfig*, UMovieGraphConfig*> DuplicatedGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoviePipelineExecutorShot*> ActiveShotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieGraphRenderPreviewWidget> PreviewWidgetClassToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphRenderPreviewWidget* PreviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphScriptBase*> CurrentScriptInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UMovieGraphFileOutputNode*> OutputNodesDataSentTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieGraphEngineTimeStep* CustomEngineTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEngineCustomTimeStep* PrevCustomEngineTimeStep;
    
public:
    UMovieGraphPipeline();

    UFUNCTION(BlueprintCallable)
    void SetInitializationTime(const FDateTime& InDateTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoviePipelineFinishedImpl();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(UMoviePipelineExecutorJob* InJob, const FMovieGraphInitConfig& InitConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphTimeStepBase* GetTimeStepInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphRendererBase* GetRendererInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetInitializationTimeOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetInitializationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieGraphTraversalContext GetCurrentTraversalContext(const bool bForShot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineExecutorJob* GetCurrentJob() const;
    
};

