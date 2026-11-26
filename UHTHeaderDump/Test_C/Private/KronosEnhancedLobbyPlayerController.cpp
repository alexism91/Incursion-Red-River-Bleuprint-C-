#include "KronosEnhancedLobbyPlayerController.h"

AKronosEnhancedLobbyPlayerController::AKronosEnhancedLobbyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bOverrideViewTarget = true;
    this->bFindCameraByTag = false;
}



