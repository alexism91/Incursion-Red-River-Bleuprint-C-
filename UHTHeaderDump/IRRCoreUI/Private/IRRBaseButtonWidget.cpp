#include "IRRBaseButtonWidget.h"

UIRRBaseButtonWidget::UIRRBaseButtonWidget() {
    this->Button = NULL;
    this->SizeBox = NULL;
    this->bIsSelectable = false;
    this->bIsSelected = false;
    this->bIsDisabled = false;
    this->bUseMinSize = true;
    this->MaxWidth = 400;
    this->MaxHeight = 70;
    this->MinWidth = 400;
    this->MinHeight = 70;
    this->AudioData = NULL;
    this->bUseOnHoverSound = true;
    this->bUseOnUnHoverSound = true;
    this->bUseOnClickSound = true;
    this->bOverrideOnHoverSound = false;
    this->OnHoverSound = NULL;
    this->bOverrideOnUnHoverSound = false;
    this->OnUnHoverSound = NULL;
    this->bOverrideOnClickSound = false;
    this->OnClickSound = NULL;
}

void UIRRBaseButtonWidget::SetText_Implementation(const FText& InText) {
}

void UIRRBaseButtonWidget::SetTabLabelInfo_Implementation(const FIRRTabDescriptor& TabLabelInfo) {
}

void UIRRBaseButtonWidget::SetSize(bool bInUseMinSize, int32 Width, int32 Height) {
}

void UIRRBaseButtonWidget::SetIsSelected(bool bInIsSelected, bool bManual) {
}

void UIRRBaseButtonWidget::SetIcon_Implementation(FSlateBrush InIcon) {
}

void UIRRBaseButtonWidget::OnUnhovered() {
}

void UIRRBaseButtonWidget::OnSelected() {
}

void UIRRBaseButtonWidget::OnHovered() {
}

void UIRRBaseButtonWidget::OnEnabled() {
}

void UIRRBaseButtonWidget::OnDisabled() {
}

void UIRRBaseButtonWidget::OnDeselected() {
}

void UIRRBaseButtonWidget::OnClicked() {
}








void UIRRBaseButtonWidget::ConstructFromStruct_Implementation(FIRRButtonConstructor InStruct) {
}


