#pragma once
#include "CoreMinimal.h"
#include "ENiagaraAssetTagDefinitionImportance.generated.h"

UENUM(BlueprintType)
enum class ENiagaraAssetTagDefinitionImportance : uint8 {
    Primary,
    Secondary,
    Internal,
};

