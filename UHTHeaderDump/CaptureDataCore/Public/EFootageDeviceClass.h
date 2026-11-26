#pragma once
#include "CoreMinimal.h"
#include "EFootageDeviceClass.generated.h"

UENUM(BlueprintType)
enum class EFootageDeviceClass : uint8 {
    Unspecified,
    iPhone11OrEarlier,
    iPhone12,
    iPhone13,
    iPhone14OrLater,
    OtheriOSDevice,
    StereoHMC,
};

