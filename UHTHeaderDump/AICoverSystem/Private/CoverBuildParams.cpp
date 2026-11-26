#include "CoverBuildParams.h"

FCoverBuildParams::FCoverBuildParams() {
    this->TraceLength = 0.00f;
    this->FlankTraceLength = 0.00f;
    this->TraceStepDistance = 0.00f;
    this->SweepTraceRadius = 0.00f;
    this->MinSpaceBetweenValidPoints = 0.00f;
    this->AgentMaxWidth = 0.00f;
    this->AgentMaxHeightCrouch = 0.00f;
    this->AgentMaxHeightStanding = 0.00f;
    this->OffsetWhenLeaningSides = 0.00f;
    this->OffsetFrontAim = 0.00f;
    this->bIncludeInvalid = false;
    this->FlatWallCoverSpacing = 0.00f;
    this->OffsetFromWallDistance = 0.00f;
    this->OctreeExtent = 0.00f;
}

