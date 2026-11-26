#include "GarbageCollectionSettings.h"

UGarbageCollectionSettings::UGarbageCollectionSettings() {
    this->TimeBetweenPurgingPendingKillObjects = 60.00f;
    this->FlushStreamingOnGC = false;
    this->AllowParallelGC = true;
    this->IncrementalBeginDestroyEnabled = true;
    this->CreateGCClusters = true;
    this->AssetClusteringEnabled = true;
    this->ActorClusteringEnabled = true;
    this->VerifyUObjectsAreNotFGCObjects = true;
    this->GarbageEliminationEnabled = false;
    this->DumpObjectCountsToLogWhenMaxObjectLimitExceeded = false;
    this->MinGCClusterSize = 5;
    this->NumRetriesBeforeForcingGC = 0;
    this->MaxObjectsNotConsideredByGC = 0;
    this->MaxObjectsInGame = 2097152;
    this->MaxObjectsInEditor = 12582912;
}


