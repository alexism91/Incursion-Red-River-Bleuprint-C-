#include "LaserComponent.h"

ULaserComponent::ULaserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserMesh = NULL;
    this->LaserDot = NULL;
}

bool ULaserComponent::HasLaserImpact() const {
    return false;
}

UStaticMeshComponent* ULaserComponent::GetLaserMesh() const {
    return NULL;
}

FVector ULaserComponent::GetLaserImpactPoint() const {
    return FVector{};
}

float ULaserComponent::GetLaserImpactDistance() const {
    return 0.0f;
}

AActor* ULaserComponent::GetLaserImpactActor() const {
    return NULL;
}

bool ULaserComponent::GetLaserImpact(FVector& OutPoint, AActor*& OutHitActor, float& OutDistance) const {
    return false;
}

UStaticMeshComponent* ULaserComponent::GetLaserDot() const {
    return NULL;
}


