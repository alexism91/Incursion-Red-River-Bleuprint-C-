#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneTimeUnit -FallbackName=EMovieSceneTimeUnit
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=EParticleKey -FallbackName=EParticleKey
#include "MovieSceneScriptingChannel.h"
#include "SequencerScriptingRange.h"
#include "MovieSceneScriptingParticleChannel.generated.h"

class UMovieSceneScriptingKey;
class UMovieSceneScriptingParticleKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingParticleChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingParticleChannel();

    UFUNCTION(BlueprintCallable)
    void Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    void SetDefault(EParticleKey InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EParticleKey GetDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EParticleKey> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSequencerScriptingRange ComputeEffectiveRange() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingParticleKey* AddKey(const FFrameNumber& InTime, EParticleKey NewParticleValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    
};

