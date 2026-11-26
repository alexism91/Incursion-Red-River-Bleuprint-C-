#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneTimeUnit -FallbackName=EMovieSceneTimeUnit
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=EParticleKey -FallbackName=EParticleKey
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingParticleKey.generated.h"

UCLASS(Blueprintable)
class UMovieSceneScriptingParticleKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingParticleKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(EParticleKey InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EParticleKey GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit) const;
    
};

