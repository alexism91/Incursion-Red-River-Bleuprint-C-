#include "PCGComputeKernel.h"

UPCGComputeKernel::UPCGComputeKernel() {
    this->KernelIndex = -1;
    this->bLogDataDescriptions = false;
    this->bInitialized = false;
    this->bHasStaticValidationErrors = false;
}


