#include "IRROpticDisplayWidget.h"

UIRROpticDisplayWidget::UIRROpticDisplayWidget() {
    this->ReadoutDigits = 4;
    this->RangeText = NULL;
    this->HorizontalText = NULL;
    this->InclinationText = NULL;
    this->ModeText = NULL;
    this->OpticActor = NULL;
}

void UIRROpticDisplayWidget::SetRangefinderReading(const FIRRRangefinderReading& InReading) {
}

void UIRROpticDisplayWidget::SetOpticActor(AActor* InOpticActor) {
}

FIRRRangefinderReading UIRROpticDisplayWidget::GetRangefinderReading() const {
    return FIRRRangefinderReading{};
}

FText UIRROpticDisplayWidget::FormatRangeText(float Value, bool bHasReturn, int32 DashCount) {
    return FText::GetEmpty();
}

void UIRROpticDisplayWidget::ApplyReading_Implementation(const FIRRRangefinderReading& InReading, AActor* InOpticActor) {
}


