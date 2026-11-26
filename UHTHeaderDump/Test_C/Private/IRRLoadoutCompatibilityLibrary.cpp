#include "IRRLoadoutCompatibilityLibrary.h"

UIRRLoadoutCompatibilityLibrary::UIRRLoadoutCompatibilityLibrary() {
}

void UIRRLoadoutCompatibilityLibrary::ResolveItemDefinitionsByTag(FGameplayTag ItemTag, TArray<UIRRItemDefinition*>& OutDefinitions) {
}

UIRRItemDefinition* UIRRLoadoutCompatibilityLibrary::ResolveItemDefinitionByTag(FGameplayTag ItemTag) {
    return NULL;
}

bool UIRRLoadoutCompatibilityLibrary::IsAttachmentCompatible(UIRRItemDefinition* ParentDefinition, FGameplayTag AttachmentIdentifier) {
    return false;
}

void UIRRLoadoutCompatibilityLibrary::GetCompatibleAttachments(UIRRItemDefinition* ParentDefinition, FGameplayTag CategoryTag, TArray<UIRRItemDefinition*>& OutDefinitions) {
}

int32 UIRRLoadoutCompatibilityLibrary::FindEquipSlotForAttachment(UIRRItemDefinition* ParentDefinition, FGameplayTag AttachmentIdentifier) {
    return 0;
}


