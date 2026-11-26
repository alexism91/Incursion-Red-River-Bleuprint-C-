#include "ClusterScatterPointsDataflowNode.h"

FClusterScatterPointsDataflowNode::FClusterScatterPointsDataflowNode() {
    this->NumberClustersMin = 0;
    this->NumberClustersMax = 0;
    this->PointsPerClusterMin = 0;
    this->PointsPerClusterMax = 0;
    this->ClusterRadiusFractionMin = 0.00f;
    this->ClusterRadiusFractionMax = 0.00f;
    this->ClusterRadiusOffset = 0.00f;
    this->RandomSeed = 0;
}

