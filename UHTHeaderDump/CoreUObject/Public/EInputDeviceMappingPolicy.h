#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceMappingPolicy.generated.h"

UENUM()
enum class EInputDeviceMappingPolicy : int32 {
    Invalid = -1,
    UseManagedPlatformLogin = 0,
    PrimaryUserSharesKeyboardAndFirstGamepad,
    CreateUniquePlatformUserForEachDevice,
    MapAllDevicesToPrimaryUser,
};

