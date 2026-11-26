#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneTimeUnit -FallbackName=EMovieSceneTimeUnit
#include "MovieSceneScriptingChannel.h"
#include "SequencerScriptingRange.h"
#include "MovieSceneScriptingStringChannel.generated.h"

class UMovieSceneScriptingKey;
class UMovieSceneScriptingStringKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingStringChannel();

    UFUNCTION(BlueprintCallable)
    void Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    void SetDefault(const FString& InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefault() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingStringKey* AddKey(const FFrameNumber& InTime, const FString& NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    
};

