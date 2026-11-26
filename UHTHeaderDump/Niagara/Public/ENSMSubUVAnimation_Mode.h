#pragma once
#include "CoreMinimal.h"
#include "ENSMSubUVAnimation_Mode.generated.h"

UENUM()
enum class ENSMSubUVAnimation_Mode : int32 {
    DirectSet,
    InfiniteLoop,
    Linear,
    Random,
};

