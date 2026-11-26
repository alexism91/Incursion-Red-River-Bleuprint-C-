#include "NDIDataChannelCompiledData.h"

FNDIDataChannelCompiledData::FNDIDataChannelCompiledData() {
    this->TotalParams = 0;
    this->bUsedByCPU = false;
    this->bUsedByGPU = false;
    this->bNeedsSpawnDataTable = false;
    this->bSpawnsParticles = false;
    this->bCallsWrite = false;
}

