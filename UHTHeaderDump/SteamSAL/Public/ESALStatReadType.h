#pragma once
#include "CoreMinimal.h"
#include "ESALStatReadType.generated.h"

UENUM(BlueprintType)
enum class ESALStatReadType : uint8 {
    Integer,
    Float,
    Average,
};

