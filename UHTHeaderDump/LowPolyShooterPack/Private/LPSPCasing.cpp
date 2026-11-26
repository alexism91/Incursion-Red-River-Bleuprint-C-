#include "LPSPCasing.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ALPSPCasing::ALPSPCasing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Pivot"));
    this->Pivot = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->bUpdateScale = true;
    this->RotationSpeed = 2500.00f;
    this->Sound = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}

bool ALPSPCasing::ShouldUpdateScale() const {
    return false;
}


float ALPSPCasing::GetDestroyDelay() const {
    return 0.0f;
}



