#include "IRRExtractionZoneActor.h"

AIRRExtractionZoneActor::AIRRExtractionZoneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->FlareClass = NULL;
    this->FlareSearchRadius = 1000.00f;
    this->bSpawnFlareIfMissing = true;
    this->ExtractionComponent = NULL;
    this->ZoneVolume = NULL;
    this->SignalFlare = NULL;
}


bool AIRRExtractionZoneActor::IsExtractionOpen() const {
    return false;
}

void AIRRExtractionZoneActor::HandleOpenUpdated(bool bIsOpen) {
}

AActor* AIRRExtractionZoneActor::GetSignalFlare() const {
    return NULL;
}

UIRRExtractionComponent* AIRRExtractionZoneActor::GetExtractionComponent() const {
    return NULL;
}


