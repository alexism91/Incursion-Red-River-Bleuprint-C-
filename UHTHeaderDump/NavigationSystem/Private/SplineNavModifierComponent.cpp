#include "SplineNavModifierComponent.h"

USplineNavModifierComponent::USplineNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateNavDataOnSplineChange = true;
    this->StrokeWidth = 500.00f;
    this->StrokeHeight = 500.00f;
    this->SubdivisionLOD = ESubdivisionLOD::Medium;
}

void USplineNavModifierComponent::UpdateNavigationWithComponentData() {
}


