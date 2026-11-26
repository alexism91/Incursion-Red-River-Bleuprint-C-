#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "MoviePipelineConfigBase.h"
#include "MoviePipelinePrimaryConfig.generated.h"

class ULevelSequence;
class UMoviePipelineOutputSetting;
class UMoviePipelineSetting;
class UMoviePipelineShotConfig;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UMoviePipelineShotConfig*> PerShotConfigMapping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoviePipelineOutputSetting* OutputSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoviePipelineSetting*> TransientSettings;
    
public:
    UMoviePipelinePrimaryConfig();

    UFUNCTION(BlueprintCallable)
    void InitializeTransientSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMoviePipelineSetting*> GetTransientSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameRate GetEffectiveFrameRate(const ULevelSequence* InSequence) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings) const;
    
};

