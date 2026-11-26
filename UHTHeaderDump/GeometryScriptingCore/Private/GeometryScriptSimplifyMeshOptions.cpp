#include "GeometryScriptSimplifyMeshOptions.h"

FGeometryScriptSimplifyMeshOptions::FGeometryScriptSimplifyMeshOptions() {
    this->Method = EGeometryScriptRemoveMeshSimplificationType::StandardQEM;
    this->bAllowSeamCollapse = false;
    this->bAllowSeamSmoothing = false;
    this->bAllowSeamSplits = false;
    this->bPreserveVertexPositions = false;
    this->bRetainQuadricMemory = false;
    this->bAutoCompact = false;
}

