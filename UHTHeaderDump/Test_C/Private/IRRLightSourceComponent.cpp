#include "IRRLightSourceComponent.h"

UIRRLightSourceComponent::UIRRLightSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceChannel = ECC_Visibility;
    this->bEnableLightSense = true;
}


