#pragma once
#include "CoreMinimal.h"
#include "ESlatePostRT.generated.h"

UENUM(BlueprintType)
enum class ESlatePostRT : uint8 {
    None,
    ESlatePostRT_0,
    ESlatePostRT_1,
    ESlatePostRT_2 = 4,
    ESlatePostRT_3 = 8,
    ESlatePostRT_4 = 16,
    All = 31,
    Num = 5,
};

