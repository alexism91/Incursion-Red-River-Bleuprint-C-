#include "NetDriverReplicationSystemConfig.h"

FNetDriverReplicationSystemConfig::FNetDriverReplicationSystemConfig() {
    this->MaxReplicatedObjectCount = 0;
    this->InitialNetObjectListCount = 0;
    this->NetObjectListGrowCount = 0;
    this->PreAllocatedMemoryBuffersObjectCount = 0;
    this->MaxReplicationWriterObjectCount = 0;
    this->MaxDeltaCompressedObjectCount = 0;
    this->MaxNetObjectGroupCount = 0;
}

