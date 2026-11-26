#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneTimeUnit -FallbackName=EMovieSceneTimeUnit
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingObjectPathKey.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingObjectPathKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(UObject* InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit) const;
    
};

