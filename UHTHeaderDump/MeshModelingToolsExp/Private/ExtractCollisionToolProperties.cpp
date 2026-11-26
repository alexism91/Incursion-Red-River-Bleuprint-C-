#include "ExtractCollisionToolProperties.h"

UExtractCollisionToolProperties::UExtractCollisionToolProperties() {
    this->CollisionType = EExtractCollisionOutputType::Simple;
    this->bOutputSeparateMeshes = true;
    this->bShowPreview = false;
    this->bShowInputMesh = true;
    this->bWeldEdges = true;
}


