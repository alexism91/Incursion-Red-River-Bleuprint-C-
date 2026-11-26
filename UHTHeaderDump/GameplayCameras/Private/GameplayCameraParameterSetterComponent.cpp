#include "GameplayCameraParameterSetterComponent.h"

UGameplayCameraParameterSetterComponent::UGameplayCameraParameterSetterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendInTime = 1.00f;
    this->BlendOutTime = 1.00f;
    this->BlendType = ECameraVariableSetterBlendType::Linear;
}

void UGameplayCameraParameterSetterComponent::StopParameterSetters(bool bImmediately) {
}

void UGameplayCameraParameterSetterComponent::StartParameterSetters() {
}

void UGameplayCameraParameterSetterComponent::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UGameplayCameraParameterSetterComponent::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


