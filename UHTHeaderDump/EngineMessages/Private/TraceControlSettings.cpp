#include "TraceControlSettings.h"

FTraceControlSettings::FTraceControlSettings() {
    this->bUseWorkerThread = false;
    this->bUseImportantCache = false;
    this->TailSizeBytes = 0;
}

