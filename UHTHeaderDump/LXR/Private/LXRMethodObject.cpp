#include "LXRMethodObject.h"

ULXRMethodObject::ULXRMethodObject() {
    this->Owner = NULL;
    this->SourceComponent = NULL;
    this->SenseComponent = NULL;
    this->SilhouetteDetectionComponent = NULL;
}

ULXRSourceComponent* ULXRMethodObject::GetSourceComponent() const {
    return NULL;
}

ULXRSilhouetteDetectionComponent* ULXRMethodObject::GetSilhouetteComponent() const {
    return NULL;
}

AActor* ULXRMethodObject::GetOwner() const {
    return NULL;
}

ULXRLightSenseComponent* ULXRMethodObject::GetLightSenseComponent() const {
    return NULL;
}


