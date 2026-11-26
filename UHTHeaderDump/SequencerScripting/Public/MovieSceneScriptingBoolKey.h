#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneTimeUnit -FallbackName=EMovieSceneTimeUnit
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingBoolKey.generated.h"

UCLASS(Blueprintable)
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingBoolKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(bool InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit) const;
    
};

