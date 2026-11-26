#include "MVVMViewClass.h"

UMVVMViewClass::UMVVMViewClass() {
    this->OptionalSources = 0;
    this->bInitializeSourcesOnConstruct = true;
    this->bInitializeBindingsOnConstruct = true;
    this->bInitializeEventsOnConstruct = true;
    this->bListenToViewModelCollectionChanged = false;
    this->bCreateViewWithoutBindings = false;
}


