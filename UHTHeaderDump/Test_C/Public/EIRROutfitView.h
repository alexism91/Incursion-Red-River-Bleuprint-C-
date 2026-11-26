#pragma once
#include "CoreMinimal.h"
#include "EIRROutfitView.generated.h"

UENUM(BlueprintType)
enum class EIRROutfitView : uint8 {
    Everyone,
    FirstPersonOnly,
    ThirdPersonOnly,
};

