#include "InputMappingContext.h"

UInputMappingContext::UInputMappingContext() {
    this->InputModeFilterOptions = EMappingContextInputModeFilterOptions::UseProjectDefaultQuery;
    this->RegistrationTrackingMode = EMappingContextRegistrationTrackingMode::Untracked;
}

void UInputMappingContext::UnmapKey(const UInputAction* Action, FKey Key) {
}

void UInputMappingContext::UnmapAllKeysFromAction(const UInputAction* Action) {
}

void UInputMappingContext::UnmapAll() {
}

bool UInputMappingContext::ShouldShowInputModeQuery() {
    return false;
}

FEnhancedActionKeyMapping UInputMappingContext::MapKey(const UInputAction* Action, FKey ToKey) {
    return FEnhancedActionKeyMapping{};
}


