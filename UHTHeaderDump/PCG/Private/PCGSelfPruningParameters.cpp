#include "PCGSelfPruningParameters.h"

FPCGSelfPruningParameters::FPCGSelfPruningParameters() {
    this->PruningType = EPCGSelfPruningType::LargeToSmall;
    this->RadiusSimilarityFactor = 0.00f;
    this->bRandomizedPruning = false;
    this->bUseCollisionAttribute = false;
    this->CollisionQueryFlag = EPCGCollisionQueryFlag::Simple;
}

