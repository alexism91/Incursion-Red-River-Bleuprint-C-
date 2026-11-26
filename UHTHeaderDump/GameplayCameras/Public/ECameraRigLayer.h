#pragma once
#include "CoreMinimal.h"
#include "ECameraRigLayer.generated.h"

UENUM(BlueprintType)
enum class ECameraRigLayer : uint8 {
    None,
    Base,
    Main,
    Global,
    Visual,
};

