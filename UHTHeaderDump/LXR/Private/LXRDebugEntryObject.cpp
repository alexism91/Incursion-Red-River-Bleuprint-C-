#include "LXRDebugEntryObject.h"

ULXRDebugEntryObject::ULXRDebugEntryObject() {
    this->DetectionComponent = NULL;
    this->LightSenseComponent = NULL;
    this->FluxLightDetectorComponent = NULL;
}

AActor* ULXRDebugEntryObject::GetMyDebugActor() const {
    return NULL;
}


