#include "ImageSequenceTimecodeUtils.h"

UImageSequenceTimecodeUtils::UImageSequenceTimecodeUtils() {
}

void UImageSequenceTimecodeUtils::SetTimecodeInfoString(const FString& InTimecode, const FString& InFrameRate, UImgMediaSource* InImageSequence) {
}

void UImageSequenceTimecodeUtils::SetTimecodeInfo(const FTimecode& InTimecode, const FFrameRate& InFrameRate, UImgMediaSource* InImageSequence) {
}

FString UImageSequenceTimecodeUtils::GetTimecodeString(UImgMediaSource* InImageSequence) {
    return TEXT("");
}

FTimecode UImageSequenceTimecodeUtils::GetTimecode(UImgMediaSource* InImageSequence) {
    return FTimecode{};
}

FString UImageSequenceTimecodeUtils::GetFrameRateString(UImgMediaSource* InImageSequence) {
    return TEXT("");
}

FFrameRate UImageSequenceTimecodeUtils::GetFrameRate(UImgMediaSource* InImageSequence) {
    return FFrameRate{};
}


