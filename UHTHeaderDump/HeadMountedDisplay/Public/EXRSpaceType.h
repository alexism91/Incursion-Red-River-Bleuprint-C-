#pragma once
#include "CoreMinimal.h"
#include "EXRSpaceType.generated.h"

UENUM(BlueprintType)
enum class EXRSpaceType : uint8 {
    UnrealWorldSpace,
    XRTrackingSpace,
};

