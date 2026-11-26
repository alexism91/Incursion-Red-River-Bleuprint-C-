#include "ModelingComponentsSettings.h"

UModelingComponentsSettings::UModelingComponentsSettings() {
    this->bEnableRayTracingWhileEditing = false;
    this->bEnableRayTracing = false;
    this->bGenerateLightmapUVs = false;
    this->bEnableCollision = true;
    this->CollisionMode = CTF_UseSimpleAndComplex;
}


