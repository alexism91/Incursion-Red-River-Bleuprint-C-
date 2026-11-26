#include "IRRZoneSubsystem.h"

UIRRZoneSubsystem::UIRRZoneSubsystem() {
}

void UIRRZoneSubsystem::ReloadZones() {
}

void UIRRZoneSubsystem::GetLeavesContaining(const FVector& Location, TArray<int32>& OutLeafIndices) const {
}

TArray<FIRRZoneLeaf> UIRRZoneSubsystem::GetLeaves() const {
    return TArray<FIRRZoneLeaf>();
}

bool UIRRZoneSubsystem::GetLeafByGuid(const FGuid& ZoneGuid, FIRRZoneLeaf& OutLeaf) const {
    return false;
}


