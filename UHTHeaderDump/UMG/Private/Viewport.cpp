#include "Viewport.h"
#include "Templates/SubclassOf.h"

UViewport::UViewport() {
}

AActor* UViewport::Spawn(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UViewport::SetViewRotation(FRotator Rotation) {
}

void UViewport::SetViewLocation(FVector Location) {
}

void UViewport::SetSkyIntensity(float LightIntensity) {
}

void UViewport::SetShowFlag(const FString& InShowFlagName, bool InValue) {
}

void UViewport::SetLightIntensity(float LightIntensity) {
}

void UViewport::SetEnableAdvancedFeatures(bool InEnableAdvancedFeatures) {
}

FRotator UViewport::GetViewRotation() const {
    return FRotator{};
}

FMatrix UViewport::GetViewProjectionMatrix() const {
    return FMatrix{};
}

UWorld* UViewport::GetViewportWorld() const {
    return NULL;
}

FVector UViewport::GetViewLocation() const {
    return FVector{};
}


