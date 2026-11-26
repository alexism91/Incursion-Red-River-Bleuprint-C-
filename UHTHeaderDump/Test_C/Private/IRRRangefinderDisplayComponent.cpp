#include "IRRRangefinderDisplayComponent.h"

UIRRRangefinderDisplayComponent::UIRRRangefinderDisplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SampleInterval = 0.10f;
    this->bHoldLastReading = true;
}

FIRRRangefinderReading UIRRRangefinderDisplayComponent::GetReading() const {
    return FIRRRangefinderReading{};
}

void UIRRRangefinderDisplayComponent::ClearReading() {
}


