#include "IRRInventorySubsystem.h"

UIRRInventorySubsystem::UIRRInventorySubsystem() {
    this->ImportSettings = NULL;
    this->EnhancedUISettings = NULL;
    this->VendorSettings = NULL;
    this->bImportSettingsLoadInProgress = false;
    this->bEnhancedUISettingsLoadInProgress = false;
    this->bVendorSettingsLoadInProgress = false;
    this->SearchItemWidget = NULL;
}

bool UIRRInventorySubsystem::ToggleItemSelected(UInventoryComponent* OwnerComp, const FContainerItem& Item) {
    return false;
}

void UIRRInventorySubsystem::StopSearching(bool bClearQueue) {
}

void UIRRInventorySubsystem::StartSearching() {
}

void UIRRInventorySubsystem::SetItemSelectionSource(UObject* Source) {
}

void UIRRInventorySubsystem::SetItemEligibilitySource(UObject* Source) {
}

void UIRRInventorySubsystem::ProcessSearchQueue() {
}

void UIRRInventorySubsystem::PlayQuickActionAudio(const FContainerItem& Item, bool bEquip, bool bSuccess) {
}

void UIRRInventorySubsystem::NotifyItemWidgetRemoved(UItemWidget* ItemWidget) {
}

void UIRRInventorySubsystem::NotifyItemSelectionChanged() {
}

void UIRRInventorySubsystem::NotifyItemEligibilityChanged() {
}

bool UIRRInventorySubsystem::LoadVendorSettingsAsync() {
    return false;
}

bool UIRRInventorySubsystem::LoadImportSettingsAsync() {
    return false;
}

bool UIRRInventorySubsystem::LoadEnhancedUISettingsAsync() {
    return false;
}

bool UIRRInventorySubsystem::IsItemSelected(UInventoryComponent* OwnerComp, const FContainerItem& Item) const {
    return false;
}

bool UIRRInventorySubsystem::IsItemEligible(UInventoryComponent* OwnerComp, const FContainerItem& Item) const {
    return false;
}

bool UIRRInventorySubsystem::HasItemSelectionSource() const {
    return false;
}

bool UIRRInventorySubsystem::HasItemEligibilitySource() const {
    return false;
}

void UIRRInventorySubsystem::ClearItemSelectionSource(UObject* Source) {
}

void UIRRInventorySubsystem::ClearItemEligibilitySource(UObject* Source) {
}

void UIRRInventorySubsystem::BroadcastItemHovered(const FContainerItem& HoveredItem, bool bStart) {
}

void UIRRInventorySubsystem::BroadcastItemDrag(const FContainerItem& DraggedItem, bool bStart) {
}

void UIRRInventorySubsystem::AddItemToSearchQueue(UItemWidget* ItemWidget) {
}

void UIRRInventorySubsystem::AddContainerToSearchQueue(UContainerElementWidget* ContainerElementWidget) {
}


