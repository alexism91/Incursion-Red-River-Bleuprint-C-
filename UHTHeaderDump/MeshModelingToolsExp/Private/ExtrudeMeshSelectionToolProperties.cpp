#include "ExtrudeMeshSelectionToolProperties.h"

UExtrudeMeshSelectionToolProperties::UExtrudeMeshSelectionToolProperties() {
    this->InputMode = EExtrudeMeshSelectionInteractionMode::Interactive;
    this->ExtrudeDistance = 10.00f;
    this->RegionMode = EExtrudeMeshSelectionRegionModifierMode::OriginalShape;
    this->NumSubdivisions = 0;
    this->CreaseAngle = 60.00f;
    this->RaycastMaxDistance = 1000.00f;
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


