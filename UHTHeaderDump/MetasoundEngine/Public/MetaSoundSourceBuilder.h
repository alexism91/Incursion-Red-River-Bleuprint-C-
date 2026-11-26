#pragma once
#include "CoreMinimal.h"
#include "EMetaSoundBuilderResult.h"
#include "EMetaSoundOutputAudioFormat.h"
#include "MetaSoundBuilderBase.h"
#include "OnCreateAuditionGeneratorHandleDelegateDelegate.h"
#include "MetaSoundSourceBuilder.generated.h"

class UAudioComponent;
class UObject;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase {
    GENERATED_BODY()
public:
    UMetaSoundSourceBuilder();

    UFUNCTION(BlueprintCallable)
    void SetSampleRateOverride(int32 SampleRate);
    
    UFUNCTION(BlueprintCallable)
    void SetQuality(FName Quality);
    
    UFUNCTION(BlueprintCallable)
    void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockRateOverride(float BlockRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLiveUpdatesEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void Audition(UObject* Parent, UAudioComponent* AudioComponent, FOnCreateAuditionGeneratorHandleDelegate OnCreateGenerator, bool bLiveUpdatesEnabled);
    
};

