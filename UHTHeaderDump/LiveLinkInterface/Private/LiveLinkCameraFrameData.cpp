#include "LiveLinkCameraFrameData.h"

FLiveLinkCameraFrameData::FLiveLinkCameraFrameData() {
    this->FieldOfView = 0.00f;
    this->AspectRatio = 0.00f;
    this->FocalLength = 0.00f;
    this->Aperture = 0.00f;
    this->FocusDistance = 0.00f;
    this->ProjectionMode = ELiveLinkCameraProjectionMode::Perspective;
    this->FilmBackWidth = 0.00f;
    this->FilmBackHeight = 0.00f;
}

