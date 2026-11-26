#pragma once
#include "CoreMinimal.h"
#include "EPanningRule.generated.h"

UENUM(BlueprintType)
enum class EPanningRule : uint8 {
    PanningRule_Speakers,
    PanningRule_Headphones,
    Last,
};

