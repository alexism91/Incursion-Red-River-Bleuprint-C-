#include "DoorSwing.h"

FDoorSwing::FDoorSwing() {
    this->Curve = NULL;
    this->bCurveIsOffset = false;
    this->StartYaw = 0.00f;
    this->EndYaw = 0.00f;
    this->Direction = 0.00f;
    this->PlayRate = 0.00f;
    this->ServerStartTime = 0.00f;
    this->SwingId = 0;
}

