#include "MergeUVIslandsDataflowNode.h"

FMergeUVIslandsDataflowNode::FMergeUVIslandsDataflowNode() {
    this->UVChannel = 0;
    this->AreaDistortionThreshold = 0.00f;
    this->MaxNormalDeviationDeg = 0.00f;
    this->NormalSmoothingRounds = 0;
    this->NormalSmoothingAlpha = 0.00f;
}

