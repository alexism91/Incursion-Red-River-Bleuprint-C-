#include "IRRMinimapManager.h"
#include "Net/UnrealNetwork.h"

UIRRMinimapManager::UIRRMinimapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapMaterialParameterCollection = NULL;
    this->MapMaterial = NULL;
}

void UIRRMinimapManager::UnregisterPing(FIRRPingData PingData) {
}

void UIRRMinimapManager::UnregisterMarker(UIRRMarkerComponent* Marker) {
}

void UIRRMinimapManager::RemoveHiddenPingsForController(APlayerController* Controller) {
}

void UIRRMinimapManager::RegisterPing(FIRRPingData PingData) {
}

void UIRRMinimapManager::RegisterMarker(UIRRMarkerComponent* Marker) {
}

void UIRRMinimapManager::OnRep_Pings(TArray<FIRRPingData> OldPings) {
}

void UIRRMinimapManager::OnRep_Markers(TArray<UIRRMarkerComponent*> OldMarkers) {
}

void UIRRMinimapManager::NotifyMarkerBindingsChanged() {
}

TArray<FIRRPingData> UIRRMinimapManager::GetPingDataByInstigator(ACharacter* InInstigator) {
    return TArray<FIRRPingData>();
}

TArray<UIRRMarkerComponent*> UIRRMinimapManager::GetMarkersByTag(FGameplayTag InTag) {
    return TArray<UIRRMarkerComponent*>();
}

UIRRMarkerComponent* UIRRMinimapManager::GetClosestMarkerToLocation(const TArray<UIRRMarkerComponent*> InMarkers, FVector InLocation) {
    return NULL;
}

TArray<UIRRMarkerComponent*> UIRRMinimapManager::FilterMarkersByTag(const TArray<UIRRMarkerComponent*> InMarkers, FGameplayTag InTag) {
    return TArray<UIRRMarkerComponent*>();
}

void UIRRMinimapManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRMinimapManager, Markers);
    DOREPLIFETIME(UIRRMinimapManager, Pings);
}


