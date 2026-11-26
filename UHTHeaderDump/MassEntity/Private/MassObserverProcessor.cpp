#include "MassObserverProcessor.h"

UMassObserverProcessor::UMassObserverProcessor() {
    this->bAutoRegisterWithProcessingPhases = false;
    this->bAutoRegisterWithObserverRegistry = true;
    this->ObservedType = NULL;
}


