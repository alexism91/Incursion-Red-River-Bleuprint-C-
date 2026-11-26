#include "MetaHumanCharacterViewportSettings.h"

FMetaHumanCharacterViewportSettings::FMetaHumanCharacterViewportSettings() {
    this->CharacterEnvironment = EMetaHumanCharacterEnvironment::Studio;
    this->LightRotation = 0.00f;
    this->bTonemapperEnabled = false;
    this->LevelOfDetail = EMetaHumanCharacterLOD::LOD0;
    this->CameraFrame = EMetaHumanCharacterCameraFrame::Auto;
    this->RenderingQuality = EMetaHumanCharacterRenderingQuality::Medium;
    this->bAlwaysUseHairCards = false;
    this->bShowViewportOverlays = false;
}

