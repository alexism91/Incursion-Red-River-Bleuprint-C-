#include "WorldPartition.h"

UWorldPartition::UWorldPartition() {
    this->RuntimeHash = NULL;
    this->bEnableStreaming = true;
    this->ServerStreamingMode = EWorldPartitionServerStreamingMode::ProjectDefault;
    this->ServerStreamingOutMode = EWorldPartitionServerStreamingOutMode::ProjectDefault;
    this->DataLayersLogicOperator = EWorldPartitionDataLayersLogicOperator::Or;
    this->bHasStandaloneHLOD = false;
    this->bIsStandaloneHLODWorld = false;
    this->bDisableContentBundles = false;
    this->DataLayerManager = NULL;
    this->ExternalDataLayerManager = NULL;
    this->StreamingPolicy = NULL;
}


