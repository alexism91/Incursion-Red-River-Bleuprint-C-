#include "SensedPoint.h"

FSensedPoint::FSensedPoint() {
    this->PointScore = 0.00f;
    this->PointTestResult = ESenseTestResult::None;
    this->BoneIndex = 0;
    this->bCanBeSeen = false;
}

