#include "FlashlightComponent.h"

UFlashlightComponent::UFlashlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightSource = NULL;
}

ULightComponent* UFlashlightComponent::GetLightSource() const {
    return NULL;
}


