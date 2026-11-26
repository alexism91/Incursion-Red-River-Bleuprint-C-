#include "MirrorToolProperties.h"

UMirrorToolProperties::UMirrorToolProperties() {
    this->OperationMode = EMirrorOperationMode::MirrorAndAppend;
    this->bCropAlongMirrorPlaneFirst = true;
    this->bSimplifyAlongCrop = true;
    this->bWeldVerticesOnMirrorPlane = true;
    this->PlaneTolerance = 0.00f;
    this->bAllowBowtieVertexCreation = false;
    this->bShowPreview = true;
    this->WriteTo = EMirrorSaveMode::InputObjects;
}


