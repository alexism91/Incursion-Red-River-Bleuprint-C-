#include "MovieGraphEvaluatedConfig.h"

UMovieGraphEvaluatedConfig::UMovieGraphEvaluatedConfig() {
}

TArray<UMovieGraphSettingNode*> UMovieGraphEvaluatedConfig::GetSettingsForBranch(UClass* InClass, const FName InBranchName, bool bIncludeCDOs, bool bExactMatch) const {
    return TArray<UMovieGraphSettingNode*>();
}

UMovieGraphSettingNode* UMovieGraphEvaluatedConfig::GetSettingForBranch(UClass* InClass, const FName InBranchName, bool bIncludeCDOs, bool bExactMatch) const {
    return NULL;
}

TArray<FName> UMovieGraphEvaluatedConfig::GetBranchNames() const {
    return TArray<FName>();
}


