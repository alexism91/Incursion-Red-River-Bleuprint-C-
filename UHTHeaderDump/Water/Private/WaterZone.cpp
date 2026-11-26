#include "WaterZone.h"
#include "WaterMeshComponent.h"

AWaterZone::AWaterZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWaterMeshComponent>(TEXT("WaterMesh"));
    this->WaterInfoTextureArray = NULL;
    this->WaterInfoTextureArrayNumSlices = 1;
    this->WaterMesh = (UWaterMeshComponent*)RootComponent;
    this->CaptureZOffset = 64.00f;
    this->bHalfPrecisionTexture = true;
    this->VelocityBlurRadius = 1;
    this->OverlapPriority = 0;
    this->bEnableLocalOnlyTessellation = false;
    this->bAutoIncludeLandscapesAsTerrain = true;
    this->WaterZoneIndex = -1;
}

void AWaterZone::SetFarMeshMaterial(UMaterialInterface* InFarMaterial) {
}

int32 AWaterZone::GetWaterZoneIndex() const {
    return 0;
}


