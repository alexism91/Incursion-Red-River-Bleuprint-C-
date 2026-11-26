#include "IRRCurveEditorWidget.h"

UIRRCurveEditorWidget::UIRRCurveEditorWidget() {
    this->bReadOnly = false;
    this->GraphHeight = 180.00f;
    this->bUseFixedInputRange = false;
    this->InputMin = 0.00f;
    this->InputMax = 1.00f;
    this->bUseFixedOutputRange = false;
    this->OutputMin = 0.00f;
    this->OutputMax = 1.00f;
}

void UIRRCurveEditorWidget::SetCurve(const FRuntimeFloatCurve& InCurve) {
}

void UIRRCurveEditorWidget::GetCurve(FRuntimeFloatCurve& OutCurve) const {
}

float UIRRCurveEditorWidget::EvaluateCurve(float Time) const {
    return 0.0f;
}


