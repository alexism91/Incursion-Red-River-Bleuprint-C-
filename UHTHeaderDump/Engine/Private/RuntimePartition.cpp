#include "RuntimePartition.h"

URuntimePartition::URuntimePartition() {
    this->bBlockOnSlowStreaming = false;
    this->bClientOnlyVisible = false;
    this->Priority = 0;
    this->BoundsMethod = ERuntimePartitionCellBoundsMethod::UseContent;
    this->LoadingRange = 0;
    this->HLODIndex = 0;
}


