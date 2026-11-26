#include "ContextCanvasWidget.h"

UContextCanvasWidget::UContextCanvasWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ContextMenuClass = NULL;
    this->MenuScreenMargin = 8.00f;
    this->CursorOverlap = 10.00f;
    this->OpenGraceSeconds = 0.10f;
    this->MenuCanvas = NULL;
    this->ContextMenuRef = NULL;
}

void UContextCanvasWidget::RemoveCurrentContext(const FPointerEvent& Input) {
}

FVector2D UContextCanvasWidget::ComputeContextMenuPosition(const FVector2D& CursorPosition, const FVector2D& MenuSize, const FVector2D& CanvasSize, float ScreenMargin, float OverlapDistance) {
    return FVector2D{};
}

void UContextCanvasWidget::CloseContextMenu() {
}


