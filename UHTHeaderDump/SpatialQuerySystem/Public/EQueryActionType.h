#pragma once
#include "CoreMinimal.h"
#include "EQueryActionType.generated.h"

UENUM(BlueprintType)
namespace EQueryActionType {
    enum Type {
        GAT_All,
        GAT_Nearest,
        GAT_Farthest,
        GAT_Random,
    };
}

