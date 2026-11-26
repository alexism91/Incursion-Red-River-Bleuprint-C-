#include "MeshVertexPaintToolUtilityActions.h"

UMeshVertexPaintToolUtilityActions::UMeshVertexPaintToolUtilityActions() {
    this->Operation = EMeshVertexPaintToolUtilityOperations::BlendAllSeams;
    this->SourceChannel = EMeshVertexPaintColorChannel::Red;
    this->SourceValue = 0.00f;
    this->TargetChannel = EMeshVertexPaintColorChannel::Green;
    this->bCopyToHiRes = false;
}

TArray<FString> UMeshVertexPaintToolUtilityActions::GetWeightMapsFunc() {
    return TArray<FString>();
}

TArray<FString> UMeshVertexPaintToolUtilityActions::GetLODNamesFunc() const {
    return TArray<FString>();
}

void UMeshVertexPaintToolUtilityActions::ApplySelectedOperation() {
}


