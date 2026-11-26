#include "IRRBaseObject.h"

UIRRBaseObject::UIRRBaseObject() {
    this->bForceResetToClassDefaults = false;
}


AActor* UIRRBaseObject::GetOwningActor() const {
    return NULL;
}

void UIRRBaseObject::DestroyObject() {
}


