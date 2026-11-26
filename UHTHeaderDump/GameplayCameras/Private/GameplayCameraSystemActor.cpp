#include "GameplayCameraSystemActor.h"
#include "GameplayCameraSystemComponent.h"

AGameplayCameraSystemActor::AGameplayCameraSystemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGameplayCameraSystemComponent>(TEXT("CameraSystemComponent"));
    this->CameraSystemComponent = (UGameplayCameraSystemComponent*)RootComponent;
}

UGameplayCameraSystemComponent* AGameplayCameraSystemActor::GetCameraSystemComponent() const {
    return NULL;
}


