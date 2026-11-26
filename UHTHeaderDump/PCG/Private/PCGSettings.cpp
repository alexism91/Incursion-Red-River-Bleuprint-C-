#include "PCGSettings.h"

UPCGSettings::UPCGSettings() {
    this->Seed = -1017473487;
    this->bExecutionDependencyRequired = false;
    this->bUseSeed = false;
    this->bExecuteOnGPU = false;
    this->bDumpCookedHLSL = false;
    this->bDumpDataDescriptions = false;
    this->bPrintShaderDebugValues = false;
    this->DebugBufferSize = 16;
}

bool UPCGSettings::UseSeed() const {
    return false;
}

int32 UPCGSettings::BP_GetTypeUnionOfIncidentEdges(const FName& PinLabel) const {
    return 0;
}


