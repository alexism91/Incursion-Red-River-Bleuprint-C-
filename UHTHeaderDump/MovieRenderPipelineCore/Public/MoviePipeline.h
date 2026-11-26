#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MoviePipelineBase.h"
#include "MoviePipeline.generated.h"

class ALevelSequenceActor;
class UEngineCustomTimeStep;
class ULevelSequence;
class UMoviePipelineCustomTimeStep;
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UMovieRenderDebugWidget;
class UTexture;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipeline : public UMoviePipelineBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineCustomTimeStep* CustomTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEngineCustomTimeStep* CachedPrevCustomTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* TargetSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieRenderDebugWidget* DebugWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* PreviewTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoviePipelineExecutorJob* CurrentJob;
    
public:
    UMoviePipeline();

    UFUNCTION(BlueprintCallable)
    void SetInitializationTime(const FDateTime& InDateTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoviePipelineFinishedImpl();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetPreviewTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetInitializationTimeOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetInitializationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineExecutorJob* GetCurrentJob() const;
    
};

