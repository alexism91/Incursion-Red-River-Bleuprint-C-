#pragma once
#include "CoreMinimal.h"
#include "ENavLinkBuilderFlags.generated.h"

UENUM(BlueprintType)
enum class ENavLinkBuilderFlags : uint8 {
    CreateCenterPointLink = 1,
    CreateExtremityLink,
};

