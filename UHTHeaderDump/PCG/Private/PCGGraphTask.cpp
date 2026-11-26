#include "PCGGraphTask.h"

FPCGGraphTask::FPCGGraphTask() {
    this->ElementSource = EPCGElementSource::Trivial;
    this->CookedSettings = NULL;
    this->NodeID = 0;
    this->CompiledTaskId = 0;
    this->ParentID = 0;
    this->StackIndex = 0;
}

