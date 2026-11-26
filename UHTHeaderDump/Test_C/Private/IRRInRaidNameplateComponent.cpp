#include "IRRInRaidNameplateComponent.h"

UIRRInRaidNameplateComponent::UIRRInRaidNameplateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NameplateWidgetClass = NULL;
    this->WidgetComponent = NULL;
}

void UIRRInRaidNameplateComponent::ToggleNameplate(bool bShow) {
}

bool UIRRInRaidNameplateComponent::HasNameplate() const {
    return false;
}

UWidgetComponent* UIRRInRaidNameplateComponent::GetWidgetComponent() const {
    return NULL;
}

UUserWidget* UIRRInRaidNameplateComponent::GetNameplateWidget() const {
    return NULL;
}


