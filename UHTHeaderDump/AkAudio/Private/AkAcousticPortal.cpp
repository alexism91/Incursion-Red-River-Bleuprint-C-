#include "AkAcousticPortal.h"
#include "AkPortalComponent.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Portal = CreateDefaultSubobject<UAkPortalComponent>(TEXT("PortalComponent"));
    this->InitialState = EAkAcousticPortalState::Closed;
    this->bRequiresStateMigration = false;
    this->Portal->SetupAttachment(RootComponent);
}

EAkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return EAkAcousticPortalState::Closed;
}

void AAkAcousticPortal::EnablePortal() {
}

void AAkAcousticPortal::DisablePortal() {
}


