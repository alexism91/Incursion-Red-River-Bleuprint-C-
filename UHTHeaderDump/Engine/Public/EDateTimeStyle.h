#pragma once
#include "CoreMinimal.h"
#include "EDateTimeStyle.generated.h"

UENUM(BlueprintType)
namespace EDateTimeStyle {
    enum Type {
        Default,
        Short,
        Medium,
        Long,
        Full,
        Custom,
    };
}

