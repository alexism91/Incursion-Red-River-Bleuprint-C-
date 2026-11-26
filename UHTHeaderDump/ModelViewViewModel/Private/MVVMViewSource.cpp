#include "MVVMViewSource.h"

FMVVMViewSource::FMVVMViewSource() {
    this->Source = NULL;
    this->RegisteredCount = 0;
    this->bCreatedSource = false;
    this->bBindingsInitialized = false;
    this->bSetManually = false;
    this->bAssignedToUserWidgetProperty = false;
}

