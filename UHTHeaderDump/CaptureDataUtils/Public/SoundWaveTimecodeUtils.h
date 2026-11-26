#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
#include "SoundWaveTimecodeUtils.generated.h"

class USoundWave;

UCLASS(Blueprintable)
class CAPTUREDATAUTILS_API USoundWaveTimecodeUtils : public UObject {
    GENERATED_BODY()
public:
    USoundWaveTimecodeUtils();

    UFUNCTION(BlueprintCallable)
    static void SetTimecodeInfo(const FTimecode& InTimecode, const FFrameRate& InFrameRate, USoundWave* OutSoundWave);
    
    UFUNCTION(BlueprintCallable)
    static FTimecode GetTimecode(const USoundWave* InSoundWave);
    
    UFUNCTION(BlueprintCallable)
    static FFrameRate GetFrameRate(const USoundWave* InSoundWave);
    
};

