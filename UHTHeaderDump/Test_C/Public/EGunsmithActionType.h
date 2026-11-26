#pragma once
#include "CoreMinimal.h"
#include "EGunsmithActionType.generated.h"

UENUM(BlueprintType)
enum class EGunsmithActionType : uint8 {
    Modify,
    Install,
    Remove,
    Load,
};

