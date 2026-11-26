#include "MoviePipelineConfigBase.h"
#include "Templates/SubclassOf.h"

UMoviePipelineConfigBase::UMoviePipelineConfigBase() {
    this->DisplayName = TEXT("Unsaved Config");
}

void UMoviePipelineConfigBase::SetConfigOrigin(UMoviePipelineConfigBase* InConfig) {
}

void UMoviePipelineConfigBase::RemoveSetting(UMoviePipelineSetting* InSetting) {
}

TArray<UMoviePipelineSetting*> UMoviePipelineConfigBase::GetUserSettings() const {
    return TArray<UMoviePipelineSetting*>();
}

UMoviePipelineConfigBase* UMoviePipelineConfigBase::GetConfigOrigin() const {
    return NULL;
}

TArray<UMoviePipelineSetting*> UMoviePipelineConfigBase::FindSettingsByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch) const {
    return TArray<UMoviePipelineSetting*>();
}

UMoviePipelineSetting* UMoviePipelineConfigBase::FindSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch) const {
    return NULL;
}

UMoviePipelineSetting* UMoviePipelineConfigBase::FindOrAddSettingByClass(TSubclassOf<UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch) {
    return NULL;
}

void UMoviePipelineConfigBase::CopyFrom(UMoviePipelineConfigBase* InConfig) {
}


