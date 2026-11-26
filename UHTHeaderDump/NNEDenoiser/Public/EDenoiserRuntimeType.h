#pragma once
#include "CoreMinimal.h"
#include "EDenoiserRuntimeType.generated.h"

UENUM(BlueprintType)
enum EDenoiserRuntimeType {
    CPU,
    GPU,
    RDG,
};

