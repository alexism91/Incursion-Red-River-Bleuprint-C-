#include "GameplayCameraActor.h"
#include "GameplayCameraComponent.h"

AGameplayCameraActor::AGameplayCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGameplayCameraComponent>(TEXT("CameraComponent"));
    this->CameraComponent = (UGameplayCameraComponent*)RootComponent;
}

UGameplayCameraComponent* AGameplayCameraActor::GetCameraComponent() const {
    return NULL;
}


