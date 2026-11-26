#include "IRRVisibilityDebugViewer.h"

AIRRVisibilityDebugViewer::AIRRVisibilityDebugViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityData = NULL;
    this->VisibilityAtlas = NULL;
    this->Stance = EIRRStance::Standing;
    this->bDrawAngularFan = true;
    this->OpenRayDisplayLength = 3000.00f;
    this->BinDrawStride = 1;
    this->bEnabled = true;
}


