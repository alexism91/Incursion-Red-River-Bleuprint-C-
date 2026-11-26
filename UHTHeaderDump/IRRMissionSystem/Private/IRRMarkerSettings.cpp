#include "IRRMarkerSettings.h"

FIRRMarkerSettings::FIRRMarkerSettings() {
    this->MarkerWidgetClass = NULL;
    this->ToolTipWidgetClass = NULL;
    this->ToolTipData = NULL;
    this->PriorityLevel = 0;
    this->bScaleWithZoom = false;
    this->bAlwaysOnScreen = false;
    this->bRotate = false;
    this->bStatic = false;
    this->bIgnoreZ = false;
    this->bUseMaterial = false;
    this->Material = NULL;
    this->Texture = NULL;
    this->Size = 0.00f;
    this->bUseBackgroundShadow = false;
    this->bUseBackground = false;
    this->bUseBackgroundMaterial = false;
    this->BackgroundMaterial = NULL;
    this->BackgroundTexture = NULL;
    this->BackgroundSize = 0.00f;
}

