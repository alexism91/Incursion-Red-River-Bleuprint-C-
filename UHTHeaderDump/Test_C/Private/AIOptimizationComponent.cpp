#include "AIOptimizationComponent.h"
#include "Net/UnrealNetwork.h"

UAIOptimizationComponent::UAIOptimizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bDrawDebug = false;
    this->bUseMontagePlayOption = true;
    this->MontagePlayTickRate = 0.50f;
    this->MinOptimizationLevel = EAIOptimizationLevel::Level0;
    this->MaxOptimizationLevel = EAIOptimizationLevel::UnPossessed;
    this->OptimizationLevel = EAIOptimizationLevel::Level0;
    this->MinMovementTickRate = 1.00f;
}

void UAIOptimizationComponent::UpdateOptimization() {
}

void UAIOptimizationComponent::TickIsMontagePlaying() {
}

void UAIOptimizationComponent::SetOptimizationLevel(EAIOptimizationLevel NewOptimizationLevel, float BotTicksPerSec) {
}

void UAIOptimizationComponent::SetMinOptimizationLevel(EAIOptimizationLevel InOptimizationLevel) {
}

void UAIOptimizationComponent::SetMaxOptimizationLevel(EAIOptimizationLevel InOptimizationLevel) {
}

void UAIOptimizationComponent::OnRep_OnOptimizationWave() {
}

void UAIOptimizationComponent::OnMontageStarted(FName LinkedAnimGraph) {
}

void UAIOptimizationComponent::OnEquippableChanged(UEquippableComponent* EquippableComponent) {
}

EAIOptimizationLevel UAIOptimizationComponent::GetOptimizationLevel() {
    return EAIOptimizationLevel::Level0;
}

FAIOptimizationData UAIOptimizationComponent::GetOptimizationData(EAIOptimizationLevel InOptimizationLevel) {
    return FAIOptimizationData{};
}

void UAIOptimizationComponent::EnableOptimization() {
}

void UAIOptimizationComponent::DrawDebug() {
}

void UAIOptimizationComponent::DoOptimization(FAIOptimizationData OptimizationData) {
}

void UAIOptimizationComponent::DisableOptimization() {
}

void UAIOptimizationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIOptimizationComponent, OptimizationLevel);
}


