#pragma once
#include "CoreMinimal.h"
#include "EScrollIntoViewAlignment.generated.h"

UENUM(BlueprintType)
enum class EScrollIntoViewAlignment : uint8 {
    IntoView,
    TopOrLeft,
    CenterAligned,
    BottomOrRight,
};

