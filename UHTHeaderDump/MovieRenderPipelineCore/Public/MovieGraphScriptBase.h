#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineOutputData.h"
#include "MovieGraphScriptBase.generated.h"

class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphScriptBase : public UObject {
    GENERATED_BODY()
public:
    UMovieGraphScriptBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShotStart(UMoviePipelineExecutorJob* InJobCopy, UMoviePipelineExecutorShot* InShotCopy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShotFinished(UMoviePipelineExecutorJob* InJobCopy, UMoviePipelineExecutorShot* InShotCopy, const FMoviePipelineOutputData& OutputData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJobStart(UMoviePipelineExecutorJob* InJobCopy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJobFinished(UMoviePipelineExecutorJob* InJobCopy, const FMoviePipelineOutputData& InOutputData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPerShotCallbackNeeded() const;
    
};

