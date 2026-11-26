#include "PCGGetActorPropertySettings.h"

UPCGGetActorPropertySettings::UPCGGetActorPropertySettings() {
    this->bSelectComponent = false;
    this->ComponentClass = NULL;
    this->bProcessAllComponents = false;
    this->bOutputComponentReference = false;
    this->bForceObjectAndStructExtraction = false;
    this->bSanitizeOutputAttributeName = true;
    this->bOutputActorReference = false;
    this->bAlwaysRequeryActors = true;
}


