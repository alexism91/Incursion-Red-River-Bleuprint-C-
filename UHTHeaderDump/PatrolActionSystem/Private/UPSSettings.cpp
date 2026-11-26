#include "UPSSettings.h"

UUPSSettings::UUPSSettings() {
    this->DefaultLinesThickness = 2.50f;
    this->ErrorLinesThickness = 5.00f;
    this->PatrolPointArrowOffset = 50.00f;
    this->PatrolPointArrowSize = 1300.00f;
    this->PatrolPointSmallArrowSize = 400.00f;
    this->ArrowMovementSpeed = 15.00f;
    this->DistanceBetweenArrows = 450.00f;
    this->ReachRadiusThickness = 2.00f;
    this->PatrolBuilderTraceChannel = ECC_WorldStatic;
    this->CheckDistanceBetweenPoints = 100.00f;
    this->DebugPointActionArrowSize = 300.00f;
    this->DebugPointActionLineThickness = 1.50f;
    this->CurrentPatrolPointBBName = TEXT("PatrolPoint");
}

UUPSSettings* UUPSSettings::Get() {
    return NULL;
}


