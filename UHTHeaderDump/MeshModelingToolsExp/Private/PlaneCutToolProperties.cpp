#include "PlaneCutToolProperties.h"

UPlaneCutToolProperties::UPlaneCutToolProperties() {
    this->bKeepBothHalves = false;
    this->SpacingBetweenHalves = 0.00f;
    this->bExportSeparatedPiecesAsNewMeshAssets = true;
    this->bShowPreview = true;
    this->bFillCutHole = true;
    this->bFillSpans = false;
    this->bSimplifyAlongCut = true;
}


