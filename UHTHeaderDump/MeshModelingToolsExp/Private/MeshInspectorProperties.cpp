#include "MeshInspectorProperties.h"

UMeshInspectorProperties::UMeshInspectorProperties() {
    this->bWireframe = true;
    this->bBoundaryEdges = true;
    this->bBowtieVertices = true;
    this->bPolygonBorders = false;
    this->bUVSeams = false;
    this->bUVBowties = false;
    this->bMissingUVs = false;
    this->bNormalSeams = false;
    this->bTangentSeams = false;
    this->bNormalVectors = false;
    this->bTangentVectors = false;
    this->bDrawHiddenEdgesAndSeams = true;
    this->NormalLength = 5.00f;
    this->TangentLength = 5.00f;
    this->ShowIndices = EMeshInspectorToolDrawIndexMode::None;
}


