#include "IRRVisibilityBaker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AIRRVisibilityBaker::AIRRVisibilityBaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundsBox"));
    this->BoundsBox = (UBoxComponent*)RootComponent;
    this->CoarseSpacing = 400.00f;
    this->FineSpacing = 100.00f;
    this->ComplexityCheckRadius = 500.00f;
    this->ComplexityThreshold = 0.50f;
    this->NumBins = 360;
    this->VisibilityRadius = 15000.00f;
    this->bAutoFitVerticalToNavmesh = true;
    this->bExpandToNavmeshBounds = true;
    this->bBakeElevation = true;
    this->PitchFanSamples = 9;
    this->PitchRangeDeg = 45.00f;
    this->PitchGroupingSlack = 1.50f;
    this->bFanOnHitsOnly = true;
    this->ElevationQuantMinCm = -6000.00f;
    this->ElevationQuantRangeCm = 12000.00f;
    this->StanceHeights.AddDefaulted(3);
    this->TraceChannel = ECC_Visibility;
    this->OutputDataAsset = NULL;
    this->bEnableChunking = false;
    this->ChunkSize = 5000.00f;
    this->ChunkOutputFolder = TEXT("/Game/AI/Visibility/Chunks");
    this->OutputAtlas = NULL;
}


