#include "AIManager.h"

AAIManager::AAIManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvestigationRadiusFactor = 1.00f;
    this->bUseOptimization = true;
    this->OptimizationTickRate = 0.20f;
    this->DistanceFactor = 1.00f;
    this->bUseWeatherAndTimeVisibility = true;
    this->bUseVisibilityOcclusion = true;
    this->MaxDistance = 3500.00f;
    this->HorizontalSteps = 8;
    this->VerticalSteps = 4;
    this->Channel = ECC_Visibility;
    this->IndoorVisibilityThreshold = 0.50f;
    this->IndoorVisibilityFactor = 0.60f;
    this->TimeVisibilityCurve = NULL;
    this->TimeVisiblitySunAngleCurve = NULL;
    this->VisibilityTickRate = 5.00f;
    this->HeadlampOnTimeFactor = 0.45f;
    this->HeadlampOffTimeFactor = 0.60f;
    this->CurrentTimeValue = 1.00f;
    this->bHeadlampsOn = false;
    this->MaxWeatherVisionDistance = 50000.00f;
    this->CachedUltraDynamicSkyActor = NULL;
}

void AAIManager::UpdateOptimizationWave(UAIOptimizationComponent* OptimizationComponent, double ClosestDistance, const TMap<uint8, float>& OptimizationRanges) const {
}

void AAIManager::UpdateAISettings(const FIRRAISettings& InAISettings, const FIRRAISimulationSettings& InAISimulationSettings) {
}

void AAIManager::UnregisterPlayerPawn(AActor* PlayerPawn) {
}

void AAIManager::UnregisterAIPawn(AActor* AIPawn) {
}

void AAIManager::Tick_AIVisibility() {
}

void AAIManager::Tick_AIOptimization() {
}

void AAIManager::RegisterPlayerPawn(AActor* PlayerPawn) {
}

void AAIManager::RegisterAIPawn(AActor* AIPawn) {
}

FIRRAITimeAndWeatherEffects AAIManager::GetTimeAndWeatherEffects() const {
    return FIRRAITimeAndWeatherEffects{};
}

float AAIManager::GetCurrentTimeValue() const {
    return 0.0f;
}

TArray<AActor*> AAIManager::GetAllPlayerPawns() const {
    return TArray<AActor*>();
}

TArray<AActor*> AAIManager::GetAllAIPawnsByTeamID(FGenericTeamId TeamId) {
    return TArray<AActor*>();
}

TArray<AActor*> AAIManager::GetAllAIPawns() const {
    return TArray<AActor*>();
}

FIRRAISimulationSettings AAIManager::GetAISimulationSettings() const {
    return FIRRAISimulationSettings{};
}

FIRRAISettings AAIManager::GetAISettings() const {
    return FIRRAISettings{};
}

bool AAIManager::AreHeadlampsOn() const {
    return false;
}


