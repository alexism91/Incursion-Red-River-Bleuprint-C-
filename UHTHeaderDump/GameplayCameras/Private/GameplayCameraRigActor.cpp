#include "GameplayCameraRigActor.h"
#include "GameplayCameraRigComponent.h"

AGameplayCameraRigActor::AGameplayCameraRigActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGameplayCameraRigComponent>(TEXT("CameraRigComponent"));
    this->CameraRigComponent = (UGameplayCameraRigComponent*)RootComponent;
}

UGameplayCameraRigComponent* AGameplayCameraRigActor::GetCameraRigComponent() const {
    return NULL;
}


