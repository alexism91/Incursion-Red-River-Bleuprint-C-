#include "PCGCollapsePointsSettings.h"

UPCGCollapsePointsSettings::UPCGCollapsePointsSettings() {
    this->DistanceThreshold = 100.00f;
    this->Mode = EPCGCollapseMode::PairwiseClosest;
    this->ComparisonMode = EPCGCollapseComparisonMode::Position;
    this->VisitOrder = EPCGCollapseVisitOrder::Ordered;
    this->bUseMergeWeightAttribute = false;
    this->AttributesToMerge.AddDefaulted(1);
}


