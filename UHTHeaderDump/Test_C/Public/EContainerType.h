#pragma once
#include "CoreMinimal.h"
#include "EContainerType.generated.h"

UENUM(BlueprintType)
enum class EContainerType : uint8 {
    EquipTo,
    Container,
    Storage,
};

