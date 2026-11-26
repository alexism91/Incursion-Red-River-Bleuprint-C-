#include "OffsetMeshSelectionToolProperties.h"

UOffsetMeshSelectionToolProperties::UOffsetMeshSelectionToolProperties() {
    this->OffsetDistance = 10.00f;
    this->Direction = EOffsetMeshSelectionDirectionMode::ConstantWidth;
    this->NumSubdivisions = 0;
    this->CreaseAngle = 60.00f;
    this->bShellsToSolids = true;
    this->bInferGroupsFromNbrs = true;
    this->bGroupPerSubdivision = true;
    this->bReplaceSelectionGroups = false;
    this->UVScale = 1.00f;
    this->bUVIslandPerGroup = true;
    this->bInferMaterialID = true;
    this->SetMaterialID = 0;
    this->bShowInputMaterials = false;
}


