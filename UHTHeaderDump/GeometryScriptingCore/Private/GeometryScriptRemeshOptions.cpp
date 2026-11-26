#include "GeometryScriptRemeshOptions.h"

FGeometryScriptRemeshOptions::FGeometryScriptRemeshOptions() {
    this->bDiscardAttributes = false;
    this->bReprojectToInputMesh = false;
    this->SmoothingType = EGeometryScriptRemeshSmoothingType::Uniform;
    this->SmoothingRate = 0.00f;
    this->MeshBoundaryConstraint = EGeometryScriptRemeshEdgeConstraintType::Fixed;
    this->GroupBoundaryConstraint = EGeometryScriptRemeshEdgeConstraintType::Fixed;
    this->MaterialBoundaryConstraint = EGeometryScriptRemeshEdgeConstraintType::Fixed;
    this->bAllowFlips = false;
    this->bAllowSplits = false;
    this->bAllowCollapses = false;
    this->bPreventNormalFlips = false;
    this->bPreventTinyTriangles = false;
    this->bUseFullRemeshPasses = false;
    this->RemeshIterations = 0;
    this->bAutoCompact = false;
}

