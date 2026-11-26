#include "HTNService_Lean.h"

UHTNService_Lean::UHTNService_Lean() {
    this->MaxLeanCornerDistance = 1000.00f;
    this->LeanResetDelayMin = 0.50f;
    this->LeanResetDelayMax = 0.75f;
    this->LeanResetDelayOnFinish = 0.50f;
    this->bLeanWhenVisible = true;
    this->VisibleLeanProbeOffset = 65.00f;
    this->bLeanWhenCenterClear = false;
}


