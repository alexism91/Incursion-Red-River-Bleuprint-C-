#include "KronosPartyPlayerActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AKronosPartyPlayerActor::AKronosPartyPlayerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->PlayerWidgetClass = NULL;
    this->bCreateForLocalPlayer = true;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->WidgetComponent = NULL;
    this->OwnedPlayerStart = NULL;
}


bool AKronosPartyPlayerActor::HasInitialReplicationFinished_Implementation() const {
    return false;
}

UWidgetComponent* AKronosPartyPlayerActor::GetWidgetComponent() const {
    return NULL;
}

UKronosPartyPlayerWidget* AKronosPartyPlayerActor::GetPlayerWidget() const {
    return NULL;
}

AKronosPartyPlayerState* AKronosPartyPlayerActor::GetOwningPartyPlayerState() const {
    return NULL;
}

AKronosPartyPlayerStart* AKronosPartyPlayerActor::GetOwnedPlayerStart() const {
    return NULL;
}


