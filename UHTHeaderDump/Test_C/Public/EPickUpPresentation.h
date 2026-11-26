#pragma once
#include "CoreMinimal.h"
#include "EPickUpPresentation.generated.h"

UENUM(BlueprintType)
enum class EPickUpPresentation : uint8 {
    Untouched,
    Carried,
    Worn,
    Dropped,
};

