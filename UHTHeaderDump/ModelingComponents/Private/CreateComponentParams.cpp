#include "CreateComponentParams.h"

FCreateComponentParams::FCreateComponentParams() {
    this->HostActor = NULL;
    this->ComponentClass = NULL;
    this->bSetAsRoot = false;
    this->bTransact = false;
}

