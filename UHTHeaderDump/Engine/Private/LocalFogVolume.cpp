#include "LocalFogVolume.h"
#include "LocalFogVolumeComponent.h"

ALocalFogVolume::ALocalFogVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULocalFogVolumeComponent>(TEXT("LocalFogVolumeComponent"));
    this->LocalFogVolumeVolume = (ULocalFogVolumeComponent*)RootComponent;
}


