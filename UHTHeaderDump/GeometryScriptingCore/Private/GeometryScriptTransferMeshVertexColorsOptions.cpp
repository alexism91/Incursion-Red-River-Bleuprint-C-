#include "GeometryScriptTransferMeshVertexColorsOptions.h"

FGeometryScriptTransferMeshVertexColorsOptions::FGeometryScriptTransferMeshVertexColorsOptions() {
    this->TransferMethod = ETransferVertexColorMethod::ClosestPointOnSurface;
    this->RadiusPercentage = 0.00f;
    this->NormalThreshold = 0.00f;
    this->LayeredMeshSupport = false;
    this->NumSmoothingIterations = 0;
    this->SmoothingStrength = 0.00f;
    this->bHardEdges = false;
    this->BiasRatio = 0.00f;
}

