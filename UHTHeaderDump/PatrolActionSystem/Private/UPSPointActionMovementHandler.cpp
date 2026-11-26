#include "UPSPointActionMovementHandler.h"

AUPSPointActionMovementHandler::AUPSPointActionMovementHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementCharacter = NULL;
    this->PointActionComponent = NULL;
}




void AUPSPointActionMovementHandler::FinishMovement(bool bSuccess) {
}


