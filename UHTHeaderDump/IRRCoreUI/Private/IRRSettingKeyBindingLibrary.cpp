#include "IRRSettingKeyBindingLibrary.h"

UIRRSettingKeyBindingLibrary::UIRRSettingKeyBindingLibrary() {
}

FText UIRRSettingKeyBindingLibrary::JoinConflictNames(const TArray<FIRRKeyBindingConflict>& Conflicts) {
    return FText::GetEmpty();
}

TArray<FText> UIRRSettingKeyBindingLibrary::GetConflictDisplayNames(const TArray<FIRRKeyBindingConflict>& Conflicts) {
    return TArray<FText>();
}

bool UIRRSettingKeyBindingLibrary::FindKeyBindingConflicts(const UObject* WorldContextObject, FKey Key, FName MappingName, int32 SlotIndex, const TArray<FName>& IgnoredMappingNames, TArray<FIRRKeyBindingConflict>& OutConflicts) {
    return false;
}

void UIRRSettingKeyBindingLibrary::ClearKeyBindingConflicts(const UObject* WorldContextObject, const TArray<FIRRKeyBindingConflict>& Conflicts) {
}


