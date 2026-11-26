#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundWave -FallbackName=SoundWave
#include "ScrubbedSound.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UScrubbedSound : public USoundWave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWaveToScrub;
    
public:
    UScrubbedSound();

    UFUNCTION(BlueprintCallable)
    void SetSoundWave(USoundWave* InSoundWave);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayheadTime(float InPlayheadTimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetIsScrubbingWhileStationary(bool bInScrubWhileStationary);
    
    UFUNCTION(BlueprintCallable)
    void SetIsScrubbing(bool bInIsScrubbing);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainDurationRange(const FVector2D& InGrainDurationRangeSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayheadTime() const;
    
};

