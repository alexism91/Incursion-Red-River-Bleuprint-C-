#include "KronosNameplateComponent.h"

UKronosNameplateComponent::UKronosNameplateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NameplateWidgetClass = NULL;
    this->bCreateForLocalPlayer = true;
    this->WidgetComponent = NULL;
}

void UKronosNameplateComponent::SetNameplateOffset(FVector InOffset) {
}

void UKronosNameplateComponent::SetNameplateDrawSize(FVector2D InDrawSize) {
}

bool UKronosNameplateComponent::HasNameplate() const {
    return false;
}

UWidgetComponent* UKronosNameplateComponent::GetWidgetComponent() const {
    return NULL;
}

UUserWidget* UKronosNameplateComponent::GetNameplateWidget() const {
    return NULL;
}


