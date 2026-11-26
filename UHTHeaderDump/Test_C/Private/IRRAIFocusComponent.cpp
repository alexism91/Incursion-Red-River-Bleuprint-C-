#include "IRRAIFocusComponent.h"

UIRRAIFocusComponent::UIRRAIFocusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThreatGlanceUntilTime = 0.00f;
    this->LastFocusLevel = EIRRFocusLevel::None;
}


