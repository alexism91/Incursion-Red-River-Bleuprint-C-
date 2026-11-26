#include "AIOptimizationComponentV2.h"
#include "Net/UnrealNetwork.h"

UAIOptimizationComponentV2::UAIOptimizationComponentV2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLevel = EAIOptimizationLevel::Level0;
}

void UAIOptimizationComponentV2::HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

void UAIOptimizationComponentV2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIOptimizationComponentV2, CurrentLevel);
}


