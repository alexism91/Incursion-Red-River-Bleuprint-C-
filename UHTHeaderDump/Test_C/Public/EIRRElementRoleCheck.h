#pragma once
#include "CoreMinimal.h"
#include "EIRRElementRoleCheck.generated.h"

UENUM(BlueprintType)
enum class EIRRElementRoleCheck : uint8 {
    Member,
    Leader,
    Either,
};

