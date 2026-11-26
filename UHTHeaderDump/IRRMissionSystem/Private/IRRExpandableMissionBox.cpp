#include "IRRExpandableMissionBox.h"

UIRRExpandableMissionBox::UIRRExpandableMissionBox() {
    this->ToggleButton = NULL;
    this->ExpandButton = NULL;
    this->CollapseButton = NULL;
    this->ContentSizeBox = NULL;
    this->ExpandedWidth = 500.00f;
    this->ExpandDuration = 0.25f;
    this->bStartExpanded = false;
    this->bUseStateIcons = false;
    this->bHideUnavailableButton = true;
    this->bIsExpanded = false;
}

void UIRRExpandableMissionBox::ToggleExpansion() {
}

void UIRRExpandableMissionBox::SetExpanded(bool bInExpanded, bool bInstant) {
}



bool UIRRExpandableMissionBox::IsExpanded() const {
    return false;
}

void UIRRExpandableMissionBox::HandleToggleButtonClicked(UIRRBaseButtonWidget* ButtonRef) {
}

void UIRRExpandableMissionBox::HandleExpandButtonClicked(UIRRBaseButtonWidget* ButtonRef) {
}

void UIRRExpandableMissionBox::HandleCollapseButtonClicked(UIRRBaseButtonWidget* ButtonRef) {
}


