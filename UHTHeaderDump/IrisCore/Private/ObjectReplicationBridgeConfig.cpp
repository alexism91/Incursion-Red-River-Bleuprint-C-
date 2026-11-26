#include "ObjectReplicationBridgeConfig.h"

UObjectReplicationBridgeConfig::UObjectReplicationBridgeConfig() {
    this->FilterConfigs.AddDefaulted(4);
    this->PrioritizerConfigs.AddDefaulted(1);
    this->DeltaCompressionConfigs.AddDefaulted(3);
    this->CriticalClassConfigs.AddDefaulted(1);
    this->bAllClassesCritical = false;
    this->DefaultSpatialFilterName = TEXT("Spatial");
    this->RequiredNetDriverChannelClassName = TEXT("/Script/Engine.DataStreamChannel");
}


