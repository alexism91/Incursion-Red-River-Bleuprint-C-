#include "LandscapeSettings.h"

ULandscapeSettings::ULandscapeSettings() {
    this->MaxNumberOfLayers = 8;
    this->bShowDialogForAutomaticLayerCreation = true;
    this->MaxComponents = 256;
    this->MaxImageImportCacheSizeMegaBytes = 256;
    this->PaintStrengthGamma = 2.20f;
    this->bDisablePaintingStartupSlowdown = true;
    this->LandscapeDirtyingMode = ELandscapeDirtyingMode::InLandscapeModeAndUserTriggeredChanges;
    this->SideResolutionLimit = 2048;
    this->BrushSizeUIMax = 8192.00f;
    this->BrushSizeClampMax = 65536.00f;
    this->HLODMaxTextureSize = 1024;
    this->bShouldUpdateEditLayersDuringInteractiveChanges = false;
    this->bRestrictiveMode = false;
    this->SplineIconWorldZOffset = 75.00f;
    this->SplineIconScale = 50.00f;
    this->bDisplayTargetLayerThumbnails = true;
    this->bDisableTemporalAntiAliasingInLandscapeMode = true;
}


