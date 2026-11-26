#include "ThreadingOptions.h"

FThreadingOptions::FThreadingOptions() {
    this->bUseGlobalThreadPool = false;
    this->IntraOpNumThreads = 0;
    this->InterOpNumThreads = 0;
    this->ExecutionMode = SEQUENTIAL;
}

