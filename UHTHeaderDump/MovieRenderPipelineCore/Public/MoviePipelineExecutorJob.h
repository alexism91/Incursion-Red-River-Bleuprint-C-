#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MoviePipelineConsoleVariableEntry.h"
#include "MoviePipelineExecutorJob.generated.h"

class UMovieGraphConfig;
class UMovieJobVariableAssignmentContainer;
class UMoviePipelineExecutorShot;
class UMoviePipelinePrimaryConfig;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineExecutorJob : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JobName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Author;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMoviePipelineExecutorShot*> ShotInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoviePipelineConsoleVariableEntry> ConsoleVariableOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString StatusMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StatusProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoviePipelinePrimaryConfig* Configuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMoviePipelinePrimaryConfig> PresetOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMovieGraphConfig> GraphPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieJobVariableAssignmentContainer*> GraphVariableAssignments;
    
public:
    UMoviePipelineExecutorJob();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusProgress(const float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusMessage(const FString& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetSequence(FSoftObjectPath InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetOrigin(UMoviePipelinePrimaryConfig* InPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsEnabled(const bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphPreset(const UMovieGraphConfig* InGraphPreset, const bool bUpdateVariableAssignments);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetConsumed(const bool bInConsumed);
    
    UFUNCTION(BlueprintCallable)
    void SetConfiguration(UMoviePipelinePrimaryConfig* InPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDuplicated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGraphConfiguration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsConsumed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetStatusProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetStatusMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelinePrimaryConfig* GetPresetOrigin() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieJobVariableAssignmentContainer* GetOrCreateJobVariableAssignmentsForGraph(const UMovieGraphConfig* InGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphConfig* GetGraphPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelinePrimaryConfig* GetConfiguration() const;
    
};

