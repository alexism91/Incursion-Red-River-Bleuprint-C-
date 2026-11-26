#include "IRRAIDevConfigFocusPoint.h"

FIRRAIDevConfigFocusPoint::FIRRAIDevConfigFocusPoint() {
    this->MinDistanceBetweenPoints = 0.00f;
    this->MinAngleBetweenNodes = 0.00f;
    this->MaxNodesToCheck = 0;
    this->TraceChannel = ECC_WorldStatic;
    this->FocusType = EIRRAIFocusType::Simple;
    this->SphereTraceRadius = 0.00f;
    this->bSphereTrace = false;
    this->WeaponSphereTraceRadius = 0.00f;
    this->bWeaponSphereTrace = false;
    this->LastKnownGroundOffset = 0.00f;
    this->MaxCornerTraceDistance = 0.00f;
    this->CornerOffsetHigh = 0.00f;
    this->CornerOffsetMid = 0.00f;
    this->bEnableFocusFilter = false;
    this->FocusEnterAngleDeg = 0.00f;
    this->FocusExitAngleDeg = 0.00f;
    this->FocusTrackingQuietTime = 0.00f;
    this->FocusRadialDeadbandPct = 0.00f;
    this->FocusTierUpgradeCommitTime = 0.00f;
    this->FocusTierDowngradeCommitTime = 0.00f;
}

