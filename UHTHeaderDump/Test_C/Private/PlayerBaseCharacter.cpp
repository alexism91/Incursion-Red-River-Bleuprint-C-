#include "PlayerBaseCharacter.h"
#include "IRRLightDetectionComponent.h"
#include "IRRPlayerMovementComponent.h"
#include "Net/UnrealNetwork.h"

APlayerBaseCharacter::APlayerBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIRRPlayerMovementComponent>(TEXT("CharMoveComp"))) {
    this->SpawnIndex = -1;
    this->LightDetectionComponent = CreateDefaultSubobject<UIRRLightDetectionComponent>(TEXT("Light Detection Component"));
}

void APlayerBaseCharacter::OnInventoryUpdated() {
}


int32 APlayerBaseCharacter::GetSpawnIndex() const {
    return 0;
}

ULXRDetectionComponent* APlayerBaseCharacter::GetLightDetectionComponent() const {
    return NULL;
}

void APlayerBaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerBaseCharacter, SpawnIndex);
}


