#include "ItemProperties.h"

FItemProperties::FItemProperties() {
    this->ContainerWidget = NULL;
    this->bAddToInspectWidget = false;
    this->DefaultContext = NULL;
    this->ActionContext = NULL;
    this->InternalMag = false;
    this->CanStack = false;
    this->MaxStack = 0;
    this->bQuestItem = false;
}

