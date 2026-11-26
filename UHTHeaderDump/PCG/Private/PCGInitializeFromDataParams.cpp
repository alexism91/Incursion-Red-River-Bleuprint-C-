#include "PCGInitializeFromDataParams.h"

FPCGInitializeFromDataParams::FPCGInitializeFromDataParams() {
    this->Source = NULL;
    this->SourceOverride = NULL;
    this->bInheritMetadata = false;
    this->bInheritAttributes = false;
    this->bInheritSpatialData = false;
}

