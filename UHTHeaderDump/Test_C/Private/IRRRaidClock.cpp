#include "IRRRaidClock.h"
#include "Net/UnrealNetwork.h"

AIRRRaidClock::AIRRRaidClock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EndServerTime = 0.00f;
    this->PausedRemaining = 0.00f;
    this->bPaused = false;
    this->bExpired = false;
}

bool AIRRRaidClock::IsPaused() const {
    return false;
}

bool AIRRRaidClock::IsExpired() const {
    return false;
}

float AIRRRaidClock::GetRemainingSeconds() const {
    return 0.0f;
}

void AIRRRaidClock::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIRRRaidClock, EndServerTime);
    DOREPLIFETIME(AIRRRaidClock, PausedRemaining);
    DOREPLIFETIME(AIRRRaidClock, bPaused);
    DOREPLIFETIME(AIRRRaidClock, bExpired);
}


