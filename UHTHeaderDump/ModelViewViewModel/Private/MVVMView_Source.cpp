#include "MVVMView_Source.h"

FMVVMView_Source::FMVVMView_Source() {
    this->Source = NULL;
    this->RegisteredCount = 0;
    this->bSourceInitialized = false;
    this->bBindingsInitialized = false;
    this->bSetManually = false;
    this->bAssignedToUserWidgetProperty = false;
}

