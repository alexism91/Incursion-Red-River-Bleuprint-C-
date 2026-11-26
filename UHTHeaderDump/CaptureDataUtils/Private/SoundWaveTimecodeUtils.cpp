#include "SoundWaveTimecodeUtils.h"

USoundWaveTimecodeUtils::USoundWaveTimecodeUtils() {
}

void USoundWaveTimecodeUtils::SetTimecodeInfo(const FTimecode& InTimecode, const FFrameRate& InFrameRate, USoundWave* OutSoundWave) {
}

FTimecode USoundWaveTimecodeUtils::GetTimecode(const USoundWave* InSoundWave) {
    return FTimecode{};
}

FFrameRate USoundWaveTimecodeUtils::GetFrameRate(const USoundWave* InSoundWave) {
    return FFrameRate{};
}


