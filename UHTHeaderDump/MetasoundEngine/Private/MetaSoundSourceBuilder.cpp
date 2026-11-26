#include "MetaSoundSourceBuilder.h"

UMetaSoundSourceBuilder::UMetaSoundSourceBuilder() {
}

void UMetaSoundSourceBuilder::SetSampleRateOverride(int32 SampleRate) {
}

void UMetaSoundSourceBuilder::SetQuality(FName Quality) {
}

void UMetaSoundSourceBuilder::SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult) {
}

void UMetaSoundSourceBuilder::SetBlockRateOverride(float BlockRate) {
}

bool UMetaSoundSourceBuilder::GetLiveUpdatesEnabled() const {
    return false;
}

void UMetaSoundSourceBuilder::Audition(UObject* Parent, UAudioComponent* AudioComponent, FOnCreateAuditionGeneratorHandleDelegate OnCreateGenerator, bool bLiveUpdatesEnabled) {
}


