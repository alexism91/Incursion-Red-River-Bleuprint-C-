#pragma once
#include "CoreMinimal.h"
#include "EMirrorSaveMode.generated.h"

UENUM(BlueprintType)
enum class EMirrorSaveMode : uint8 {
    InputObjects,
    NewObjects,
};

