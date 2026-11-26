#include "SenseFoliageInstanceStaticMeshComponent.h"

USenseFoliageInstanceStaticMeshComponent::USenseFoliageInstanceStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Transparency = 0.50f;
}

float USenseFoliageInstanceStaticMeshComponent::GetTransparency_Implementation() {
    return 0.0f;
}


