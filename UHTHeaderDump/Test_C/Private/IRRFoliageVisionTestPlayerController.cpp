#include "IRRFoliageVisionTestPlayerController.h"

AIRRFoliageVisionTestPlayerController::AIRRFoliageVisionTestPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->MappingContext = NULL;
    this->MoveAction = NULL;
    this->LookAction = NULL;
    this->JumpAction = NULL;
    this->CrouchAction = NULL;
    this->ProneAction = NULL;
    this->MenuAction = NULL;
}

void AIRRFoliageVisionTestPlayerController::FoliageTest_Menu() {
}


