#include "KronosLobbyPlayerController.h"

AKronosLobbyPlayerController::AKronosLobbyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bOverrideViewTarget = true;
    this->bFindCameraByTag = false;
}


