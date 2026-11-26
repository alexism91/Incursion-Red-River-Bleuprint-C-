#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieRenderPipelineState.h"
#include "MoviePipelineWorkFinishedDelegate.h"
#include "MoviePipelineBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineWorkFinished OnMoviePipelineWorkFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePipelineWorkFinished OnMoviePipelineShotWorkFinishedDelegate;
    
    UMoviePipelineBase();

    UFUNCTION(BlueprintCallable)
    void Shutdown(bool bIsError);
    
    UFUNCTION(BlueprintCallable)
    void RequestShutdown(bool bIsError);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShutdownRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieRenderPipelineState GetPipelineState() const;
    
};

