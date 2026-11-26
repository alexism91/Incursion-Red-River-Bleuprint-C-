#include "TraceControlStatus.h"

FTraceControlStatus::FTraceControlStatus() {
    this->BytesSent = 0;
    this->BytesTraced = 0;
    this->MemoryUsed = 0;
    this->CacheAllocated = 0;
    this->CacheUsed = 0;
    this->CacheWaste = 0;
    this->bAreStatNamedEventsEnabled = false;
    this->bIsPaused = false;
    this->bIsTracing = false;
    this->TraceSystemStatus = 0;
}

