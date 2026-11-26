#include "IRRCinematicCameraController.h"

AIRRCinematicCameraController::AIRRCinematicCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    const FProperty* p_bIsLocalPlayerController = GetClass()->FindPropertyByName("bIsLocalPlayerController");
    (*p_bIsLocalPlayerController->ContainerPtrToValuePtr<bool>(this)) = true;
    this->CameraActor = NULL;
    this->OriginalController = NULL;
    this->OriginalPlayer = NULL;
    this->MappingContext = NULL;
    this->MoveAction = NULL;
    this->LookAction = NULL;
    this->SpeedAction = NULL;
    this->BoostAction = NULL;
    this->PrecisionAction = NULL;
    this->ZoomAction = NULL;
    this->RollAction = NULL;
    this->FocusPullAction = NULL;
    this->MenuAction = NULL;
}


