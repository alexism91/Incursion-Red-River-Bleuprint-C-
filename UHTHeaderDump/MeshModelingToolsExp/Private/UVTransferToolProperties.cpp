#include "UVTransferToolProperties.h"

UUVTransferToolProperties::UUVTransferToolProperties() {
    this->bReverseDirection = false;
    this->bTransferSeamsOnly = false;
    this->bClearExistingSeams = true;
    this->PathSimilarityWeight = 200.00f;
    this->bShowWireframes = false;
    this->bShowSeams = true;
    this->VertexSearchDistance = 0.00f;
}


