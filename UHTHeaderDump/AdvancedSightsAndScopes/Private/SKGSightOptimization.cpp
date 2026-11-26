#include "SKGSightOptimization.h"

FSKGSightOptimization::FSKGSightOptimization() {
    this->bOverrideCaptureEveryFrame = false;
    this->RefreshRate = 0.00f;
    this->bDisableWhenNotAiming = false;
    this->NotAimingRefreshRate = 0.00f;
    this->bClearScopeWithColor = false;
    this->bClearScopeWithMaterial = false;
    this->ClearedScopeMaterial = NULL;
}

