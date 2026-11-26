#include "RifleAimServo.h"

FRifleAimServo::FRifleAimServo() {
    this->SmoothingTime = 0.00f;
    this->MaxDegreesPerSecond = 0.00f;
    this->MaxAuthorityDegrees = 0.00f;
    this->MaxMeasurementAge = 0.00f;
    this->ReturnSpeed = 0.00f;
    this->bFollowBaseAimRotationWhenNoTarget = false;
    this->bPivotAroundStock = false;
    this->PivotStockShift = 0.00f;
    this->MaxStockShift = 0.00f;
    this->StockPivotScale = 0.00f;
    this->StockDetachPitchDegrees = 0.00f;
    this->StockDetachBlendDegrees = 0.00f;
    this->StocklessDetachPitchDegrees = 0.00f;
    this->StocklessDetachBlendDegrees = 0.00f;
    this->StockReachBehindGripCm = 0.00f;
    this->bExtendArmsWhenAiming = false;
    this->ArmExtendDistance = 0.00f;
    this->ArmReachMargin = 0.00f;
    this->ArmExtendSpeed = 0.00f;
}

