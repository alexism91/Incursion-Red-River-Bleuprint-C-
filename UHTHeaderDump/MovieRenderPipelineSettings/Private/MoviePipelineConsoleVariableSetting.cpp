#include "MoviePipelineConsoleVariableSetting.h"

UMoviePipelineConsoleVariableSetting::UMoviePipelineConsoleVariableSetting() {
}

bool UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState(const FString& Name, const bool bIsEnabled) {
    return false;
}

bool UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable(const FString& Name, const bool bRemoveAllInstances) {
    return false;
}

TArray<FMoviePipelineConsoleVariableEntry> UMoviePipelineConsoleVariableSetting::GetConsoleVariables() const {
    return TArray<FMoviePipelineConsoleVariableEntry>();
}

bool UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable(const FString& Name, const float Value) {
    return false;
}

bool UMoviePipelineConsoleVariableSetting::AddConsoleVariable(const FString& Name, const float Value) {
    return false;
}


