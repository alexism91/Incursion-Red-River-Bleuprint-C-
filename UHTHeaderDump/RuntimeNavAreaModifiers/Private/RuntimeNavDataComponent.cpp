#include "RuntimeNavDataComponent.h"

URuntimeNavDataComponent::URuntimeNavDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LimitToSpecificAreaClass = NULL;
}

void URuntimeNavDataComponent::UpdateBoxBounds() {
}


