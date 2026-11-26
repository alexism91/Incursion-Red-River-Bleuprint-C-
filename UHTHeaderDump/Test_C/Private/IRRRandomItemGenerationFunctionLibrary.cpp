#include "IRRRandomItemGenerationFunctionLibrary.h"

UIRRRandomItemGenerationFunctionLibrary::UIRRRandomItemGenerationFunctionLibrary() {
}

FIRRVendorDefaultItem UIRRRandomItemGenerationFunctionLibrary::GetRandomVendorItemWithParameters(FIRRRandomItemParameters& RandomParameters, FGameplayTagContainer CompatibleItems, FGameplayTagContainer AddedItems, bool bAttachment) {
    return FIRRVendorDefaultItem{};
}

bool UIRRRandomItemGenerationFunctionLibrary::GetRandomItemWithParameters(FIRRRandomItemParameters& RandomParameters, FGameplayTagContainer AddedItems, FDefaultItem& OutItem) {
    return false;
}

void UIRRRandomItemGenerationFunctionLibrary::GenerateRandomItems(FDefaultItemsContainer& InDefaultItemsContainer) {
}

void UIRRRandomItemGenerationFunctionLibrary::GenerateRandomChildAttachmentsWithParameters(FIRRRandomItemParameters& RandomParameters, UIRRItemDefinition* ParentItemDefinition, int32 ParentIndex, int32 AttachmentDepth, TArray<FGameplayTagContainer>& RequiredAttachments, TArray<FDefaultAttachment>& InAttachments) {
}

TArray<FDefaultAttachment> UIRRRandomItemGenerationFunctionLibrary::GenerateRandomAttachmentsWithParameters(FIRRRandomItemParameters& RandomParameters, UIRRItemDefinition* ParentItemDefinition) {
    return TArray<FDefaultAttachment>();
}


