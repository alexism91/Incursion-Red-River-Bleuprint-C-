#include "PolyEditExtrudeProperties.h"

UPolyEditExtrudeProperties::UPolyEditExtrudeProperties() {
    this->DistanceMode = EPolyEditExtrudeDistanceMode::ClickInViewport;
    this->Distance = 100.00f;
    this->DirectionMode = EPolyEditExtrudeModeOptions::SingleDirection;
    this->Direction = EPolyEditExtrudeDirection::SelectionNormal;
    this->MaxDistanceScaleFactor = 4.00f;
    this->bShellsToSolids = true;
    this->MeasureDirection = EPolyEditExtrudeDirection::SelectionNormal;
    this->bUseColinearityForSettingBorderGroups = true;
}


