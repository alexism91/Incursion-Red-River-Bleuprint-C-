#include "IRRAIShootPoint.h"

FIRRAIShootPoint::FIRRAIShootPoint() {
    this->bCanShoot = false;
    this->LastShootTime = 0.00f;
    this->PointTestResult = ESenseTestResult::None;
}

