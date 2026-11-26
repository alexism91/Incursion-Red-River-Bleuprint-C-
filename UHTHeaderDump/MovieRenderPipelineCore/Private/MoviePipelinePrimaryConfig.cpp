#include "MoviePipelinePrimaryConfig.h"
#include "MoviePipelineOutputSetting.h"

UMoviePipelinePrimaryConfig::UMoviePipelinePrimaryConfig() {
    this->OutputSetting = CreateDefaultSubobject<UMoviePipelineOutputSetting>(TEXT("DefaultOutputSetting"));
}

void UMoviePipelinePrimaryConfig::InitializeTransientSettings() {
}

TArray<UMoviePipelineSetting*> UMoviePipelinePrimaryConfig::GetTransientSettings() const {
    return TArray<UMoviePipelineSetting*>();
}

FFrameRate UMoviePipelinePrimaryConfig::GetEffectiveFrameRate(const ULevelSequence* InSequence) const {
    return FFrameRate{};
}

TArray<UMoviePipelineSetting*> UMoviePipelinePrimaryConfig::GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings) const {
    return TArray<UMoviePipelineSetting*>();
}


