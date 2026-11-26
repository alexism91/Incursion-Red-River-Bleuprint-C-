#include "IRRBaseSettingBarWidget.h"

UIRRBaseSettingBarWidget::UIRRBaseSettingBarWidget() {
    this->RowIndexInSection = 0;
    this->RowCountInSection = 1;
    this->bModifiedFromDefault = false;
}

void UIRRBaseSettingBarWidget::RequestReset() {
}

bool UIRRBaseSettingBarWidget::IsOptionSelectable(FName OptionId) const {
    return false;
}

int32 UIRRBaseSettingBarWidget::GetOptionIndex(const FIRRSettingValue& Value) const {
    return 0;
}

void UIRRBaseSettingBarWidget::DisplaySettingValue_Implementation(const FIRRSettingValue& Value) {
}

void UIRRBaseSettingBarWidget::CommitSettingValue(const FIRRSettingValue& Value) {
}

void UIRRBaseSettingBarWidget::CommitOptionIndex(int32 OptionIndex) {
}

void UIRRBaseSettingBarWidget::CommitOptionId(FName OptionId) {
}

void UIRRBaseSettingBarWidget::CommitNumber(float Number) {
}

void UIRRBaseSettingBarWidget::CommitKey(int32 BindingIndex, FKey Key) {
}

void UIRRBaseSettingBarWidget::CommitColor(FLinearColor Color) {
}

void UIRRBaseSettingBarWidget::ApplySettingDefinition_Implementation(const FIRRSettingDefinition& Definition, int32 IndexInSection, int32 NumInSection) {
}

void UIRRBaseSettingBarWidget::ApplyModifiedState_Implementation(bool bModified) {
}

void UIRRBaseSettingBarWidget::ApplyEditState_Implementation(const FIRRSettingEditState& State) {
}


