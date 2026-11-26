#include "IRRMarkerWidget.h"

UIRRMarkerWidget::UIRRMarkerWidget() {
    this->MarkerComponent = NULL;
    this->MarkerToolTip = NULL;
    this->MarkerBackgroundSizeBox = NULL;
    this->MarkerBackgroundImage = NULL;
    this->MarkerIconShadowBackdrop = NULL;
    this->MarkerIconSizeBox = NULL;
    this->MarkerIconImage = NULL;
}

bool UIRRMarkerWidget::IsStatic() const {
    return false;
}

void UIRRMarkerWidget::DeactivateMarker() {
}

void UIRRMarkerWidget::ApplyMarkerSettings(const FIRRMarkerSettings& Settings) {
}

void UIRRMarkerWidget::ActivateMarker() {
}


