#pragma once
#include "CoreMinimal.h"
#include "EMorphologyOperation.generated.h"

UENUM(BlueprintType)
enum class EMorphologyOperation : uint8 {
    Dilate,
    Contract,
    Close,
    Open,
};

