#include "InspectCanvasWidget.h"

UInspectCanvasWidget::UInspectCanvasWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InspectWindowClass = NULL;
    this->ContainerWindowClass = NULL;
    this->WindowCanvas = NULL;
    this->ActiveWindow = NULL;
}

FVector2D UInspectCanvasWidget::ComputeWindowPositionBesideItem(const FVector2D& ItemTopLeft, const FVector2D& ItemBottomRight, const FVector2D& WindowSize, const FVector2D& CanvasSize, float ScreenMargin, float ItemGap) {
    return FVector2D{};
}


