#include "WeldMeshEdgesToolProperties.h"

UWeldMeshEdgesToolProperties::UWeldMeshEdgesToolProperties() {
    this->Tolerance = 0.00f;
    this->bOnlyUnique = false;
    this->bResolveTJunctions = false;
    this->bSplitBowties = true;
    this->InitialEdges = 0;
    this->RemainingEdges = 0;
    this->AttrWeldingMode = EWeldMeshEdgesAttributeUIMode::OnWeldedMeshEdgesOnly;
    this->SplitNormalThreshold = 0.10f;
    this->SplitTangentsThreshold = 0.10f;
    this->SplitUVThreshold = 0.01f;
    this->SplitColorThreshold = 0.01f;
}


