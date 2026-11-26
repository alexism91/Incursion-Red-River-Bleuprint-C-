#pragma once
#include "CoreMinimal.h"
#include "EQueryTargetPoint.generated.h"

UENUM(BlueprintType)
namespace EQueryTargetPoint {
    enum Type {
        Center,
        Closest,
    };
}

