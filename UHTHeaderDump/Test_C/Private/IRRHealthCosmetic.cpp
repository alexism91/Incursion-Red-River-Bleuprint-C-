#include "IRRHealthCosmetic.h"

UIRRHealthCosmetic::UIRRHealthCosmetic() {
    this->Audience = EIRRHealthCosmeticAudience::Everyone;
    this->Component = NULL;
}




bool UIRRHealthCosmetic::IsLocalFirstPersonViewer() const {
    return false;
}

bool UIRRHealthCosmetic::IsCosmeticActive() const {
    return false;
}

float UIRRHealthCosmetic::GetOwnerSpeed2D() const {
    return 0.0f;
}

ACharacter* UIRRHealthCosmetic::GetOwnerCharacter() const {
    return NULL;
}

float UIRRHealthCosmetic::GetIntensity() const {
    return 0.0f;
}


