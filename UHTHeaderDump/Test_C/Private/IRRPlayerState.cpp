#include "IRRPlayerState.h"
#include "Net/UnrealNetwork.h"

AIRRPlayerState::AIRRPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHost = false;
    this->PlayerIndex = 0;
}

void AIRRPlayerState::SetPlayerIndex(int32 newIndex) {
}

void AIRRPlayerState::SetIsHost(bool bNewIsHost) {
}

int32 AIRRPlayerState::GetPlayerIndex() const {
    return 0;
}

void AIRRPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIRRPlayerState, bIsHost);
    DOREPLIFETIME(AIRRPlayerState, PlayerIndex);
}


