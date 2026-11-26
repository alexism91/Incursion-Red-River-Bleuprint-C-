#include "NiagaraDataInterfaceMemoryBuffer.h"

UNiagaraDataInterfaceMemoryBuffer::UNiagaraDataInterfaceMemoryBuffer() {
    this->DefaultNumElements = 0;
    this->GpuSyncMode = ENiagaraGpuSyncMode::SyncCpuToGpu;
}


