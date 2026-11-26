#include "PCGBlueprintPinHelpers.h"

UPCGBlueprintPinHelpers::UPCGBlueprintPinHelpers() {
}

FPCGPinProperties UPCGBlueprintPinHelpers::MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bIsAdvancedPin, EPCGExclusiveDataType AllowedType) {
    return FPCGPinProperties{};
}

bool UPCGBlueprintPinHelpers::IsOfType(int32 AllowedTypes, EPCGExclusiveDataType TypeToCheck) {
    return false;
}

bool UPCGBlueprintPinHelpers::IsExactlySameType(int32 AllowedTypes, EPCGExclusiveDataType TypeToCheck) {
    return false;
}

int32 UPCGBlueprintPinHelpers::GetCorrespondingDataType(EPCGExclusiveDataType InExclusiveDataType) {
    return 0;
}

void UPCGBlueprintPinHelpers::BreakPinProperty(const FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bIsAdvancedPin, EPCGExclusiveDataType& AllowedType) {
}


