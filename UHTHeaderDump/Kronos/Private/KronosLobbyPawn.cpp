#include "KronosLobbyPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AKronosLobbyPawn::AKronosLobbyPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
}

void AKronosLobbyPawn::OnLobbyPlayerDataChanged(const TArray<int32>& PlayerData) {
}



bool AKronosLobbyPawn::HasInitialReplicationFinished_Implementation() const {
    return false;
}


