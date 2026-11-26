#include "WorldPartitionStreamingPolicy.h"

UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy() {
    this->CurrentStreamingPerformance = EWorldPartitionStreamingPerformance::Good;
    this->bCurrentBlockOnSlowStreaming = false;
    this->bShouldMergeStreamingSourceInfo = false;
}


