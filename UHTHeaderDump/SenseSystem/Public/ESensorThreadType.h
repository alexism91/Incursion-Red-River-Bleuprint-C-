#pragma once
#include "CoreMinimal.h"
#include "ESensorThreadType.generated.h"

UENUM(BlueprintType)
enum class ESensorThreadType : uint8 {
    Main_Thread,
    Sense_Thread,
    Sense_Thread_HighPriority,
    Async_Task,
};

