#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveExtrapolation -FallbackName=ERichCurveExtrapolation
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneKeyInterpolation -FallbackName=EMovieSceneKeyInterpolation
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneTimeUnit -FallbackName=EMovieSceneTimeUnit
#include "MovieSceneScriptingChannel.h"
#include "SequencerScriptingRange.h"
#include "MovieSceneScriptingDoubleChannel.generated.h"

class UMovieSceneScriptingDoubleKey;
class UMovieSceneScriptingKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingDoubleChannel();

    UFUNCTION(BlueprintCallable)
    void Transform(FFrameNumber OffsetFrame, double Scale, FFrameNumber PivotFrame, FSequencerScriptingRange ScriptingRange, EMovieSceneTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    
    UFUNCTION(BlueprintCallable)
    void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    
    UFUNCTION(BlueprintCallable)
    void SetDefault(double InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintPure)
    double GetDefault() const;
    
    UFUNCTION(BlueprintPure)
    TArray<double> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSequencerScriptingRange ComputeEffectiveRange() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingDoubleKey* AddKey(const FFrameNumber& InTime, double NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
    
};

