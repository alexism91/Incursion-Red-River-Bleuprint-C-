#include "IRRFoliageVisionTestGameMode.h"
#include "IRRFoliageVisionTestPawn.h"
#include "IRRFoliageVisionTestPlayerController.h"

AIRRFoliageVisionTestGameMode::AIRRFoliageVisionTestGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AIRRFoliageVisionTestPlayerController::StaticClass();
    this->DefaultPawnClass = AIRRFoliageVisionTestPawn::StaticClass();
    this->ObserverTag = TEXT("FoliageTestObserver");
    this->SubjectTag = TEXT("FoliageTestSubject");
    this->bHoldBotFire = true;
    this->bFreezeBotMovement = true;
    this->RayDrawMode = 1;
    this->DefaultScanWidth = 600.00f;
    this->DefaultScanDepth = 400.00f;
    this->DefaultScanStep = 50.00f;
    this->ScanLabelRange = 2000.00f;
    this->MaxInstancesPerRefresh = 50000;
}

void AIRRFoliageVisionTestGameMode::FoliageTest_Scan(float Width, float Depth, float Step) {
}

void AIRRFoliageVisionTestGameMode::FoliageTest_Reset() {
}

void AIRRFoliageVisionTestGameMode::FoliageTest_Rays(int32 Mode) {
}

void AIRRFoliageVisionTestGameMode::FoliageTest_ObserverHere() {
}

void AIRRFoliageVisionTestGameMode::FoliageTest_ObserverDummy() {
}

void AIRRFoliageVisionTestGameMode::FoliageTest_ObserverBot() {
}

void AIRRFoliageVisionTestGameMode::FoliageTest_ClearScan() {
}


