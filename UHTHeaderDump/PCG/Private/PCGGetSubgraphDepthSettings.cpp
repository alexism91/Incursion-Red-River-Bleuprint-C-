#include "PCGGetSubgraphDepthSettings.h"

UPCGGetSubgraphDepthSettings::UPCGGetSubgraphDepthSettings() {
    this->Mode = EPCGSubgraphDepthMode::Depth;
    this->DistanceRelativeToUpstreamGraph = 0;
    this->bQuietInvalidDepthQueries = false;
}


