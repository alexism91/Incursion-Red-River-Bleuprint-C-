#include "FixTinyGeoDataflowNode.h"

FFixTinyGeoDataflowNode::FFixTinyGeoDataflowNode() {
    this->MergeType = EFixTinyGeoMergeType::MergeGeometry;
    this->bOnFractureLevel = false;
    this->bOnlyClusters = false;
    this->bOnlySameParent = false;
    this->bFractureLevelIsAll = false;
    this->NeighborSelection = EFixTinyGeoNeighborSelectionMethod::LargestNeighbor;
    this->bOnlyToConnected = false;
    this->bUseCollectionProximityForConnections = false;
    this->UseBoneSelection = EFixTinyGeoUseBoneSelection::NoEffect;
    this->SelectionMethod = EFixTinyGeoGeometrySelectionMethod::VolumeCubeRoot;
    this->MinVolumeCubeRoot = 0.00f;
    this->RelativeVolume = 0.00f;
    this->AddSamplesForCollision = false;
    this->CollisionSampleSpacing = 0.00f;
}

