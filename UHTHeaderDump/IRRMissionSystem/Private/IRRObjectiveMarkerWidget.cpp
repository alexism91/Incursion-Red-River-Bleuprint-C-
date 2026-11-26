#include "IRRObjectiveMarkerWidget.h"

UIRRObjectiveMarkerWidget::UIRRObjectiveMarkerWidget() {
    this->PresentationRefreshInterval = 0.25f;
    this->CachedDisplayState = EIRRObjectiveWorldState::Active;
    this->bCachedVisible = true;
}

void UIRRObjectiveMarkerWidget::RefreshObjectiveMarkerPresentation() {
}

void UIRRObjectiveMarkerWidget::ApplyObjectiveMarkerPresentation_Implementation(const FIRRMissionMarkerPresentation& Presentation) {
}


