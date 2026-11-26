#include "IRRFoliageVisionTestPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

AIRRFoliageVisionTestPawn::AIRRFoliageVisionTestPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StandingHeight = 180.00f;
    this->CrouchedHeight = 115.00f;
    this->ProneLength = 175.00f;
    this->ProneHeight = 25.00f;
    this->bDrawSensePoints = true;
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->Camera->SetupAttachment(RootComponent);
}

FString AIRRFoliageVisionTestPawn::GetStanceName() const {
    return TEXT("");
}


