#include "InventoryEnhancedUISettings.h"

UInventoryEnhancedUISettings::UInventoryEnhancedUISettings() {
    this->ItemBorderTexture = NULL;
    this->SearchTimeByItem = 0.50f;
    this->SearchTimeCurveByItemRarityTier = NULL;
    this->SearchTimeCurveByItemSize = NULL;
    this->QuickActionDeniedSound = NULL;
    this->SpatialBackgroundTexture = NULL;
    this->EquipToBackgroundTexture = NULL;
    this->EquipToHighlightTexture = NULL;
    this->bUseAutoSize = false;
    this->OffsetPerSlot = 25.00f;
    this->AdditionalOffset = 10.00f;
    this->SnapOffsetFactor = 5.00f;
    this->SnapFOVFactor = 5.00f;
    this->WindowScreenMargin = 16.00f;
    this->WindowItemGap = 8.00f;
    this->WindowLimit = 5;
    this->InspectBackgroundImage = NULL;
    this->ZoomFactor = 2.50f;
    this->ZoomMax = 40.00f;
    this->ZoomMin = 2.00f;
    this->RichTextStyle = NULL;
}

void UInventoryEnhancedUISettings::SortItemStats(TArray<FBaseStatItem>& ItemStats) {
}

void UInventoryEnhancedUISettings::SortItemContexts(TArray<UItemContext*>& ItemContexts) {
}

FSlateBrush UInventoryEnhancedUISettings::GetItemBackgroundBrush(FGameplayTag ItemIdentifier) const {
    return FSlateBrush{};
}


