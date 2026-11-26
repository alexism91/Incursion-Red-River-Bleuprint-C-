#include "IRRAIDifficultySetupWidget.h"

UIRRAIDifficultySetupWidget::UIRRAIDifficultySetupWidget() {
    this->Stops.AddDefaulted(4);
    this->DefaultStop = 1;
    this->bOpenOnCurrentDifficulty = true;
    this->ModNotice = FText::FromString(TEXT("Enemy behaviour runs on <Strong>REDFOR AI</>, developed by <Strong>Solarint</>, creator of the <Strong>SAIN AI</> mod."));
    this->DifficultySlider = NULL;
    this->DifficultyNameText = NULL;
    this->DescriptionText = NULL;
    this->ModNoticeText = NULL;
    this->StopLabels = NULL;
}

bool UIRRAIDifficultySetupWidget::ShouldShowDifficultySetup() {
    return false;
}

void UIRRAIDifficultySetupWidget::SetSelectedStop(int32 StopIndex) {
}

void UIRRAIDifficultySetupWidget::MarkDifficultyConfirmed() {
}


void UIRRAIDifficultySetupWidget::HandleStopLabelClicked(UIRRBaseButtonWidget* Button) {
}

void UIRRAIDifficultySetupWidget::HandleSliderChanged(float Value) {
}

FName UIRRAIDifficultySetupWidget::GetSelectedVariantId() const {
    return NAME_None;
}

int32 UIRRAIDifficultySetupWidget::GetSelectedStop() const {
    return 0;
}


