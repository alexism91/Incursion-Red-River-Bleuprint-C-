#include "AGR_CombatManager.h"

UAGR_CombatManager::UAGR_CombatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartSocketTraceName = TEXT("Start");
    this->EndSocketTraceName = TEXT("End");
    this->TraceChannel = TraceTypeQuery1;
    this->bTraceComplex = false;
    this->TracePrecision = 10;
    this->TraceSize = 5.00f;
    this->bDebug = false;
}

void UAGR_CombatManager::StartTrace() {
}

void UAGR_CombatManager::SetupDebug(const bool bInDebug) {
}

void UAGR_CombatManager::RemoveTraceMesh(UPrimitiveComponent* Mesh) {
}

void UAGR_CombatManager::RefreshIgnoredActors() {
}

void UAGR_CombatManager::GetAllWeapons(TArray<AActor*>& OutWeapons) {
}

void UAGR_CombatManager::EndTrace() {
}

void UAGR_CombatManager::ClearAllMeshes() {
}

void UAGR_CombatManager::AddTraceMesh(UPrimitiveComponent* Mesh, const EAGR_CombatColliderType CollisionHandling) {
}


