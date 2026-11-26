#pragma once
#include "CoreMinimal.h"
#include "EActionScanMode.generated.h"

UENUM(BlueprintType)
namespace EActionScanMode {
    enum Type {
        MinToMax,
        MaxToMin,
        PingPong,
    };
}

