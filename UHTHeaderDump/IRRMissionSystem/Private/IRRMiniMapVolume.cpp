#include "IRRMiniMapVolume.h"

AIRRMiniMapVolume::AIRRMiniMapVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapTexture = NULL;
    this->MapMask = NULL;
    this->SignalMask = NULL;
    this->MapSize = 20000.00f;
    this->MapHeight = 1000.00f;
    this->bMapCaptureDepth = false;
    this->MapCaptureDepthValue = 5000.00f;
    this->MapPriority = 0;
}

void AIRRMiniMapVolume::CaptureMapTexture() {
}


