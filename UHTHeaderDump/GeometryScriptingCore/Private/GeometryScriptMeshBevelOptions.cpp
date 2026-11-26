#include "GeometryScriptMeshBevelOptions.h"

FGeometryScriptMeshBevelOptions::FGeometryScriptMeshBevelOptions() {
    this->BevelDistance = 0.00f;
    this->bInferMaterialID = false;
    this->SetMaterialID = 0;
    this->Subdivisions = 0;
    this->RoundWeight = 0.00f;
    this->bApplyFilterBox = false;
    this->bFullyContained = false;
}

