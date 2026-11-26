#include "IRRFXPreloader.h"

AIRRFXPreloader::AIRRFXPreloader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartOnBeginPlay = true;
    this->bHoldLoadingScreen = true;
    this->bPrefireSystems = true;
    this->PrefirePerFrame = 4;
    this->PrefireLifetime = 0.50f;
    this->PrefireDistance = 300.00f;
}

void AIRRFXPreloader::StartPreload() {
}

bool AIRRFXPreloader::IsPreloading() const {
    return false;
}

bool AIRRFXPreloader::HasFinishedPreload() const {
    return false;
}


