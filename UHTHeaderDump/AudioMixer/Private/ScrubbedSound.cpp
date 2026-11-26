#include "ScrubbedSound.h"

UScrubbedSound::UScrubbedSound() {
    this->FrequenciesToAnalyze.AddDefaulted(4);
    this->SoundWaveToScrub = NULL;
}

void UScrubbedSound::SetSoundWave(USoundWave* InSoundWave) {
}

void UScrubbedSound::SetPlayheadTime(float InPlayheadTimeSeconds) {
}

void UScrubbedSound::SetIsScrubbingWhileStationary(bool bInScrubWhileStationary) {
}

void UScrubbedSound::SetIsScrubbing(bool bInIsScrubbing) {
}

void UScrubbedSound::SetGrainDurationRange(const FVector2D& InGrainDurationRangeSeconds) {
}

float UScrubbedSound::GetPlayheadTime() const {
    return 0.0f;
}


