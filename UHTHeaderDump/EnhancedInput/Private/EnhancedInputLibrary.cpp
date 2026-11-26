#include "EnhancedInputLibrary.h"

UEnhancedInputLibrary::UEnhancedInputLibrary() {
}

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(const UInputMappingContext* Context, bool bForceImmediately) {
}

FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType) {
    return FInputActionValue{};
}

bool UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(const FEnhancedActionKeyMapping& ActionKeyMapping) {
    return false;
}

UPlayerMappableKeySettings* UEnhancedInputLibrary::GetPlayerMappableKeySettings(const FEnhancedActionKeyMapping& ActionKeyMapping) {
    return NULL;
}

FName UEnhancedInputLibrary::GetMappingName(const FEnhancedActionKeyMapping& ActionKeyMapping) {
    return NAME_None;
}

FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(AActor* Actor, const UInputAction* Action) {
    return FInputActionValue{};
}

void UEnhancedInputLibrary::FlushPlayerInput(APlayerController* PlayerController) {
}

FString UEnhancedInputLibrary::Conv_TriggerEventValueToString(const ETriggerEvent TriggerEvent) {
    return TEXT("");
}

FString UEnhancedInputLibrary::Conv_InputActionValueToString(FInputActionValue ActionValue) {
    return TEXT("");
}

bool UEnhancedInputLibrary::Conv_InputActionValueToBool(FInputActionValue InValue) {
    return false;
}

FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(FInputActionValue ActionValue) {
    return FVector{};
}

FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(FInputActionValue InValue) {
    return FVector2D{};
}

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(FInputActionValue InValue) {
    return 0.0;
}

void UEnhancedInputLibrary::BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type) {
}


