#include "MeshTopologySelectionMechanicProperties.h"

UMeshTopologySelectionMechanicProperties::UMeshTopologySelectionMechanicProperties() {
    this->bSelectVertices = true;
    this->bSelectEdges = true;
    this->bSelectFaces = true;
    this->bSelectEdgeLoops = false;
    this->bSelectEdgeRings = false;
    this->bHitBackFaces = true;
    this->bEnableMarquee = true;
    this->bMarqueeIgnoreOcclusion = true;
    this->bPreferProjectedElement = true;
    this->bSelectDownRay = true;
    this->bIgnoreOcclusion = false;
}

void UMeshTopologySelectionMechanicProperties::SelectAll() {
}

void UMeshTopologySelectionMechanicProperties::InvertSelection() {
}


