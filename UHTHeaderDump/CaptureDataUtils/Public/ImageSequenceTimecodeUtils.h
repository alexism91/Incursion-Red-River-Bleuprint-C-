#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
#include "ImageSequenceTimecodeUtils.generated.h"

class UImgMediaSource;

UCLASS(Blueprintable)
class CAPTUREDATAUTILS_API UImageSequenceTimecodeUtils : public UObject {
    GENERATED_BODY()
public:
    UImageSequenceTimecodeUtils();

    UFUNCTION(BlueprintCallable)
    static void SetTimecodeInfoString(const FString& InTimecode, const FString& InFrameRate, UImgMediaSource* InImageSequence);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimecodeInfo(const FTimecode& InTimecode, const FFrameRate& InFrameRate, UImgMediaSource* InImageSequence);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTimecodeString(UImgMediaSource* InImageSequence);
    
    UFUNCTION(BlueprintCallable)
    static FTimecode GetTimecode(UImgMediaSource* InImageSequence);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFrameRateString(UImgMediaSource* InImageSequence);
    
    UFUNCTION(BlueprintCallable)
    static FFrameRate GetFrameRate(UImgMediaSource* InImageSequence);
    
};

