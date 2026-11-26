#include "WorldPartitionSettings.h"
#include "WorldPartitionEditorSpatialHash.h"
#include "WorldPartitionRuntimeHashSet.h"

UWorldPartitionSettings::UWorldPartitionSettings() {
    this->NewMapsDataLayersLogicOperator = EWorldPartitionDataLayersLogicOperator::Or;
    this->bNewMapsEnableWorldPartition = false;
    this->bNewMapsEnableWorldPartitionStreaming = true;
    this->EditorHashDefaultClass = UWorldPartitionEditorSpatialHash::StaticClass();
    this->RuntimeHashDefaultClass = UWorldPartitionRuntimeHashSet::StaticClass();
    this->PropertyOverridePolicy = NULL;
}


