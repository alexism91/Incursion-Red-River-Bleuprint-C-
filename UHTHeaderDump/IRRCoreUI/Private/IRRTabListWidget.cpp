#include "IRRTabListWidget.h"

UIRRTabListWidget::UIRRTabListWidget() {
    this->TabSwitcher = NULL;
    this->Index = 0;
}

void UIRRTabListWidget::SetupTabs_Implementation() {
}

bool UIRRTabListWidget::SelectTabByIndex(int32 TabIndex, bool bForce) {
    return false;
}

bool UIRRTabListWidget::SelectTabByID(FName TabNameId, bool bForce) {
    return false;
}

void UIRRTabListWidget::Reset_Implementation() {
}

bool UIRRTabListWidget::RemoveTab(FName TabNameId) {
    return false;
}

void UIRRTabListWidget::RemoveAllTabs() {
}

bool UIRRTabListWidget::RegisterTab(FIRRTabDescriptor TabInfo, const int32 TabIndex) {
    return false;
}

void UIRRTabListWidget::HandleTabRemoval_Implementation(FName TabNameId, UIRRBaseButtonWidget* TabButton) {
}

void UIRRTabListWidget::HandleTabCreation_Implementation(FName TabNameId, UIRRBaseButtonWidget* TabButton) {
}

void UIRRTabListWidget::HandleTabButtonSelected_Implementation(UIRRBaseButtonWidget* ButtonRef) {
}

void UIRRTabListWidget::HandlePreviousTabInputAction() {
}

void UIRRTabListWidget::HandleNextTabInputAction() {
}

int32 UIRRTabListWidget::GetTabCount() const {
    return 0;
}

UIRRBaseButtonWidget* UIRRTabListWidget::GetTabButtonBaseByIndex(int32 TabIndex) const {
    return NULL;
}

UIRRBaseButtonWidget* UIRRTabListWidget::GetTabButtonBaseByID(FName TabNameId) const {
    return NULL;
}

bool UIRRTabListWidget::GetRegisteredTabInfoByID(const FName TabNameId, FIRRRegisteredTabInfo& OutTabInfo) {
    return false;
}

bool UIRRTabListWidget::GetPreregisteredTabInfoByID(const FName TabNameId, FIRRTabDescriptor& OutTabInfo) {
    return false;
}

int32 UIRRTabListWidget::GetActiveTabIndex() const {
    return 0;
}

FName UIRRTabListWidget::GetActiveTabID() const {
    return NAME_None;
}

int32 UIRRTabListWidget::FindTabButtonIndex(UIRRBaseButtonWidget* ButtonToFind) const {
    return 0;
}


