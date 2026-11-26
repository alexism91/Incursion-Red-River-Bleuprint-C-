#include "IRROpticDisplayComponent.h"

UIRROpticDisplayComponent::UIRROpticDisplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayTarget = NULL;
    this->DisplayWidgetClass = NULL;
    this->MinRedrawInterval = 0.05f;
    this->bRedrawEveryTick = false;
    this->MaxTextureWaitTime = 5.00f;
    this->DisplayWidget = NULL;
}

void UIRROpticDisplayComponent::ShowDisplay() {
}

void UIRROpticDisplayComponent::MarkDisplayDirty() {
}

bool UIRROpticDisplayComponent::IsDisplayVisible() const {
    return false;
}

void UIRROpticDisplayComponent::HideDisplay() {
}

UIRROpticDisplayWidget* UIRROpticDisplayComponent::GetDisplayWidget() const {
    return NULL;
}

UTextureRenderTarget2D* UIRROpticDisplayComponent::GetDisplayTarget() const {
    return NULL;
}


