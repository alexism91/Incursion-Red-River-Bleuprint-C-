#pragma once
#include "CoreMinimal.h"
#include "ERequestType.generated.h"

UENUM(BlueprintType)
namespace ERequestType {
    enum Type {
        Sphere,
        Box,
        Sector,
    };
}

