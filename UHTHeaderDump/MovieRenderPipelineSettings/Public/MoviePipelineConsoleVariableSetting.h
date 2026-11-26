#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineConsoleVariableEntry -FallbackName=MoviePipelineConsoleVariableEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineSetting -FallbackName=MoviePipelineSetting
#include "MoviePipelineConsoleVariableSetting.generated.h"

class IMovieSceneConsoleVariableTrackInterface;
class UMovieSceneConsoleVariableTrackInterface;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StartConsoleCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EndConsoleCommands;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoviePipelineConsoleVariableEntry> CVars;
    
public:
    UMoviePipelineConsoleVariableSetting();

    UFUNCTION(BlueprintCallable)
    bool UpdateConsoleVariableEnableState(const FString& Name, const bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveConsoleVariable(const FString& Name, const bool bRemoveAllInstances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMoviePipelineConsoleVariableEntry> GetConsoleVariables() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddOrUpdateConsoleVariable(const FString& Name, const float Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddConsoleVariable(const FString& Name, const float Value);
    
};

