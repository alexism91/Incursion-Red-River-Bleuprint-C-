#include "WorldPartitionRuntimeCell.h"

UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell() {
    this->bIsAlwaysLoaded = false;
    this->bIsSpatiallyLoaded = false;
    this->bClientOnlyVisible = false;
    this->bIsHLOD = false;
    this->bBlockOnSlowLoading = false;
    this->RuntimeCellData = NULL;
}


