#pragma once
#include "CoreMinimal.h"
#include "EMaterialExpressionBoundsType.generated.h"

UENUM(BlueprintType)
enum EMaterialExpressionBoundsType {
    MEILB_InstanceLocal,
    MEILB_ObjectLocal,
    MEILB_PreSkinnedLocal,
};

